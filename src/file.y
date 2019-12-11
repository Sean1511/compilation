%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lex.yy.c"
#include "src/utils/functions.c"
int yylex(void);
int yyerror(char *s);
%}

%token FUNCTION VOID INT REAL SEMICOLON IF ELSE ASSIGNMENT GREATER PLUS LEFTBRACE RIGHTBRACE LEFTPAREN RIGHTPAREN ID INTEGER CHAR RETURN COMMA BOOL MAIN INTPTR CHARPTR REALPTR STRING BOOLTRUE BOOLFALSE CSNULL LEFTBRACKET RIGHTBRACKET PERCENT QUOTES DOUBLEQUOTES AND DIVISION EQUAL GREATEREQUAL LESS LESSEQUAL MINUS NOT NOTEQUAL OR MULTI ADDRESS DEREFERENCE ABSUOLUTE COLON HEX STR WHILE FOR DO VAR CHARACTER REAL_D 

%nonassoc MA
%nonassoc XIF
%nonassoc ELSE
%nonassoc AND OR
%right ASSIGNMENT NOT SEMICOLON MAIN
%left LEFTBRACE RIGHTBRACE LEFTPAREN RIGHTPAREN
%left EQUAL GREATER GREATEREQUAL LESSEQUAL LESS NOTEQUAL 
%left MINUS PLUS 
%left MULTI DIVISION
%start s

%%
s:
    code {printtree($1, 0);}
    ;

code:
    functions Main {$$ = mknode ("CODE"); addNode(&$$, $1); addNode(&$$, $2);}
    | Main {$$ = mknode ("CODE"); addNode(&$$, $1);} 
    ;

Main: 
    FUNCTION VOID MAIN LEFTPAREN RIGHTPAREN void_block {$$ = mknode("MAIN"); addNode(&$$, $6);} 
    ;

functions:
    functions function {addNode(&$1, $2);}
    | function
    ;

function: 
    void_func  
    |value_func 
    ;

void_func: 
    FUNCTION func_type id LEFTPAREN args RIGHTPAREN void_block {$$ = mknode ("FUNCTION"); addNode(&$$,$3); addNode(&$$,$5); addNode(&$$, $2); addNode(&$$, $7);}
    ; 

value_func: 
    FUNCTION func_type id LEFTPAREN args RIGHTPAREN value_block {$$ = mknode ("FUNCTION"); addNode(&$$,$3); addNode(&$$,$5); addNode(&$$, $2); addNode(&$$, $7);}
    ;

 void_block:
    LEFTBRACE RIGHTBRACE {$$ = mknode ("BODY"); }
    |LEFTBRACE var_decleration statments RIGHTBRACE {$$ = mknode ("BODY"); addNode(&$$,$2); addNode(&$$, $3);}
    |LEFTBRACE statments RIGHTBRACE {$$ = mknode ("BODY"); addNode(&$$,$2);}
    |LEFTBRACE functions var_decleration statments RIGHTBRACE {$$ = mknode("BODY"); addNode(&$$, $2); addNode(&$$,$3); addNode(&$$,$4);}
    |LEFTBRACE functions statments RIGHTBRACE {$$ = mknode("BODY"); addNode(&$$, $2); addNode(&$$,$3);}
    ;
    
value_block:
    LEFTBRACE RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode ("BODY"); node* ret = mknode("RET"); addNode(&ret,$3); addNode(&$$,ret);}
    |LEFTBRACE statments RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode ("BODY"); addNode(&$$, $2); node* ret = mknode("RET"); addNode(&ret,$4); addNode(&$$,ret);}
    |LEFTBRACE functions statments RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode("BODY"); addNode(&$$, $2); addNode(&$$,$3); node* ret = mknode("RET"); addNode(&ret,$5); addNode(&$$,ret);}
    |LEFTBRACE var_decleration statments RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode ("BODY"); addNode(&$$, $2); addNode(&$$, $3); node* ret = mknode("RET"); addNode(&ret,$5); addNode(&$$,ret);}
    |LEFTBRACE functions var_decleration statments RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode("BODY"); addNode(&$$, $2); addNode(&$$,$3); addNode(&$$, $4); node* ret = mknode("RET"); addNode(&ret,$6); addNode(&$$,ret);}
    ; 
 
