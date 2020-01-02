%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lex.yy.c"
#include "src/utils/functions.c"
int yylex(void);
int yyerror(char *s);
%}
%token FUNCTION VOID RETURN MAIN
%token INT REAL ID INTEGER CHAR BOOL INTPTR CHARPTR REALPTR STRING BOOLTRUE BOOLFALSE CSNULL REAL_D CHARACTER HEX STR VAR SIZE 
%token IF ELSE WHILE FOR DO
%token GREATER PLUS ASSIGNMENT COMMA DIVISION AND EQUAL GREATEREQUAL LESS LESSEQUAL MINUS NOT NOTEQUAL OR MULTI ADDRESS DEREFERENCE ABSUOLUTE
%token SEMICOLON LEFTBRACE RIGHTBRACE LEFTPAREN RIGHTPAREN LEFTBRACKET RIGHTBRACKET PERCENT QUOTES DOUBLEQUOTES COLON 
%nonassoc XIF
%nonassoc ELSE
%right ASSIGNMENT NOT SEMICOLON MAIN
%left LEFTBRACE RIGHTBRACE LEFTPAREN RIGHTPAREN
%left AND OR
%left EQUAL GREATER GREATEREQUAL LESSEQUAL LESS NOTEQUAL 
%left MINUS PLUS
%left MULL MULTI DIVISION
%expect 1
%start s

%%
s:
    code {semanticAnalysis($1);}
    ;

code:
    functions Main {$$ = mknode ("CODE"); addlist($$, $1); addNode(&$$, $2);}
    | Main {$$ = mknode ("CODE"); addNode(&$$, $1);} 
    ;

Main: 
    FUNCTION VOID MAIN LEFTPAREN RIGHTPAREN void_block {$$ = mknode("MAIN"); addNode(&$$, $6);} 
    ;

functions:
    functions function {$$ = integrate("", $1, $2);}
    |function
    ;

function: 
    void_func  
    |value_func 
    ;

void_func: 
    FUNCTION VOID id LEFTPAREN args RIGHTPAREN void_block {$$ = mknode("s"); node* s = mknode ("FUNCTION"); s->line = $3->line; node* v = mknode("VOID"); addNode(&s,$3); addNode(&s,$5); addNode(&s, v); addNode(&s, $7); addNode(&$$,s);}
    ; 

value_func: 
    FUNCTION func_type id LEFTPAREN args RIGHTPAREN value_block {$$ = mknode("s"); node* s = mknode ("FUNCTION"); s->line = $3->line; addNode(&s,$3); addNode(&s,$5); addNode(&s, $2); addNode(&s, $7); addNode(&$$,s);}
    ;

 void_block:
    LEFTBRACE RIGHTBRACE {$$ = mknode ("BODY"); }
    |LEFTBRACE declerations statments RIGHTBRACE {$$ = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,$2);addNode(&$$,v); addlist($$, $3);}
    |LEFTBRACE statments RIGHTBRACE {$$ = mknode ("BODY"); addlist($$,$2);}
    |LEFTBRACE functions declerations statments RIGHTBRACE {$$ = mknode("BODY"); addlist($$, $2); node* v = mknode("VAR"); addlist(v,$3);addNode(&$$,v);addlist($$,$4);}
    |LEFTBRACE functions statments RIGHTBRACE {$$ = mknode("BODY"); addlist($$, $2); addlist($$,$3);}
    |LEFTBRACE functions RIGHTBRACE {$$ = mknode("BODY"); addlist($$, $2);}
    |LEFTBRACE declerations RIGHTBRACE {$$ = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,$2);addNode(&$$,v);}
    ;
    
value_block:
    LEFTBRACE RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode ("BODY"); node* ret = mknode("RET"); addNode(&ret,$3); addNode(&$$,ret);}
    |LEFTBRACE statments RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode ("BODY"); addlist($$, $2); node* ret = mknode("RET"); addNode(&ret,$4); addNode(&$$,ret);}
    |LEFTBRACE functions statments RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode("BODY"); addlist($$, $2); addlist($$,$3); node* ret = mknode("RET"); addNode(&ret,$5); addNode(&$$,ret);}
    |LEFTBRACE declerations statments RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode ("BODY");node* v = mknode("VAR"); addlist(v, $2); addNode(&$$,v); addlist($$, $3); node* ret = mknode("RET"); addNode(&ret,$5); addNode(&$$,ret);}
    |LEFTBRACE functions declerations statments RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode("BODY"); addlist($$, $2);  node* v = mknode("VAR"); addlist(v, $3); addNode(&$$,v); addlist($$, $4); node* ret = mknode("RET"); addNode(&ret,$6); addNode(&$$,ret);}
    |LEFTBRACE functions RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode("BODY"); addlist($$, $2); node* ret = mknode("RET"); addNode(&ret,$4); addNode(&$$,ret);}
    |LEFTBRACE declerations RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,$2);addNode(&$$,v); node* ret = mknode("RET"); addNode(&ret,$4); addNode(&$$,ret);}
    ; 
 
