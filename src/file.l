%{
    #include <stdio.h> 
    #include <string.h> 
    #define YYSTYPE struct node *
    #include "y.tab.h"
    int linecount = 1;
%}

%%
"function" return FUNCTION;
"return" return RETURN;
"void" return VOID;
"bool" return BOOL;
"main" return MAIN;
"int" return INT;
"int*" return INTPTR;
"char*" return CHARPTR;
"string" return STRING;
"real" return REAL;
"real*" return REALPTR;
"char" return CHAR;
"true" return BOOLTRUE;
"false" return BOOLFALSE;
"null" return CSNULL;
"var" return VAR;
";" return SEMICOLON;
"," return COMMA;
"if" return IF;
"else" return ELSE;
"while" return WHILE;
"for" return FOR;
"do" return DO;
"{" return LEFTBRACE;
"}" return RIGHTBRACE;
"(" return LEFTPAREN;
")" return RIGHTPAREN;
"[" return LEFTBRACKET;
"]" return RIGHTBRACKET;
"%" return PERCENT;
"'"  return QUOTES;
"\""  return DOUBLEQUOTES;
"=" return ASSIGNMENT;
"&&" return AND;
\/ return DIVISION;
"==" return EQUAL;
">" return GREATER;
">=" return GREATEREQUAL;
"<" return LESS;
"<=" return LESSEQUAL;
"-" return MINUS;
"!" return NOT;
"!=" return NOTEQUAL;
"||" return OR;
"+" return PLUS;
"*" return MULTI;
"&" return ADDRESS;
"|" return ABSUOLUTE;
":" return COLON;
[\*]?[a-zA-Z][a-zA-Z0-9_]* return ID;  
[-]?[1-9][0-9]*|0 return INTEGER;
[-]?[0-9][0-9]*\.[0-9][0-9]* return REAL_D;
\'.\' return CHARACTER;
0(x|X)[0-9A-F]+ return HEX;
"\""[a-zA-z0-9]*[A-z]*"\"" return STR;
"/*"([^*]|\*+[^*/])*\*+"/"
[\n]  linecount++;
[ \t\r] ;
. return yytext[0];
%%