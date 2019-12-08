%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lex.yy.c"
#include "src/utils/functions.c"
int yylex(void);
int yyerror(char *s);
%}

%token FUNCTION VOID INT REAL SEMICOLON IF ELSE ASSIGNMENT GREATER PLUS LEFTBRACE RIGHTBRACE LEFTPAREN RIGHTPAREN ID INTEGER CHAR RETURN COMMA BOOL MAIN INTPTR CHARPTR REALPTR STRDECLARE BOOLTRUE BOOLFALSE CSNULL LEFTBRACKET RIGHTBRACKET PERCENT QUOTES DOUBLEQUOTES AND DIVISION EQUAL GREATEREQUAL LESS LESSEQUAL MINUS NOT NOTEQUAL OR MULTI ADDRESS DEREFERENCE ABSUOLUTE COLON HEX STR WHILE FOR DO VAR

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
    functions Main {$$ = mknode ("CODE"); }
    | functions {$$ = mknode ("CODE"); addNode(&$$, $1); }
    | Main {$$ = mknode ("CODE"); }     
    ;

Main: id //fix
    ;

functions:
    functions function
    | function
    ;

function: 
    void_func 
    |value_func
    ;

void_func: 
    FUNCTION type id LEFTPAREN args RIGHTPAREN void_block {$$ = mknode ("FUNCTION"); addNode(&$$,$3); addNode(&$$,$5); addNode(&$$, $2); addNode(&$$, $7);}
    ; 

value_func: 
    FUNCTION type id LEFTPAREN args RIGHTPAREN value_block {$$ = mknode ("FUNCTION"); addNode(&$$,$3); addNode(&$$,$5); addNode(&$$, $2); addNode(&$$, $7);}
    ;

 void_block:
    LEFTBRACE RIGHTBRACE {$$ = mknode ("BODY"); }
    |LEFTBRACE statments RIGHTBRACE {$$ = mknode ("BODY"); addNode(&$$,$2);}
    |LEFTBRACE functions statments RIGHTBRACE {$$ = mknode("BODY"); addNode(&$$, $2); addNode(&$$,$3);}
    ;
    
value_block:
    LEFTBRACE RETURN QUOTES expression QUOTES SEMICOLON RIGHTBRACE {$$ = mknode ("BODY"); addNode(&$$, mknode("RET")); addNode(&$$,$4);}
    |LEFTBRACE statments RETURN QUOTES expression QUOTES SEMICOLON RIGHTBRACE {$$ = mknode ("BODY"); addNode(&$$,$2); addNode(&$$, $3);} //fix
    |LEFTBRACE functions statments RETURN expression RIGHTBRACE {$$ = mknode("BODY"); addNode(&$$, $2); addNode(&$$,$3); addNode(&$$,$4);} //fix
    ; 
 
statments:
    statments statment
    | statment
    ;
    
statment:
    stat_assignment SEMICOLON
    |if_statment
    ;

if_statment:
    IF LEFTPAREN condition RIGHTPAREN block {$$ = mknode("IF"); addNode(&$$, $3); addNode(&$$,$5);}
    ;

stat_assignment:
    id ASSIGNMENT expression {$$ = mknode("="); addNode(&$$,$1); addNode(&$$,$3);}
    ;

expression:
    expression PLUS expression {$$ = mknode("+"); addNode(&$$,$1); addNode(&$$, $3);}
    | expression MINUS expression {$$ = mknode("-"); addNode(&$$,$1); addNode(&$$, $3);}
    | expression MULTI expression {$$ = mknode("*"); addNode(&$$,$1); addNode(&$$, $3);}
    | expression DIVISION expression {$$ = mknode("/"); addNode(&$$,$1); addNode(&$$, $3);}
    | expression AND expression {$$ = mknode ("&&"); addNode(&$$,$1); addNode(&$$, $3);}
    | expression OR expression {$$ = mknode ("||"); addNode(&$$,$1); addNode(&$$, $3);}
    | INTEGER {$$ = mknode(yytext);}
    | id
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
    ;   

type:
    VOID {$$ = mknode ("TYPE VOID"); }
    |INT {$$ = mknode ("TYPE INT"); }
    |REAL {$$ = mknode ("TYPE REAL"); } 
    |CHAR {$$ = mknode ("TYPE CHAR"); }
    ;  

args:
    params_decleration args {$$ = mknode("ARGS"); addNode(&$$,$1);}
    |params_decleration SEMICOLON {$$ = mknode("ARGS"); addNode(&$$,$1);}
    |params_decleration SEMICOLON params_decleration {$$ = mknode("ARGS"); addNode(&$$,$1); addNode(&$$, $3);}
    | %empty {$$ = mknode("ARGS NONE");}
    ;

params_decleration:
    type params {$$ = mknode($1->token); mknodelist($$,$2);}
    ;

params:
    id COMMA params {addNode(&$1,$3);}
    |id 
    ;

id: 
    ID {$$ = mknode(yytext);}
    ;
%%

int main(){
    return yyparse();
}

int yyerror(char* s){
    printf("%s: found line:%d token [%s]\n", s, yylineno, yytext);
    return 0;
}