statments:
    statments statment {$$ = integrate("", $1, $2);}
    |statment
    ;
    
statment:
    stat_assignment SEMICOLON
    |string_assignment SEMICOLON
    |if_statment 
    |if_else_statment
    |loop_statment
    |block 
    |func_call SEMICOLON
    |RETURN expression SEMICOLON {$$ = mknode("s"); node* s = mknode("RET"); addNode(&s, $2); addNode(&$$, s);}
    |RETURN SEMICOLON {$$ = mknode("s"); node* s = mknode("RET"); addNode(&$$, s);}
    ;

if_statment:
    IF LEFTPAREN expression RIGHTPAREN statment {$$ = mknode("s"); node* s = mknode("IF"); s->line = $3->line; addNode(&s, $3);  addlist(s,$5); s->nodes[1]->father = "IF"; addNode(&$$,s);}  %prec XIF
    ;

if_else_statment:
    IF LEFTPAREN expression RIGHTPAREN statment ELSE statment {$$ = mknode("s"); node* s = mknode("IF-ELSE"); s->line = $3->line; addNode(&s, $3); addlist(s,$5); s->nodes[1]->father = "IF"; addlist(s, $7); addNode(&$$,s);}
    ;

loop_statment: 
    for
    |while 
    |do_while
    ;

for:
    FOR LEFTPAREN stat_assignment SEMICOLON expression SEMICOLON stat_assignment RIGHTPAREN statment {$$ = mknode("s"); node* s = mknode("FOR"); s->line = $3->line; addlist(s, $3); addNode(&s, $5); addlist(s, $7); addlist(s, $9); s->nodes[3]->father = "FOR"; addNode(&$$,s);}

while:
    WHILE LEFTPAREN expression RIGHTPAREN statment {$$ = mknode("s"); node* s = mknode("WHILE"); s->line = $3->line; addNode(&s, $3); addlist(s, $5); s->nodes[1]->father = "WHILE"; addNode(&$$,s);}
    ;

do_while:
    DO block WHILE LEFTPAREN expression RIGHTPAREN SEMICOLON {$$ = mknode("s"); node* s = mknode("DO-WHILE"); s->line = $5->line; addlist(s, $2); s->nodes[0]->father = "DO-WHILE"; addNode(&s, $5); addNode(&$$,s);}

stat_assignment:
    id ASSIGNMENT expression {$$ = mknode("s"); node* s = mknode("="); s->line = linecount; addNode(&s,$1); addNode(&s,$3); addNode(&$$,s);}
    | ptr ASSIGNMENT expression {$$ = mknode("s"); node* s = mknode("="); s->line = linecount; addNode(&s,$1); addNode(&s,$3); addNode(&$$,s);}
    ;

string_assignment:
    id LEFTBRACKET expression RIGHTBRACKET ASSIGNMENT expression {$$ = mknode("s"); node* s = mknode("="); node* index = mknode("INDEX"); addNode(&index,$3); addNode(&$1, index); addNode(&s, $1); addNode(&s,$6); addNode(&$$,s);}
    ;

expression:
    expression PLUS expression {$$ = mknode("+"); $$->line = $1->line; addNode(&$$,$1); addNode(&$$, $3);}
    | expression MINUS expression {$$ = mknode("-"); $$->line = $1->line; addNode(&$$,$1); addNode(&$$, $3);}
    | expression MULTI expression {$$ = mknode("*"); $$->line = $1->line; addNode(&$$,$1); addNode(&$$, $3);} 
    | expression DIVISION expression {$$ = mknode("/"); $$->line = $1->line; addNode(&$$,$1); addNode(&$$, $3);}
    | expression EQUAL expression { $$ = mknode ("=="); $$->line = $1->line; addNode(&$$,$1); addNode(&$$, $3);}
    | expression GREATER expression { $$ = mknode (">"); $$->line = $1->line; addNode(&$$,$1); addNode(&$$, $3);}
    | expression GREATEREQUAL expression { $$ = mknode (">="); $$->line = $1->line; addNode(&$$,$1); addNode(&$$, $3);}
    | expression LESS expression { $$ = mknode ("<"); $$->line = $1->line; addNode(&$$,$1); addNode(&$$, $3);}
    | expression LESSEQUAL expression { $$ = mknode ("<="); $$->line = $1->line; addNode(&$$,$1); addNode(&$$, $3);}
    | expression NOTEQUAL expression { $$ = mknode ("!="); $$->line = $1->line; addNode(&$$,$1); addNode(&$$, $3);}
    | expression AND expression {$$ = mknode("&&"); $$->line = $1->line; addNode(&$$,$1); addNode(&$$,$3);} 
    | expression OR expression {$$ = mknode("||"); $$->line = $1->line; addNode(&$$,$1); addNode(&$$,$3);} 
    | NOT expression {$$ = mknode ("NOT"); $$->line = $2->line; addNode(&$$,$2);}
    | LEFTPAREN expression RIGHTPAREN {$$ = $2; $$->line = $2->line;}
    | ABSUOLUTE expression ABSUOLUTE {$$ = mknode("LEN OF"); addNode(&$$,$2);}
    | ADDRESS id {$$ = mknode("&"); addNode(&$$, $2);}
    | ADDRESS string_id {$$ = mknode("&"); addNode(&$$, $2);}
    | int
    | hex
    | real
    | string_id 
    | true 
    | false 
    | csnull
    | id
    | char
    | string
    | ptr %prec MULL
    ;

