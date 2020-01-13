/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/file.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lex.yy.c"
#include "src/utils/functions.c"
int yylex(void);
int yyerror(char *s);

#line 76 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    RETURN = 260,
    MAIN = 261,
    INT = 262,
    REAL = 263,
    ID = 264,
    INTEGER = 265,
    CHAR = 266,
    BOOL = 267,
    INTPTR = 268,
    CHARPTR = 269,
    REALPTR = 270,
    STRING = 271,
    BOOLTRUE = 272,
    BOOLFALSE = 273,
    CSNULL = 274,
    REAL_D = 275,
    CHARACTER = 276,
    HEX = 277,
    STR = 278,
    VAR = 279,
    SIZE = 280,
    IF = 281,
    ELSE = 282,
    WHILE = 283,
    FOR = 284,
    DO = 285,
    GREATER = 286,
    PLUS = 287,
    ASSIGNMENT = 288,
    COMMA = 289,
    DIVISION = 290,
    AND = 291,
    EQUAL = 292,
    GREATEREQUAL = 293,
    LESS = 294,
    LESSEQUAL = 295,
    MINUS = 296,
    NOT = 297,
    NOTEQUAL = 298,
    OR = 299,
    MULTI = 300,
    ADDRESS = 301,
    DEREFERENCE = 302,
    ABSUOLUTE = 303,
    SEMICOLON = 304,
    LEFTBRACE = 305,
    RIGHTBRACE = 306,
    LEFTPAREN = 307,
    RIGHTPAREN = 308,
    LEFTBRACKET = 309,
    RIGHTBRACKET = 310,
    PERCENT = 311,
    QUOTES = 312,
    DOUBLEQUOTES = 313,
    COLON = 314,
    XIF = 315,
    MIN = 316,
    MULL = 317
  };
#endif
/* Tokens.  */
#define FUNCTION 258
#define VOID 259
#define RETURN 260
#define MAIN 261
#define INT 262
#define REAL 263
#define ID 264
#define INTEGER 265
#define CHAR 266
#define BOOL 267
#define INTPTR 268
#define CHARPTR 269
#define REALPTR 270
#define STRING 271
#define BOOLTRUE 272
#define BOOLFALSE 273
#define CSNULL 274
#define REAL_D 275
#define CHARACTER 276
#define HEX 277
#define STR 278
#define VAR 279
#define SIZE 280
#define IF 281
#define ELSE 282
#define WHILE 283
#define FOR 284
#define DO 285
#define GREATER 286
#define PLUS 287
#define ASSIGNMENT 288
#define COMMA 289
#define DIVISION 290
#define AND 291
#define EQUAL 292
#define GREATEREQUAL 293
#define LESS 294
#define LESSEQUAL 295
#define MINUS 296
#define NOT 297
#define NOTEQUAL 298
#define OR 299
#define MULTI 300
#define ADDRESS 301
#define DEREFERENCE 302
#define ABSUOLUTE 303
#define SEMICOLON 304
#define LEFTBRACE 305
#define RIGHTBRACE 306
#define LEFTPAREN 307
#define RIGHTPAREN 308
#define LEFTBRACKET 309
#define RIGHTBRACKET 310
#define PERCENT 311
#define QUOTES 312
#define DOUBLEQUOTES 313
#define COLON 314
#define XIF 315
#define MIN 316
#define MULL 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 251 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  298

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    32,    33,    37,    41,    42,    46,    47,
      51,    55,    59,    60,    61,    62,    63,    64,    65,    69,
      70,    71,    72,    73,    74,    75,    79,    80,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    96,   100,   104,
     105,   106,   110,   113,   117,   120,   121,   125,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   161,   162,   163,
     164,   168,   169,   173,   174,   178,   179,   180,   181,   182,
     183,   184,   185,   189,   190,   191,   192,   193,   194,   195,
     199,   200,   201,   202,   203,   204,   205,   209,   210,   211,
     215,   216,   217,   218,   222,   226,   230,   231,   232,   233,
     237,   241,   245,   246,   247,   248,   249,   250,   254,   255,
     259,   262,   266,   270,   274,   278,   282,   286,   290,   294,
     298,   302
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "VOID", "RETURN", "MAIN",
  "INT", "REAL", "ID", "INTEGER", "CHAR", "BOOL", "INTPTR", "CHARPTR",
  "REALPTR", "STRING", "BOOLTRUE", "BOOLFALSE", "CSNULL", "REAL_D",
  "CHARACTER", "HEX", "STR", "VAR", "SIZE", "IF", "ELSE", "WHILE", "FOR",
  "DO", "GREATER", "PLUS", "ASSIGNMENT", "COMMA", "DIVISION", "AND",
  "EQUAL", "GREATEREQUAL", "LESS", "LESSEQUAL", "MINUS", "NOT", "NOTEQUAL",
  "OR", "MULTI", "ADDRESS", "DEREFERENCE", "ABSUOLUTE", "SEMICOLON",
  "LEFTBRACE", "RIGHTBRACE", "LEFTPAREN", "RIGHTPAREN", "LEFTBRACKET",
  "RIGHTBRACKET", "PERCENT", "QUOTES", "DOUBLEQUOTES", "COLON", "XIF",
  "MIN", "MULL", "$accept", "s", "code", "Main", "functions", "function",
  "void_func", "value_func", "void_block", "value_block", "statments",
  "statment", "if_statment", "if_else_statment", "loop_statment", "for",
  "while", "do_while", "stat_assignment", "string_assignment",
  "expression", "func_call", "func_params", "func", "block", "func_type",
  "var_type", "args", "declerations", "var_decleration",
  "string_decleration", "string_params", "args_decleration",
  "params_decleration", "variables", "params", "string_id", "csnull",
  "string", "char", "int", "real", "hex", "true", "false", "id", "ptr",
  "uminus", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

