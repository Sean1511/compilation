/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    VOID = 259,
    INT = 260,
    REAL = 261,
    SEMICOLON = 262,
    IF = 263,
    ELSE = 264,
    ASSIGNMENT = 265,
    GREATER = 266,
    PLUS = 267,
    LEFTBRACE = 268,
    RIGHTBRACE = 269,
    LEFTPAREN = 270,
    RIGHTPAREN = 271,
    ID = 272,
    INTEGER = 273,
    CHAR = 274,
    RETURN = 275,
    COMMA = 276,
    BOOL = 277,
    MAIN = 278,
    INTPTR = 279,
    CHARPTR = 280,
    REALPTR = 281,
    STRDECLARE = 282,
    BOOLTRUE = 283,
    BOOLFALSE = 284,
    CSNULL = 285,
    LEFTBRACKET = 286,
    RIGHTBRACKET = 287,
    PERCENT = 288,
    QUOTES = 289,
    DOUBLEQUOTES = 290,
    AND = 291,
    DIVISION = 292,
    EQUAL = 293,
    GREATEREQUAL = 294,
    LESS = 295,
    LESSEQUAL = 296,
    MINUS = 297,
    NOT = 298,
    NOTEQUAL = 299,
    OR = 300,
    MULTI = 301,
    ADDRESS = 302,
    DEREFERENCE = 303,
    ABSUOLUTE = 304,
    COLON = 305,
    HEX = 306,
    STR = 307,
    WHILE = 308,
    FOR = 309,
    DO = 310,
    VAR = 311,
    CHARACTER = 312,
    REAL_D = 313,
    XIF = 314
  };
#endif
/* Tokens.  */
#define FUNCTION 258
#define VOID 259
#define INT 260
#define REAL 261
#define SEMICOLON 262
#define IF 263
#define ELSE 264
#define ASSIGNMENT 265
#define GREATER 266
#define PLUS 267
#define LEFTBRACE 268
#define RIGHTBRACE 269
#define LEFTPAREN 270
#define RIGHTPAREN 271
#define ID 272
#define INTEGER 273
#define CHAR 274
#define RETURN 275
#define COMMA 276
#define BOOL 277
#define MAIN 278
#define INTPTR 279
#define CHARPTR 280
#define REALPTR 281
#define STRDECLARE 282
#define BOOLTRUE 283
#define BOOLFALSE 284
#define CSNULL 285
#define LEFTBRACKET 286
#define RIGHTBRACKET 287
#define PERCENT 288
#define QUOTES 289
#define DOUBLEQUOTES 290
#define AND 291
#define DIVISION 292
#define EQUAL 293
#define GREATEREQUAL 294
#define LESS 295
#define LESSEQUAL 296
#define MINUS 297
#define NOT 298
#define NOTEQUAL 299
#define OR 300
#define MULTI 301
#define ADDRESS 302
#define DEREFERENCE 303
#define ABSUOLUTE 304
#define COLON 305
#define HEX 306
#define STR 307
#define WHILE 308
#define FOR 309
#define DO 310
#define VAR 311
#define CHARACTER 312
#define REAL_D 313
#define XIF 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