statments:
    statment statments {$$ = combine("sean", $1, $2);}
    |statment
    ;
    
statment:
    stat_assignment SEMICOLON
    |string_assignment SEMICOLON
    |if_statment 
    |if_else_statment
    |loop_statment
    |block 
    |func_call
    ;

if_statment:
    IF LEFTPAREN condition RIGHTPAREN statment {$$ = mknode("IF"); addNode(&$$, $3); addNode(&$$,$5);}  %prec XIF
    ;

if_else_statment:
    IF LEFTPAREN condition RIGHTPAREN statment ELSE statment {$$ = mknode("IF-ELSE"); addNode(&$$, $3); addNode(&$$,$5); addNode(&$$, $7);}
    ;

loop_statment: 
    for
    |while 
    |do_while
    ;

for:
    FOR LEFTPAREN stat_assignment SEMICOLON logical_exp SEMICOLON stat_assignment RIGHTPAREN statment {$$ = mknode("FOR"); addNode(&$$, $3); addNode(&$$, $5); addNode(&$$, $7); addNode(&$$, $9);}

while:
    WHILE LEFTPAREN condition RIGHTPAREN statment {$$ = mknode("WHILE"); addNode(&$$, $3); addNode(&$$, $5);}
    ;

do_while:
    DO block WHILE LEFTPAREN condition RIGHTPAREN SEMICOLON {$$ = mknode("DO-WHILE"); addNode(&$$, $2); addNode(&$$, $5);}

stat_assignment:
    id ASSIGNMENT expression {$$ = mknode("s"); node* s = mknode("="); addNode(&s,$1); addNode(&s,$3); addNode(&$$,s);}
    ;

string_assignment:
    id LEFTBRACKET int_exp RIGHTBRACKET ASSIGNMENT char {$$ = mknode("="); addNode(&$$, $1); addNode(&$$,$3); addNode(&$$, $6);}
    ;

expression:
    expression PLUS expression {$$ = mknode("+"); addNode(&$$,$1); addNode(&$$, $3);}
    | expression MINUS expression {$$ = mknode("-"); addNode(&$$,$1); addNode(&$$, $3);}
    | expression MULTI expression {$$ = mknode("*"); addNode(&$$,$1); addNode(&$$, $3);}
    | expression DIVISION expression {$$ = mknode("/"); addNode(&$$,$1); addNode(&$$, $3);}
    | INTEGER {$$ = mknode(yytext);}
    | char
    | REAL_D {$$ = mknode(yytext);}
    | id
    ;

int_exp:
    int_exp PLUS int_exp {$$ = mknode("+"); addNode(&$$,$1); addNode(&$$, $3);}
    | int_exp MINUS int_exp {$$ = mknode("-"); addNode(&$$,$1); addNode(&$$, $3);}
    | int_exp MULTI int_exp {$$ = mknode("*"); addNode(&$$,$1); addNode(&$$, $3);}
    | int_exp DIVISION int_exp {$$ = mknode("/"); addNode(&$$,$1); addNode(&$$, $3);} 
    | INTEGER {$$ = mknode(yytext);}
    ;

func_call: 
    id LEFTPAREN params RIGHTPAREN SEMICOLON { $$ = mknode ("FUNC_CALL"); addNode(&$$,$1); node* args = mknode("ARGS"); mknodelist(args, $3); addNode(&$$, args);}
    |id ASSIGNMENT id LEFTPAREN params RIGHTPAREN SEMICOLON { $$ = mknode ("="); addNode(&$$,$1); node* call = mknode("FUNC_CALL"); node* args = mknode("ARGS"); mknodelist(args, $5); addNode(&call, args); addNode(&$$, call);}
    ; 