#define YYPACT_NINF -246

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-246)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   206,    22,  -246,  -246,     3,  -246,  -246,  -246,    55,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,    17,  -246,  -246,
    -246,   -24,  -246,    -1,    11,    28,   229,   229,    38,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,    17,    32,    43,    51,
     291,  -246,  -246,    62,    38,   229,    58,  1207,   725,    17,
     229,    57,    64,    65,    68,   740,   222,  -246,   351,     7,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,    71,    72,    75,
    -246,   430,  -246,  -246,    41,    93,    17,  -246,  -246,   381,
    -246,    17,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
     740,   740,    17,   740,  -246,   740,   897,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,    73,  -246,  -246,    79,
      76,    17,    80,   740,   740,     1,   107,  -246,   725,  -246,
      15,   439,  -246,   144,   516,  -246,  -246,  -246,  -246,  -246,
    -246,   465,  -246,  -246,   740,   615,   740,   740,  -246,   725,
     412,   273,   534,   -30,  1152,  -246,    73,  1092,   821,   740,
     740,   740,   740,   740,   740,   740,   740,   740,   740,   740,
     740,  -246,   740,  -246,   740,  -246,     5,  -246,   840,   859,
      87,   105,    89,   912,   725,  -246,   725,  -246,   473,  -246,
     483,  -246,  1152,   -41,  -246,  1107,   630,  -246,   758,  1152,
     927,   725,   526,   516,   725,   725,   544,  -246,  -246,    78,
     -30,  -246,  1167,    78,    78,    78,    78,   -30,    78,  1167,
    -246,   779,   800,   740,    17,   572,   572,   740,   740,   740,
      96,   942,   957,   725,  -246,  -246,   670,  -246,  -246,  -246,
     115,   101,   972,   725,   578,   987,  1002,   725,  -246,    35,
    1122,   121,    47,  -246,   130,  -246,  1017,   878,  -246,   112,
     113,  1032,  -246,   685,   740,  -246,   114,  1047,   725,   116,
     117,  1062,   740,    17,    17,    17,    17,   572,     1,   126,
    -246,  -246,   125,  -246,  1152,  -246,   127,  1077,  -246,  -246,
     128,  1137,  -246,  -246,  -246,   133,  -246,   124,  -246,  -246,
    -246,   129,  -246,    17,   572,  -246,  -246,  -246
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     7,     8,     9,     0,
      93,    94,    95,    96,    97,    98,    99,     0,     1,     3,
       6,     0,   139,     0,     0,     0,   109,   109,     0,   100,
     101,   102,   103,   104,   105,   106,     0,     0,   107,     0,
       0,     5,   120,   129,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
      27,    30,    31,    32,    39,    40,    41,     0,     0,     0,
      33,     0,   111,   113,     0,     0,     0,    10,   108,     0,
      11,     0,   134,   137,   138,   131,   135,   133,   136,   132,
       0,     0,     0,     0,    36,     0,     0,    68,    71,    74,
      73,    65,    67,    66,    69,    70,    72,    76,    75,     0,
       0,     0,     0,     0,     0,     0,     0,   140,     0,    85,
       0,     0,    17,     0,     0,    14,    26,    28,    29,    34,
      18,     0,   110,   112,     0,     0,     0,     0,   128,     0,
       0,     0,     0,   141,    60,    64,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,   115,     0,   121,   122,   114,     0,     0,
       0,     0,     0,     0,     0,    86,     0,    87,     0,    16,
       0,    13,    45,    72,    79,    84,     0,    82,     0,    46,
       0,     0,     0,     0,     0,     0,     0,    62,    61,    53,
      48,    51,    58,    52,    54,    55,    56,    49,    57,    59,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,    88,    15,     0,    83,    77,    81,
       0,    35,     0,     0,     0,     0,     0,     0,   130,   116,
     124,   126,    72,   123,    37,    43,     0,     0,    89,    35,
      35,     0,    80,     0,     0,    19,    35,     0,     0,    35,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    35,    78,    47,    24,    35,     0,    20,    25,
      35,   118,   117,   125,   127,     0,    38,     0,    44,    92,
      21,    35,    22,     0,     0,    23,   119,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,  -246,   161,   -23,    -3,  -246,  -246,   142,  -246,
     -37,   -34,  -246,  -246,  -246,  -246,  -246,  -246,  -114,  -246,
     175,   -25,   -36,  -182,   137,  -246,   143,   -13,   -49,   -48,
     -42,  -245,  -246,  -246,  -211,   120,   100,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,    -9,    19,  -246
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,     7,     8,    41,    80,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     185,    69,   186,   187,    70,    17,    36,    37,    71,    72,
      73,   109,    38,   112,   165,    42,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      23,   170,    20,   243,   229,   151,     1,   121,    24,   124,
      22,   226,    48,   162,    39,   160,    22,    58,   282,   120,
     174,   123,    18,   132,    22,   126,    22,    43,    25,   133,
     142,    74,    78,    51,   131,    52,    53,    54,   213,   214,
     110,    51,   141,    52,    53,    54,    55,    74,   296,    74,
      74,    26,    55,   283,   284,    20,   140,    56,   125,    75,
      55,    21,    74,    27,    22,    56,   175,    43,   262,   263,
      74,   229,    23,   132,   134,    75,   132,    75,    75,   133,
     266,    28,   133,   146,   178,    44,   126,   180,    40,   126,
      75,   193,    45,   135,   132,   136,    76,   126,    75,   135,
     133,   162,   166,   192,    46,   196,   171,   126,    79,   113,
     150,    74,    74,   151,    74,    74,   114,   115,    56,   157,
     127,   128,    74,   160,   129,   183,   137,   162,   163,   167,
     164,    74,    74,    74,    75,   172,   217,    20,   218,    75,
      75,   219,    75,    75,   126,   132,   126,   248,   254,    48,
      75,   133,   255,    22,   287,   265,   234,   267,   126,    75,
      75,    75,   126,   270,   271,   275,    19,   278,   279,    74,
      51,    74,    52,    53,    54,   288,   289,   294,   290,   292,
     295,   244,   245,    74,    74,   226,    77,    74,   241,    55,
     253,   116,   145,   111,    56,   179,   138,    75,     0,    75,
     126,     0,     0,     0,   242,   166,    74,    74,     0,     0,
       9,    75,    75,    10,    11,    75,     0,    12,    13,    14,
      15,    16,     0,    96,     0,    74,     0,   118,     0,     0,
     117,    22,     0,   286,    75,    75,    29,    30,    49,     0,
      31,    32,    33,    34,    35,     0,    50,     0,    51,     0,
      52,    53,    54,    75,   110,   166,   166,   285,    74,   171,
     297,     0,     0,     0,     0,   143,   144,    55,   147,     0,
     148,     0,    56,   119,     0,     0,     0,     0,   194,     0,
       0,     0,    22,     0,   110,    74,    75,    75,   168,   169,
       0,     0,     0,   173,    47,     0,    48,     0,     0,    51,
      22,    52,    53,    54,     0,     0,     0,    49,     0,   182,
       0,   188,   189,    75,   190,    50,     0,    51,    55,    52,
      53,    54,     0,    56,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,    55,   211,     0,   212,
       0,    56,    57,     0,     0,     0,     0,     0,     0,   221,
       0,   222,     0,     0,    47,     0,    48,     0,     0,     0,
      22,     0,     0,     0,     0,     0,   232,    49,     0,   235,
     236,     0,     0,     0,     0,    50,     0,    51,     0,    52,
      53,    54,     0,     0,    47,     0,   139,     0,   240,     0,
      22,     0,   246,   182,   247,     0,    55,    49,   251,     0,
       0,    56,   122,     0,     0,    50,     0,    51,   257,    52,
      53,    54,   261,     0,     0,    47,     0,   191,     0,     0,
       0,    22,     0,     0,     0,     0,    55,     0,    49,   274,
       0,    56,     0,   277,     0,    48,    50,   281,    51,    22,
      52,    53,    54,     0,   176,     0,    49,     0,    22,     0,
       0,     0,     0,     0,    50,    49,    51,    55,    52,    53,
      54,     0,    56,    50,     0,    51,     0,    52,    53,    54,
      48,     0,     0,     0,    22,    55,     0,     0,   223,     0,
      56,   130,    22,     0,    55,     0,     0,     0,    48,    56,
     177,    51,    22,    52,    53,    54,     0,     0,     0,    51,
       0,    52,    53,    54,     0,     0,     0,     0,     0,    51,
      55,    52,    53,    54,     0,    56,   181,     0,    55,     0,
       0,    48,     0,    56,   224,    22,     0,     0,    55,     0,
       0,   233,    49,    56,   225,    22,     0,     0,     0,   195,
      50,     0,    51,    22,    52,    53,    54,     0,     0,   237,
      49,     0,    51,    22,    52,    53,    54,     0,    50,     0,
      51,    55,    52,    53,    54,     0,    56,     0,     0,     0,
      51,    55,    52,    53,    54,     0,    56,    48,     0,    55,
       0,    22,     0,   258,    56,     0,     0,    22,     0,    55,
       0,     0,     0,     0,    56,     0,     0,     0,    51,     0,
      52,    53,    54,     0,    51,     0,    52,    53,    54,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,    56,    55,    22,    82,     0,     0,    56,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    22,
      82,     0,     0,     0,     0,     0,     0,    83,    84,    85,
      86,    87,    88,    89,     0,     0,    90,    91,     0,     0,
      55,    92,     0,    93,     0,     0,     0,    95,   184,     0,
       0,    90,    91,     0,     0,    55,    92,     0,    93,    22,
      82,     0,    95,   228,     0,     0,     0,    83,    84,    85,
      86,    87,    88,    89,    22,    82,     0,     0,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,     0,
       0,    90,    91,     0,     0,    55,    92,     0,    93,     0,
       0,     0,    95,   252,     0,     0,    90,    91,     0,     0,
      55,    92,     0,    93,    22,    82,     0,    95,   273,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    22,
      82,     0,     0,     0,     0,     0,     0,    83,    84,    85,
      86,    87,    88,    89,     0,     0,    90,    91,     0,     0,
      55,    92,     0,    93,    94,     0,     0,    95,     0,     0,
       0,    90,    91,     0,     0,    55,    92,     0,    93,   149,
     150,     0,    95,   151,   152,   153,   154,   155,   156,   157,
       0,   158,   159,   160,     0,     0,     0,     0,     0,     0,
     149,   150,     0,   230,   151,   152,   153,   154,   155,   156,
     157,     0,   158,   159,   160,     0,     0,     0,     0,     0,
       0,   149,   150,     0,   238,   151,   152,   153,   154,   155,
     156,   157,     0,   158,   159,   160,     0,     0,     0,     0,
       0,     0,   149,   150,     0,   239,   151,   152,   153,   154,
     155,   156,   157,     0,   158,   159,   160,     0,     0,     0,
       0,   149,   150,     0,   198,   151,   152,   153,   154,   155,
     156,   157,     0,   158,   159,   160,     0,     0,     0,     0,
     149,   150,     0,   215,   151,   152,   153,   154,   155,   156,
     157,     0,   158,   159,   160,     0,     0,     0,     0,   149,
     150,     0,   216,   151,   152,   153,   154,   155,   156,   157,
       0,   158,   159,   160,     0,     0,     0,     0,   149,   150,
       0,   269,   151,   152,   153,   154,   155,   156,   157,     0,
     158,   159,   160,   149,   150,     0,   161,   151,   152,   153,
     154,   155,   156,   157,     0,   158,   159,   160,   149,   150,
       0,   220,   151,   152,   153,   154,   155,   156,   157,     0,
     158,   159,   160,   149,   150,     0,   231,   151,   152,   153,
     154,   155,   156,   157,     0,   158,   159,   160,   149,   150,
       0,   249,   151,   152,   153,   154,   155,   156,   157,     0,
     158,   159,   160,   149,   150,     0,   250,   151,   152,   153,
     154,   155,   156,   157,     0,   158,   159,   160,   149,   150,
       0,   256,   151,   152,   153,   154,   155,   156,   157,     0,
     158,   159,   160,   149,   150,     0,   259,   151,   152,   153,
     154,   155,   156,   157,     0,   158,   159,   160,   149,   150,
       0,   260,   151,   152,   153,   154,   155,   156,   157,     0,
     158,   159,   160,   149,   150,     0,   268,   151,   152,   153,
     154,   155,   156,   157,     0,   158,   159,   160,   149,   150,
       0,   272,   151,   152,   153,   154,   155,   156,   157,     0,
     158,   159,   160,   149,   150,     0,   276,   151,   152,   153,
     154,   155,   156,   157,     0,   158,   159,   160,   149,   150,
       0,   280,   151,   152,   153,   154,   155,   156,   157,     0,
     158,   159,   160,   149,   150,     0,   291,   151,   152,   153,
     154,   155,   156,   157,     0,   158,   159,   160,   149,   150,
     197,   227,   151,   152,   153,   154,   155,   156,   157,     0,
     158,   159,   160,   149,   150,     0,   264,   151,   152,   153,
     154,   155,   156,   157,     0,   158,   159,   160,   149,   150,
       0,   293,   151,   152,   153,   154,   155,   156,   157,     0,
     158,   159,   160,   149,   150,     0,     0,   151,   152,   153,
     154,   155,   156,   157,     0,   158,   159,   160,   149,   150,
       0,     0,   151,     0,   153,   154,   155,   156,   157,     0,
     158,    81,   160,     0,    10,    11,     0,     0,    12,    13,
      14,    15,    16
};

