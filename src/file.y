%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lex.yy.c"
#include "src/utils/functions.c"
%}

%token FUNCTION VOID INT REAL SEMICOLON IF ELSE ASSIGNMENT GREATER PLUS LEFTBRACE RIGHTBRACE LEFTPAREN RIGHTPAREN ID INTEGER CHAR RETURN COMMA BOOL MAIN INTPTR CHARPTR REALPTR STRDECLARE BOOLTRUE BOOLFALSE CSNULL LEFTBRACKET RIGHTBRACKET PERCENT QUOTES DOUBLEQUOTES AND DIVISION EQUAL GREATEREQUAL LESS LESSEQUAL MINUS NOT NOTEQUAL OR MULTI ADDRESS DEREFERENCE ABSUOLUTE COLON HEX STR WHILE FOR DO VAR

%left LEFTBRACE RIGHTBRACE LEFTPAREN RIGHTPAREN
%left EQUAL GREATER GREATEREQUAL LESSEQUAL LESS NOTEQUAL 
%left MINUS PLUS
%left MULTI DIVISION
%right ASSIGNMENT SEMICOLON
%start s

%%

s:
    code {printtree($1, 0);}
;

code:
    functions Main {$$ = mknode ("CODE", $1,NULL, NULL,$2); }
    | functions {$$ = mknode ("CODE", $1,NULL, NULL ,NULL); }
    | Main {$$ = mknode ("CODE", $1,NULL, NULL ,NULL); }     
    ;

Main: %empty
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
    FUNCTION function_type id LEFTPAREN args RIGHTPAREN void_block {$$ = mknode ("FUNCTION", $3 ,$5, $2, $7);}
    ; 

value_func: 
    FUNCTION function_type id LEFTPAREN args RIGHTPAREN value_block {$$ = mknode ("FUNCTION", $3 ,$5, $2, $7);}
    ;

 void_block:
    LEFTBRACE RIGHTBRACE {$$ = mknode ("BODY",NULL ,NULL, NULL, NULL);}
    |LEFTBRACE statments RIGHTBRACE {$$ = mknode ("BODY",$2 ,NULL, NULL, NULL);}
    ;
    
value_block: %empty
    ;

statments:
    statments statment
    | statment
    ;

statment:
    stat_assignment
    ;

stat_assignment:
    id ASSIGNMENT expression {$$ = mknode("=", $1, NULL, NULL, $3);}
    ;

expression:
    expression PLUS expression {$$ = mknode("+", $1, NULL, NULL, $3);}
    | expression MINUS expression {$$ = mknode("-", $1, NULL, NULL, $3);}
    | expression MULTI expression {$$ = mknode("*", $1, NULL, NULL, $3);}
    | expression DIVISION expression {$$ = mknode("/", $1, NULL, NULL, $3);}
    | expression EQUAL expression  { $$ = mknode ("==", $1, NULL, NULL, $3); }
    | expression GREATER expression  { $$ = mknode (">", $1, NULL, NULL, $3); }
    | expression GREATEREQUAL expression { $$ = mknode (">=", $1, NULL, NULL, $3); }
    | expression LESS expression { $$ = mknode ("<", $1, NULL, NULL, $3); }
    | expression LESSEQUAL expression { $$ = mknode ("<=", $1, NULL, NULL, $3); }
    | expression NOTEQUAL expression { $$ = mknode ("!=", $1, NULL, NULL, $3); }
    | expression AND expression {$$ = mknode ("&&", $1, NULL, NULL, $3); }
    | expression OR expression {$$ = mknode ("||", $1, NULL, NULL, $3); }
    | NOT expression {$$ = mknode ("NOT", $2, NULL, NULL, NULL);}
    | INTEGER {$$ = mknode(yytext, NULL, NULL, NULL, NULL);}
    | id
    ;
id: 
    ID {$$ = mknode(yytext, NULL, NULL, NULL, NULL);}
    ;

type:
    VOID {$$ = "void";}
    |INT {$$ = "int";}
    |REAL
    |CHAR
    ;

function_type:
    VOID {$$ = mknode(yytext, NULL, NULL, NULL, NULL);}
    |INT {$$ = mknode(yytext, NULL, NULL, NULL, NULL);}
    |REAL {$$ = mknode(yytext, NULL, NULL, NULL, NULL);}
    |CHAR {$$ = mknode(yytext, NULL, NULL, NULL, NULL);}
    ;    

code_block:
    LEFTBRACE RETURN RIGHTBRACE
    |LEFTBRACE RIGHTBRACE
    ;

args:
    params_decleration args {$$ = mknode("ARGS", $1, NULL, NULL, NULL);printf("sean");}
    |params_decleration SEMICOLON {$$ = mknode("ARGS", $1, NULL, NULL, NULL);printf("orita");}
    | %empty {$$ = mknode("ARGS NONE", NULL, NULL, NULL, NULL);}
    ;

params_decleration:
    type params {$$ = mknode($1, $2, NULL, NULL, NULL);}
    ;

params:
    id COMMA params {$$ = $1;}
    |id {$$ = $1;}
    ;

%%

void main(){
   yyparse();
}

int yyerror(char* s){
    printf ("%s: found line:%d token [%s]\n", s, yylineno, yytext);
    return 0;
}

int yywrap(){
    return 0;
}