condition:
    logical_exp AND condition {$$ = mknode("&&"); addNode(&$$,$1); addNode(&$$,$3); } %prec AND
    |logical_exp OR condition {$$ = mknode("||"); addNode(&$$,$1); addNode(&$$,$3); } %prec OR
    |logical_exp
    ;

logical_exp:
    expression EQUAL expression { $$ = mknode ("=="); addNode(&$$,$1); addNode(&$$, $3);}
    | expression GREATER expression { $$ = mknode (">"); addNode(&$$,$1); addNode(&$$, $3);}
    | expression GREATEREQUAL expression { $$ = mknode (">="); addNode(&$$,$1); addNode(&$$, $3);}
    | expression LESS expression { $$ = mknode ("<"); addNode(&$$,$1); addNode(&$$, $3);}
    | expression LESSEQUAL expression { $$ = mknode ("<="); addNode(&$$,$1); addNode(&$$, $3);}
    | expression NOTEQUAL expression { $$ = mknode ("!="); addNode(&$$,$1); addNode(&$$, $3);}
    | NOT expression {$$ = mknode ("NOT"); addNode(&$$,$2);}
    ;

block:
    LEFTBRACE statments RIGHTBRACE {$$ = mknode("BLOCK"); addNode(&$$,$2);}
    |LEFTBRACE RIGHTBRACE {$$ = mknode("BLOCK");}
    ;   

func_type:
    VOID {$$ = mknode ("TYPE VOID");}
    |INT {$$ = mknode ("TYPE INT");}
    |REAL {$$ = mknode ("TYPE REAL");} 
    |CHAR {$$ = mknode ("TYPE CHAR");}
    |BOOL {$$ = mknode ("TYPE BOOL");}
    ;

var_type:  
    INT {$$ = mknode ("INT"); }
    |REAL {$$ = mknode ("REAL"); } 
    |CHAR {$$ = mknode ("CHAR"); }
    |BOOL {$$ = mknode ("BOOL");}
    ;    

args:
    params_decleration args {$$ = mknode("ARGS"); addNode(&$$,$1);}
    |params_decleration SEMICOLON {$$ = mknode("ARGS"); addNode(&$$,$1);}
    |params_decleration SEMICOLON params_decleration {$$ = mknode("ARGS"); addNode(&$$,$1); addNode(&$$, $3);}
    |%empty {$$ = mknode("ARGS NONE");}
    ;

var_decleration:
    VAR params_decleration SEMICOLON var_decleration {$$ = mknode("VAR"); addNode(&$$, $2); addNode(&$$, $4);}
    |VAR params_decleration SEMICOLON {$$ = mknode("VAR"); addNode(&$$, $2);}
    |STRING string_decleration SEMICOLON {$$ = mknode("STRING"); addNode(&$$, $2);}
    ;

string_decleration:
    id LEFTBRACKET int_exp RIGHTBRACKET COMMA string_decleration {$$ = $1; addNode(&$$,$3); addNode(&$$,$6);}
    | id LEFTBRACKET int_exp RIGHTBRACKET {$$ = $1; addNode(&$$,$3);}
    | id LEFTBRACKET int_exp RIGHTBRACKET ASSIGNMENT string {$$ = mknode("="); addNode(&$$,$1); addNode(&$1,$3); addNode(&$$, $6);}
    | id LEFTBRACKET int_exp RIGHTBRACKET ASSIGNMENT string COMMA string_decleration {$$ = mknode("="); addNode(&$$,$1); addNode(&$1,$3); addNode(&$$, $6); addNode(&$$, $8);}
    ;

params_decleration:
    var_type params {$$ = mknode($1->token); mknodelist($$,$2);}
    ;

params:
    id COMMA params {addNode(&$1,$3);}
    |id 
    ;

string:
    STR {$$ = mknode(yytext);}
    ;

char:
    CHARACTER {$$ = mknode(yytext);}
    ;

id: 
    ID {$$ = mknode(yytext);}
    ;


%%

int main(){
    return yyparse();
}

int yyerror(char* s){
    printf("%s: found line:%d token [%s]\n", s, linecount, yytext);
    return 0;
}