static const yytype_int16 yycheck[] =
{
       9,   115,     5,   214,   186,    35,     3,    56,    17,    58,
       9,    52,     5,    54,    27,    45,     9,    40,   263,    56,
       5,    58,     0,    71,     9,    59,     9,    36,    52,    71,
      79,    40,    45,    26,    71,    28,    29,    30,    33,    34,
      49,    26,    79,    28,    29,    30,    45,    56,   293,    58,
      59,    52,    45,   264,   265,    58,    79,    50,    51,    40,
      45,     6,    71,    52,     9,    50,    51,    76,    33,    34,
      79,   253,    81,   121,    33,    56,   124,    58,    59,   121,
      33,    53,   124,    92,   121,    53,   120,   124,    50,   123,
      71,   140,    49,    52,   142,    54,    34,   131,    79,    52,
     142,    54,   111,   140,    53,   142,   115,   141,    50,    52,
      32,   120,   121,    35,   123,   124,    52,    52,    50,    41,
      49,    49,   131,    45,    49,   134,    33,    54,    49,    49,
      54,   140,   141,   142,   115,    28,    49,   140,    33,   120,
     121,    52,   123,   124,   178,   193,   180,    51,    33,     5,
     131,   193,    51,     9,   268,    34,   193,    27,   192,   140,
     141,   142,   196,    51,    51,    51,     5,    51,    51,   178,
      26,   180,    28,    29,    30,    49,    51,    53,    51,    51,
      51,   215,   216,   192,   193,    52,    44,   196,   213,    45,
     226,    54,    92,    50,    50,    51,    76,   178,    -1,   180,
     234,    -1,    -1,    -1,   213,   214,   215,   216,    -1,    -1,
       4,   192,   193,     7,     8,   196,    -1,    11,    12,    13,
      14,    15,    -1,    48,    -1,   234,    -1,     5,    -1,    -1,
      55,     9,    -1,   267,   215,   216,     7,     8,    16,    -1,
      11,    12,    13,    14,    15,    -1,    24,    -1,    26,    -1,
      28,    29,    30,   234,   263,   264,   265,   266,   267,   268,
     294,    -1,    -1,    -1,    -1,    90,    91,    45,    93,    -1,
      95,    -1,    50,    51,    -1,    -1,    -1,    -1,     5,    -1,
      -1,    -1,     9,    -1,   293,   294,   267,   268,   113,   114,
      -1,    -1,    -1,   118,     3,    -1,     5,    -1,    -1,    26,
       9,    28,    29,    30,    -1,    -1,    -1,    16,    -1,   134,
      -1,   136,   137,   294,   139,    24,    -1,    26,    45,    28,
      29,    30,    -1,    50,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,    45,   162,    -1,   164,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,   174,
      -1,   176,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,   191,    16,    -1,   194,
     195,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,
      29,    30,    -1,    -1,     3,    -1,     5,    -1,   213,    -1,
       9,    -1,   217,   218,   219,    -1,    45,    16,   223,    -1,
      -1,    50,    51,    -1,    -1,    24,    -1,    26,   233,    28,
      29,    30,   237,    -1,    -1,     3,    -1,     5,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    45,    -1,    16,   254,
      -1,    50,    -1,   258,    -1,     5,    24,   262,    26,     9,
      28,    29,    30,    -1,     5,    -1,    16,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    24,    16,    26,    45,    28,    29,
      30,    -1,    50,    24,    -1,    26,    -1,    28,    29,    30,
       5,    -1,    -1,    -1,     9,    45,    -1,    -1,     5,    -1,
      50,    51,     9,    -1,    45,    -1,    -1,    -1,     5,    50,
      51,    26,     9,    28,    29,    30,    -1,    -1,    -1,    26,
      -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    26,
      45,    28,    29,    30,    -1,    50,    51,    -1,    45,    -1,
      -1,     5,    -1,    50,    51,     9,    -1,    -1,    45,    -1,
      -1,     5,    16,    50,    51,     9,    -1,    -1,    -1,     5,
      24,    -1,    26,     9,    28,    29,    30,    -1,    -1,     5,
      16,    -1,    26,     9,    28,    29,    30,    -1,    24,    -1,
      26,    45,    28,    29,    30,    -1,    50,    -1,    -1,    -1,
      26,    45,    28,    29,    30,    -1,    50,     5,    -1,    45,
      -1,     9,    -1,     5,    50,    -1,    -1,     9,    -1,    45,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    26,    -1,
      28,    29,    30,    -1,    26,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    45,     9,    10,    -1,    -1,    50,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    41,    42,    -1,    -1,
      45,    46,    -1,    48,    -1,    -1,    -1,    52,    53,    -1,
      -1,    41,    42,    -1,    -1,    45,    46,    -1,    48,     9,
      10,    -1,    52,    53,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    41,    42,    -1,    -1,    45,    46,    -1,    48,    -1,
      -1,    -1,    52,    53,    -1,    -1,    41,    42,    -1,    -1,
      45,    46,    -1,    48,     9,    10,    -1,    52,    53,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    41,    42,    -1,    -1,
      45,    46,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,
      -1,    41,    42,    -1,    -1,    45,    46,    -1,    48,    31,
      32,    -1,    52,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    55,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    55,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    55,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    -1,    -1,    -1,
      -1,    31,    32,    -1,    53,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,
      31,    32,    -1,    53,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,    31,
      32,    -1,    53,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    -1,    -1,    -1,    -1,    31,    32,
      -1,    53,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    31,    32,    -1,    49,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    31,    32,
      -1,    49,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    31,    32,    -1,    49,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    31,    32,
      -1,    49,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    31,    32,    -1,    49,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    31,    32,
      -1,    49,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    31,    32,    -1,    49,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    31,    32,
      -1,    49,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    31,    32,    -1,    49,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    31,    32,
      -1,    49,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    31,    32,    -1,    49,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    31,    32,
      -1,    49,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    31,    32,    -1,    49,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    31,    32,
      48,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    31,    32,
      -1,    -1,    35,    -1,    37,    38,    39,    40,    41,    -1,
      43,     4,    45,    -1,     7,     8,    -1,    -1,    11,    12,
      13,    14,    15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    64,    65,    66,    67,    68,    69,    70,     4,
       7,     8,    11,    12,    13,    14,    15,    88,     0,    66,
      68,     6,     9,   108,   108,    52,    52,    52,    53,     7,
       8,    11,    12,    13,    14,    15,    89,    90,    95,    90,
      50,    71,    98,   108,    53,    49,    53,     3,     5,    16,
      24,    26,    28,    29,    30,    45,    50,    51,    67,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    84,
      87,    91,    92,    93,   108,   109,    34,    71,    90,    50,
      72,     4,    10,    17,    18,    19,    20,    21,    22,    23,
      41,    42,    46,    48,    49,    52,    83,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    94,
     108,    89,    96,    52,    52,    52,    87,    83,     5,    51,
      73,    91,    51,    73,    91,    51,    74,    49,    49,    49,
      51,    73,    92,    93,    33,    52,    54,    33,    98,     5,
      67,    73,    91,    83,    83,    99,   108,    83,    83,    31,
      32,    35,    36,    37,    38,    39,    40,    41,    43,    44,
      45,    49,    54,    49,    54,    97,   108,    49,    83,    83,
      81,   108,    28,    83,     5,    51,     5,    51,    73,    51,
      73,    51,    83,   108,    53,    83,    85,    86,    83,    83,
      83,     5,    73,    91,     5,     5,    73,    48,    53,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    33,    34,    53,    53,    49,    33,    52,
      49,    83,    83,     5,    51,    51,    52,    34,    53,    86,
      55,    49,    83,     5,    73,    83,    83,     5,    55,    55,
      83,    84,   108,    97,    74,    74,    83,    83,    51,    49,
      49,    83,    53,    85,    33,    51,    49,    83,     5,    49,
      49,    83,    33,    34,    34,    34,    33,    27,    49,    53,
      51,    51,    49,    53,    83,    51,    49,    83,    51,    51,
      49,    83,    94,    97,    97,   108,    74,    81,    49,    51,
      51,    49,    51,    34,    53,    51,    94,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    67,    67,    68,    68,
      69,    70,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    76,    77,
      77,    77,    78,    79,    80,    81,    81,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    84,
      84,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    90,    90,    90,
      91,    91,    91,    91,    92,    93,    94,    94,    94,    94,
      95,    96,    97,    97,    97,    97,    97,    97,    98,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     6,     2,     1,     1,     1,
       7,     7,     2,     4,     3,     5,     4,     3,     3,     5,
       6,     7,     7,     8,     6,     6,     2,     1,     2,     2,
       1,     1,     1,     1,     2,     3,     2,     5,     7,     1,
       1,     1,     9,     5,     7,     3,     3,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     6,     3,
       5,     2,     1,     2,     1,     2,     3,     3,     4,     5,
       6,     6,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       2,     1,     2,     1,     3,     3,     4,     6,     6,     8,
       2,     2,     1,     3,     3,     5,     3,     5,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 28 "src/file.y" /* yacc.c:1646  */
    {semanticAnalysis((yyvsp[0]));}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addlist((yyval), (yyvsp[-1])); addNode(&(yyval), (yyvsp[0]));}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addNode(&(yyval), (yyvsp[0]));}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 37 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("MAIN"); addNode(&(yyval), (yyvsp[0]));}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 41 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 51 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); s->line = (yyvsp[-4])->line; node* v = mknode("VOID"); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, v); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); s->line = (yyvsp[-4])->line; addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, (yyvsp[-5])); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 59 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); }
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v); addlist((yyval), (yyvsp[-1]));}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval),(yyvsp[-1]));}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 62 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-3])); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v);addlist((yyval),(yyvsp[-1]));}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 63 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-2])); addlist((yyval),(yyvsp[-1]));}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 64 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-1]));}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 65 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-1]));addNode(&(yyval),v);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 69 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 70 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 71 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-5])); addlist((yyval),(yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 72 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY");node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 73 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-6]));  node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 74 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 75 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-4]));addNode(&(yyval),v); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 79 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 91 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("RET"); addNode(&s, (yyvsp[-1])); addNode(&(yyval), s);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 92 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("RET"); addNode(&(yyval), s);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 96 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF"); s->line = (yyvsp[-2])->line; addNode(&s, (yyvsp[-2]));  addlist(s,(yyvsp[0])); s->nodes[1]->father = "IF"; addNode(&(yyval),s);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 100 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF-ELSE"); s->line = (yyvsp[-4])->line; addNode(&s, (yyvsp[-4])); addlist(s,(yyvsp[-2])); s->nodes[1]->father = "IF"; addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 110 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("FOR"); s->line = (yyvsp[-6])->line; addlist(s, (yyvsp[-6])); addNode(&s, (yyvsp[-4])); addlist(s, (yyvsp[-2])); addlist(s, (yyvsp[0])); s->nodes[3]->father = "FOR"; addNode(&(yyval),s);}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 113 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("WHILE"); s->line = (yyvsp[-2])->line; addNode(&s, (yyvsp[-2])); addlist(s, (yyvsp[0])); s->nodes[1]->father = "WHILE"; addNode(&(yyval),s);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 117 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("DO-WHILE"); s->line = (yyvsp[-2])->line; addlist(s, (yyvsp[-5])); s->nodes[0]->father = "DO-WHILE"; addNode(&s, (yyvsp[-2])); addNode(&(yyval),s);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 120 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); s->line = linecount; addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); s->line = linecount; addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 125 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); node* index = mknode("INDEX"); addNode(&index,(yyvsp[-3])); addNode(&(yyvsp[-5]), index); addNode(&s, (yyvsp[-5])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 129 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("+"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 130 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("-"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 131 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("*"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 132 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("/"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 133 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("=="); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 134 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 135 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">="); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 136 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 137 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<="); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 138 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("!="); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 139 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0]));}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 140 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("||"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0]));}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 141 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("NOT"); (yyval)->line = (yyvsp[0])->line; addNode(&(yyval),(yyvsp[0]));}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 142 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]); (yyval)->line = (yyvsp[-1])->line;}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 143 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("LEN OF"); addNode(&(yyval),(yyvsp[-1]));}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 144 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&"); addNode(&(yyval), (yyvsp[0]));}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 145 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&"); addNode(&(yyval), (yyvsp[0]));}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 161 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL");  addNode(&s,(yyvsp[-3])); node* args = mknode("ARGS"); args->line = (yyvsp[-3])->line; addlist(args, (yyvsp[-1])); addNode(&s, args); addNode(&(yyval),s);}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 162 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); s->line = (yyvsp[-3])->line; addNode(&s,(yyvsp[-5])); node* call = mknode("FUNC_CALL"); addNode(&call,(yyvsp[-3])); node* args = mknode("ARGS"); args->line = (yyvsp[-5])->line; addlist(args, (yyvsp[-1])); addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 163 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL"); addNode(&s,(yyvsp[-2])); node* args = mknode("ARGS NONE"); args->line = (yyvsp[-2])->line; addNode(&s, args); addNode(&(yyval),s);}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 164 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); s->line = (yyvsp[-2])->line; addNode(&s,(yyvsp[-4])); node* call = mknode("FUNC_CALL"); addNode(&call,(yyvsp[-2])); node* args = mknode("ARGS NONE"); args->line = (yyvsp[-4])->line; addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 168 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 173 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[-1]));}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 174 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[0]));}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 178 "src/file.y" /* yacc.c:1646  */
    {(yyval) =  mknode("BLOCK");}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 179 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); addlist(s,(yyvsp[-1])); addNode(&(yyval),s);}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 180 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-1])); addNode(&s,v); addNode(&(yyval),s);}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 181 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-2])); addNode(&s,v); addlist(s, (yyvsp[-1])); addNode(&(yyval),s);}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 182 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BLOCK"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 183 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); addlist(s,(yyvsp[-4]));node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 184 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-4])); addNode(&s,v); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 185 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-5])); addNode(&s,v); addlist(s, (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 189 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT");}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 190 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL");}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 191 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR");}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 192 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BOOL");}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 193 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT*");}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 194 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR*");}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 195 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL*");}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 199 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT");}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 200 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL");}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 201 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR");}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 202 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BOOL");}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 203 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT*");}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 204 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR*");}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 205 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL*");}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 209 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[0]));}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 210 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[-2])); addlist((yyval), (yyvsp[0]));}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 211 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS NONE");}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 215 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("fd",(yyvsp[-1]),(yyvsp[0]));}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 217 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("fd",(yyvsp[-1]),(yyvsp[0]));}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 222 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 226 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("STRING"); addlist(s,(yyvsp[-1])); addNode(&(yyval),s);}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 230 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-1])); addNode(&(yyvsp[-3]),len); addNode(&(yyval),(yyvsp[-3]));}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 231 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-3])); addNode(&(yyvsp[-5]),len); addNode(&(yyval),(yyvsp[-5])); addlist((yyval),(yyvsp[0]));}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 232 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-3])); addNode(&(yyvsp[-5]),len); addNode(&ass,(yyvsp[-5])); addNode(&ass,(yyvsp[0]));addNode(&(yyval),ass);}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 233 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-5])); addNode(&(yyvsp[-7]),len); addNode(&ass,(yyvsp[-7])); addNode(&ass,(yyvsp[-2]));addNode(&(yyval),ass); addlist((yyval),(yyvsp[0]));}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 237 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = (yyvsp[-1]); mknodelist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 241 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = (yyvsp[-1]); addlist(s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 246 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[-2])); addlist((yyval),(yyvsp[0]));}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 247 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 248 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&(yyval),s); addlist((yyval),(yyvsp[0]));}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 249 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-2])); addlist(s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 250 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-4])); addlist(s,(yyvsp[-2])); addNode(&(yyval),s); addlist((yyval),(yyvsp[0]));}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 254 "src/file.y" /* yacc.c:1646  */
    {addNode(&(yyvsp[-2]),(yyvsp[0]));}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 259 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-3]); node* index = mknode("INDEX"); addNode(&index,(yyvsp[-1])); addNode(&(yyval), index);}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 262 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (yytext); (yyval)->val_type = "NULL"; (yyval)->line = linecount;}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 266 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "STRING"; (yyval)->line = linecount;}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 270 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "CHAR"; (yyval)->line = linecount;}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 274 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "INT"; (yyval)->line = linecount;}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 278 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "REAL"; (yyval)->line = linecount;}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 282 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "HEX"; (yyval)->line = linecount;}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 286 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "BOOL"; (yyval)->line = linecount;}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 290 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "BOOL"; (yyval)->line = linecount;}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 294 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "ID"; (yyval)->line = linecount;}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 298 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("PTR"); node* m = mknode("*"); addNode(&m, (yyvsp[0])); addNode(&(yyval),m);}
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 302 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("NEGATIVE"); node* m = mknode("-"); addNode(&m, (yyvsp[0])); addNode(&(yyval),m);}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2378 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 305 "src/file.y" /* yacc.c:1906  */


int main(){
    return yyparse();
}

int yyerror(char* s){
    printf("%s: found line:%d token [%s]\n", s, linecount, yytext);
    return 0;
}