func_call: 
    id LEFTPAREN func_params RIGHTPAREN {$$ = mknode("s"); node* s = mknode ("FUNC_CALL");  addNode(&s,$1); node* args = mknode("ARGS"); args->line = $1->line; addlist(args, $3); addNode(&s, args); addNode(&$$,s);}
    |id ASSIGNMENT id LEFTPAREN func_params RIGHTPAREN {$$ = mknode("s"); node* s = mknode ("="); s->line = $3->line; addNode(&s,$1); node* call = mknode("FUNC_CALL"); addNode(&call,$3); node* args = mknode("ARGS"); args->line = $1->line; addlist(args, $5); addNode(&call, args); addNode(&s, call); addNode(&$$,s);}
    |id LEFTPAREN RIGHTPAREN {$$ = mknode("s"); node* s = mknode ("FUNC_CALL"); addNode(&s,$1); node* args = mknode("ARGS NONE"); args->line = $1->line; addNode(&s, args); addNode(&$$,s);}
    |id ASSIGNMENT id LEFTPAREN RIGHTPAREN {$$ = mknode("s"); node* s = mknode ("="); s->line = $3->line; addNode(&s,$1); node* call = mknode("FUNC_CALL"); addNode(&call,$3); node* args = mknode("ARGS NONE"); args->line = $1->line; addNode(&call, args); addNode(&s, call); addNode(&$$,s);}
    ; 

func_params:
    func_params func {$$ = integrate("", $1, $2);}
    |func
    ;    

func:
    expression COMMA {$$ = mknode("s"); addNode(&$$,$1);}
    | expression {$$ = mknode("s"); addNode(&$$,$1);}
    ;

block:
    LEFTBRACE RIGHTBRACE {$$ =  mknode("BLOCK");}
    |LEFTBRACE statments RIGHTBRACE {$$ = mknode("s"); node* s = mknode("BLOCK"); addlist(s,$2); addNode(&$$,s);}
    |LEFTBRACE declerations RIGHTBRACE {$$ = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,$2); addNode(&s,v); addNode(&$$,s);}
    |LEFTBRACE declerations statments RIGHTBRACE {$$ = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,$2); addNode(&s,v); addlist(s, $3); addNode(&$$,s);}    
    |LEFTBRACE RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode("BLOCK"); node* ret = mknode("RET"); addNode(&ret,$3); addNode(&$$,ret);}
    |LEFTBRACE statments RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode("s"); node* s = mknode("BLOCK"); addlist(s,$2);node* ret = mknode("RET"); addNode(&ret,$4); addNode(&s,ret); addNode(&$$,s);}
    |LEFTBRACE declerations RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,$2); addNode(&s,v); node* ret = mknode("RET"); addNode(&ret,$4); addNode(&s,ret); addNode(&$$,s);}
    |LEFTBRACE declerations statments RETURN expression SEMICOLON RIGHTBRACE {$$ = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,$2); addNode(&s,v); addlist(s, $3); node* ret = mknode("RET"); addNode(&ret,$5); addNode(&s,ret); addNode(&$$,s);}  
    ;   

func_type:
    INT {$$ = mknode ("INT");}
    |REAL {$$ = mknode ("REAL");} 
    |CHAR {$$ = mknode ("CHAR");}
    |BOOL {$$ = mknode ("BOOL");}
    |INTPTR {$$ = mknode ("INT*");}
    |CHARPTR {$$ = mknode ("CHAR*");}
    |REALPTR {$$ = mknode ("REAL*");}
    ;

