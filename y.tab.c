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

/* Copy the second part of user declarations.  */

#line 245 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   234

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    25,    25,    29,    30,    31,    34,    38,    39,    43,
      44,    48,    52,    56,    57,    58,    59,    60,    64,    65,
      66,    67,    68,    72,    73,    77,    78,    79,    80,    81,
      85,    89,    93,    94,    95,    99,   102,   106,   109,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   126,
     127,   128,   132,   133,   134,   135,   136,   137,   138,   142,
     143,   147,   148,   149,   150,   154,   155,   156,   160,   161,
     162,   163,   167,   168,   172,   176,   177,   181
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "VOID", "INT", "REAL",
  "SEMICOLON", "IF", "ELSE", "ASSIGNMENT", "GREATER", "PLUS", "LEFTBRACE",
  "RIGHTBRACE", "LEFTPAREN", "RIGHTPAREN", "ID", "INTEGER", "CHAR",
  "RETURN", "COMMA", "BOOL", "MAIN", "INTPTR", "CHARPTR", "REALPTR",
  "STRDECLARE", "BOOLTRUE", "BOOLFALSE", "CSNULL", "LEFTBRACKET",
  "RIGHTBRACKET", "PERCENT", "QUOTES", "DOUBLEQUOTES", "AND", "DIVISION",
  "EQUAL", "GREATEREQUAL", "LESS", "LESSEQUAL", "MINUS", "NOT", "NOTEQUAL",
  "OR", "MULTI", "ADDRESS", "DEREFERENCE", "ABSUOLUTE", "COLON", "HEX",
  "STR", "WHILE", "FOR", "DO", "VAR", "CHARACTER", "REAL_D", "XIF",
  "$accept", "s", "code", "Main", "functions", "function", "void_func",
  "value_func", "void_block", "value_block", "statments", "statment",
  "if_statment", "if_else_statment", "loop_statment", "for", "while",
  "do_while", "stat_assignment", "expression", "condition", "logical_exp",
  "block", "func_type", "var_type", "args", "var_decleration",
  "params_decleration", "params", "id", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -102

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-102)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      39,    21,  -102,    23,  -102,  -102,    14,    46,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,    14,  -102,  -102,  -102,    26,
      11,  -102,  -102,  -102,    14,    48,    84,  -102,    33,    58,
      11,  -102,    14,    80,  -102,  -102,  -102,  -102,    72,    88,
    -102,    68,    89,   101,    82,    11,    57,    -1,   107,  -102,
    -102,  -102,  -102,  -102,  -102,    92,  -102,   107,   108,    49,
    -102,   113,  -102,  -102,  -102,   110,  -102,    49,    14,    75,
     114,    94,   107,  -102,    68,  -102,  -102,   109,    68,    68,
     188,   116,   -25,  -102,   125,    68,    68,    68,    68,    68,
      68,   124,   123,   134,    95,  -102,    68,   117,   141,  -102,
      68,    -8,   126,    68,    68,    68,    68,    68,    68,   107,
      49,    49,  -102,    38,   170,  -102,    38,   170,  -102,   107,
      49,    49,  -102,   152,  -102,    68,   136,   159,   126,   126,
     126,   126,   126,   126,   148,  -102,  -102,  -102,   151,   149,
     153,   172,  -102,   155,   107,    14,   163,  -102,   160,  -102,
    -102,   157,  -102,  -102,   107,  -102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    77,     0,     2,     5,     4,     8,     9,    10,
       6,    61,    62,    63,    64,     0,     1,     3,     7,     0,
      71,    65,    66,    67,     0,     0,    71,    74,    76,     0,
      69,    68,     0,     0,    11,    12,    70,    75,     0,     0,
      13,     0,     0,     0,     0,     0,     0,     0,    24,    26,
      27,    28,    32,    33,    34,     0,    29,     0,     0,     0,
      60,     0,    45,    46,    47,     0,    48,     0,     0,     0,
       0,     0,     0,    15,     0,    23,    25,     0,     0,     0,
       0,     0,    51,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    17,     0,     0,     0,    14,
       0,    38,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    39,    43,    42,    40,    44,    41,     0,
       0,     0,    72,     0,    16,     0,     0,     0,    53,    52,
      54,    55,    56,    57,    30,    49,    50,    36,     0,     0,
       0,     0,    19,     0,     0,     0,     0,    20,     0,    21,
      31,     0,    37,    22,     0,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,   169,     2,  -102,  -102,  -102,  -102,  -102,
     -36,  -101,  -102,  -102,  -102,  -102,  -102,  -102,   -63,   -27,
     -66,    56,   137,  -102,  -102,   154,   -44,   -23,   158,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,     9,    34,    35,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    80,
      81,    82,    56,    15,    24,    25,    57,    26,    27,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    91,    72,    61,    85,    92,    10,    36,   134,    18,
      71,   110,    75,    73,    65,    19,    21,    22,   137,    74,
     111,    77,    70,    16,    28,    11,    12,    13,    86,    87,
      23,     2,    28,    58,    88,    46,    97,    89,    90,    58,
      14,    20,     1,   150,   135,   136,    58,    98,    58,     1,
     122,   101,   102,   155,    32,   139,     2,    58,   113,   114,
     115,   116,   117,   118,    29,    38,     2,    62,    58,   123,
      39,    33,    58,   127,     2,    87,   128,   129,   130,   131,
     132,   133,   151,     1,    90,     2,    62,    59,    38,    21,
      22,    30,    79,    39,    40,    39,    38,     2,   141,    76,
      41,    39,    60,    23,    67,     2,    63,    64,    95,    58,
      42,    43,    44,    45,    96,    38,    68,    84,    78,    58,
      39,    94,    85,    99,     2,    63,    64,    83,    93,   100,
     120,   124,   109,    42,    43,    44,    45,   125,    85,   112,
     119,    42,    43,    44,    58,    58,    86,    87,   126,   121,
     142,    45,    88,    85,    58,    89,    90,   144,   145,   140,
      42,    43,    44,    87,    85,   146,   143,   147,    88,   149,
     152,    85,    90,   154,   153,    17,   138,    86,    87,   148,
      31,    69,    85,    88,    85,     0,    89,    90,    86,    87,
      37,     0,     0,     0,    88,    86,    87,    89,    90,   103,
      85,    88,     0,     0,    89,    90,    -1,    87,    86,    87,
       0,     0,    88,     0,    88,    -1,    90,    89,    90,     0,
       0,     0,     0,     0,    86,    87,   104,   105,   106,   107,
      88,     0,   108,    89,    90
};