var_type:  
    INT {$$ = mknode ("INT");}
    |REAL {$$ = mknode ("REAL");} 
    |CHAR {$$ = mknode ("CHAR");}
    |BOOL {$$ = mknode ("BOOL");}
    |INTPTR {$$ = mknode ("INT*");}
    |CHARPTR {$$ = mknode ("CHAR*");}
    |REALPTR {$$ = mknode ("REAL*");}
    ;    

args:
    args_decleration {$$ = mknode("ARGS"); addlist($$,$1);}
    |args_decleration SEMICOLON args {$$ = mknode("ARGS"); addlist($$,$1); addlist($$, $3);}
    |%empty {$$ = mknode("ARGS NONE");}
    ;

declerations:
    declerations var_decleration {$$ = integrate("fd",$1,$2);}
    |var_decleration
    |declerations string_decleration {$$ = integrate("fd",$1,$2);}
    |string_decleration
    ;

var_decleration:
    VAR params_decleration SEMICOLON {$$ = $2;}
    ;

string_decleration:
    STRING string_params SEMICOLON {$$ = mknode("s"); node* s = mknode("STRING"); addlist(s,$2); addNode(&$$,s);}
    ;

string_params:
    id LEFTBRACKET expression RIGHTBRACKET {$$ = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,$3); addNode(&$1,len); addNode(&$$,$1);}
    |id LEFTBRACKET expression RIGHTBRACKET COMMA string_params {$$ = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,$3); addNode(&$1,len); addNode(&$$,$1); addlist($$,$6);}
    |id LEFTBRACKET expression RIGHTBRACKET ASSIGNMENT expression {$$ = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,$3); addNode(&$1,len); addNode(&ass,$1); addNode(&ass,$6);addNode(&$$,ass);}
    |id LEFTBRACKET expression RIGHTBRACKET ASSIGNMENT expression COMMA string_params {$$ = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,$3); addNode(&$1,len); addNode(&ass,$1); addNode(&ass,$6);addNode(&$$,ass); addlist($$,$8);}
    ; 

args_decleration:
    var_type params {$$ = mknode("s"); node* s = $1; mknodelist(s, $2); addNode(&$$,s);}
    ;

params_decleration:
    var_type variables {$$ = mknode("s"); node* s = $1; addlist(s,$2); addNode(&$$,s);}
    ;

variables:
    id 
    |id COMMA variables {$$ = mknode("s"); addNode(&$$,$1); addlist($$,$3);}
    |id ASSIGNMENT expression {$$ = mknode("s"); node* s= mknode("="); addNode(&s,$1); addNode(&s,$3); addNode(&$$,s);}
    |id ASSIGNMENT expression COMMA variables {$$ = mknode("s"); node* s= mknode("="); addNode(&s,$1); addNode(&s,$3); addNode(&$$,s); addlist($$,$5);}
    |id ASSIGNMENT func_call {$$ = mknode("s"); node* s= mknode("="); addNode(&s,$1); addlist(s,$3); addNode(&$$,s);}
    |id ASSIGNMENT func_call COMMA variables {$$ = mknode("s"); node* s= mknode("="); addNode(&s,$1); addlist(s,$3); addNode(&$$,s); addlist($$,$5);}
    ;

params:
    id COMMA params {addNode(&$1,$3);}
    |id 
    ;

string_id:
    id LEFTBRACKET expression RIGHTBRACKET {$$ = $1; node* index = mknode("INDEX"); addNode(&index,$3); addNode(&$$, index);}

csnull: 
    CSNULL  { $$ = mknode (yytext); $$->val_type = "NULL"; $$->line = linecount;}
    ;

string:
    STR {$$ = mknode(yytext); $$->val_type = "STRING"; $$->line = linecount;}
    ;

char:
    CHARACTER {$$ = mknode(yytext); $$->val_type = "CHAR"; $$->line = linecount;}
    ;

int:
    INTEGER {$$ = mknode(yytext); $$->val_type = "INT"; $$->line = linecount;}
    ;

real:
    REAL_D {$$ = mknode(yytext); $$->val_type = "REAL"; $$->line = linecount;}
    ;

hex:
    HEX {$$ = mknode(yytext); $$->val_type = "HEX"; $$->line = linecount;}
    ;

true:
    BOOLTRUE {$$ = mknode(yytext); $$->val_type = "BOOL"; $$->line = linecount;}
    ;

false:
    BOOLFALSE {$$ = mknode(yytext); $$->val_type = "BOOL"; $$->line = linecount;}
    ;

id: 
    ID {$$ = mknode(yytext); $$->val_type = "ID"; $$->line = linecount;}
    ;

ptr:
    MULTI expression {$$ = mknode("PTR"); node* m = mknode("*"); addNode(&m, $2); addNode(&$$,m);}

%%

int main(){
    return yyparse();
}

int yyerror(char* s){
    printf("%s: found line:%d token [%s]\n", s, linecount, yytext);
    return 0;
}