static const yytype_int16 yycheck[] =
{
       0,    67,    46,    39,    12,    68,     6,    30,   109,     7,
      46,    36,    48,    14,    41,    15,     5,     6,   119,    20,
      45,    57,    45,     0,    24,     4,     5,     6,    36,    37,
      19,    17,    32,    33,    42,    33,    72,    45,    46,    39,
      19,    15,     3,   144,   110,   111,    46,    74,    48,     3,
      94,    78,    79,   154,    21,   121,    17,    57,    85,    86,
      87,    88,    89,    90,    16,     8,    17,    18,    68,    96,
      13,    13,    72,   100,    17,    37,   103,   104,   105,   106,
     107,   108,   145,     3,    46,    17,    18,    15,     8,     5,
       6,     7,    43,    13,    14,    13,     8,    17,   125,     7,
      20,    13,    14,    19,    15,    17,    57,    58,    14,   109,
      53,    54,    55,    56,    20,     8,    15,     7,    10,   119,
      13,     7,    12,    14,    17,    57,    58,    14,    53,    20,
       7,    14,    16,    53,    54,    55,    56,    20,    12,    14,
      16,    53,    54,    55,   144,   145,    36,    37,     7,    15,
      14,    56,    42,    12,   154,    45,    46,     9,     7,     7,
      53,    54,    55,    37,    12,    16,     7,    14,    42,    14,
       7,    12,    46,    16,    14,     6,   120,    36,    37,     7,
      26,    44,    12,    42,    12,    -1,    45,    46,    36,    37,
      32,    -1,    -1,    -1,    42,    36,    37,    45,    46,    11,
      12,    42,    -1,    -1,    45,    46,    36,    37,    36,    37,
      -1,    -1,    42,    -1,    42,    45,    46,    45,    46,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    17,    61,    62,    63,    64,    65,    66,    67,
      89,     4,     5,     6,    19,    83,     0,    63,    64,    89,
      15,     5,     6,    19,    84,    85,    87,    88,    89,    16,
       7,    85,    21,    13,    68,    69,    87,    88,     8,    13,
      14,    20,    53,    54,    55,    56,    64,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    82,    86,    89,    15,
      14,    70,    18,    57,    58,    79,    89,    15,    15,    82,
      87,    70,    86,    14,    20,    70,     7,    70,    10,    43,
      79,    80,    81,    14,     7,    12,    36,    37,    42,    45,
      46,    80,    78,    53,     7,    14,    20,    70,    79,    14,
      20,    79,    79,    11,    38,    39,    40,    41,    44,    16,
      36,    45,    14,    79,    79,    79,    79,    79,    79,    16,
       7,    15,    86,    79,    14,    20,     7,    79,    79,    79,
      79,    79,    79,    79,    71,    80,    80,    71,    81,    80,
       7,    79,    14,     7,     9,     7,    16,    14,     7,    14,
      71,    78,     7,    14,    16,    71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    63,    64,    64,    65,
      65,    66,    67,    68,    68,    68,    68,    68,    69,    69,
      69,    69,    69,    70,    70,    71,    71,    71,    71,    71,
      72,    73,    74,    74,    74,    75,    76,    77,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    80,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    83,    83,    83,    83,    84,    84,    84,    85,    85,
      85,    85,    86,    86,    87,    88,    88,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     7,     7,     2,     4,     3,     5,     4,     5,     6,
       7,     7,     8,     2,     1,     2,     1,     1,     1,     1,
       5,     7,     1,     1,     1,     9,     5,     7,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     0,     4,     3,     2,     3,     1,     1
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
#line 25 "src/file.y" /* yacc.c:1646  */
    {printtree((yyvsp[0]), 0);}
#line 1450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 29 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); }
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 30 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addNode(&(yyval), (yyvsp[0])); }
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 31 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); }
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 38 "src/file.y" /* yacc.c:1646  */
    {addNode(&(yyvsp[-1]), (yyvsp[0]));}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 48 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("FUNCTION"); addNode(&(yyval),(yyvsp[-4])); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[-5])); addNode(&(yyval), (yyvsp[0]));}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 52 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("FUNCTION"); addNode(&(yyval),(yyvsp[-4])); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[-5])); addNode(&(yyval), (yyvsp[0]));}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); }
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[-1]));}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 58 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addNode(&(yyval),(yyvsp[-1]));}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 59 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addNode(&(yyval), (yyvsp[-3])); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[-1]));}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 60 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addNode(&(yyval), (yyvsp[-2])); addNode(&(yyval),(yyvsp[-1]));}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 64 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 65 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addNode(&(yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 66 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addNode(&(yyval), (yyvsp[-5])); addNode(&(yyval),(yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 67 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addNode(&(yyval), (yyvsp[-5])); addNode(&(yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 68 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addNode(&(yyval), (yyvsp[-6])); addNode(&(yyval),(yyvsp[-5])); addNode(&(yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 72 "src/file.y" /* yacc.c:1646  */
    {addNode(&(yyvsp[-1]), (yyvsp[0]));}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 85 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("IF"); addNode(&(yyval), (yyvsp[-2])); addNode(&(yyval),(yyvsp[0]));}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 89 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("IF-ELSE"); addNode(&(yyval), (yyvsp[-4])); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 99 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("FOR"); addNode(&(yyval), (yyvsp[-6])); addNode(&(yyval), (yyvsp[-4])); addNode(&(yyval), (yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 102 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("WHILE"); addNode(&(yyval), (yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 106 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("DO-WHILE"); addNode(&(yyval), (yyvsp[-5])); addNode(&(yyval), (yyvsp[-2]));}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 109 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0]));}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 113 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("+"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 114 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("-"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 115 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("*"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 116 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("/"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("&&"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 118 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("||"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 119 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 120 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 121 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 126 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0])); }
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 127 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("||"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0])); }
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 132 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("=="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 133 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 134 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 135 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 136 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 137 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("!="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 138 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("NOT"); addNode(&(yyval),(yyvsp[0]));}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 142 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BLOCK"); addNode(&(yyval),(yyvsp[-1]));}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 143 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BLOCK");}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 147 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE VOID"); }
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 148 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE INT"); }
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 149 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE REAL"); }
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 150 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE CHAR"); }
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 154 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT"); }
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 155 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL"); }
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 156 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR"); }
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 160 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addNode(&(yyval),(yyvsp[-1]));}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 161 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addNode(&(yyval),(yyvsp[-1]));}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 162 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 163 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS NONE");}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 167 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("VAR"); addNode(&(yyval), (yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 168 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("VAR"); addNode(&(yyval), (yyvsp[-1]));}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 172 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1])->token); mknodelist((yyval),(yyvsp[0]));}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 176 "src/file.y" /* yacc.c:1646  */
    {addNode(&(yyvsp[-2]),(yyvsp[0]));}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 181 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1808 "y.tab.c" /* yacc.c:1646  */
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
#line 183 "src/file.y" /* yacc.c:1906  */


int main(){
    return yyparse();
}

int yyerror(char* s){
    printf("%s: found line:%d token [%s]\n", s, linecount, yytext);
    return 0;
}
