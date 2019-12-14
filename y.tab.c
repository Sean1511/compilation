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
    XIF = 315
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

#line 247 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   739

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  284

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    31,    32,    36,    40,    41,    45,    46,
      50,    54,    58,    59,    60,    61,    62,    63,    64,    68,
      69,    70,    71,    72,    73,    74,    78,    79,    83,    84,
      85,    86,    87,    88,    89,    93,    97,   101,   102,   103,
     107,   110,   114,   117,   121,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     143,   144,   145,   146,   147,   148,   149,   150,   154,   155,
     156,   157,   161,   162,   166,   167,   171,   172,   173,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   189,   190,
     191,   192,   193,   194,   195,   196,   200,   201,   202,   203,
     204,   205,   206,   207,   211,   212,   213,   214,   215,   216,
     217,   221,   222,   223,   227,   228,   229,   230,   234,   238,
     242,   243,   244,   245,   249,   253,   257,   258,   259,   260,
     264,   265,   269,   273,   277,   281,   284,   287
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
  "$accept", "s", "code", "Main", "functions", "function", "void_func",
  "value_func", "void_block", "value_block", "statments", "statment",
  "if_statment", "if_else_statment", "loop_statment", "for", "while",
  "do_while", "stat_assignment", "string_assignment", "expression",
  "int_exp", "func_call", "func_params", "func", "condition",
  "logical_exp", "block", "func_type", "var_type", "args", "declerations",
  "var_decleration", "string_decleration", "string_params",
  "args_decleration", "params_decleration", "variables", "params",
  "csnull", "string", "char", "true", "false", "id", YY_NULLPTR
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
     315
};
# endif

#define YYPACT_NINF -215

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-215)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,   703,    12,  -215,  -215,     7,  -215,  -215,  -215,    13,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,    16,  -215,  -215,
    -215,   -11,  -215,    -2,     8,   724,    25,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,    16,    24,    34,   274,  -215,  -215,
      51,    36,   724,   715,    16,   724,    41,    42,    44,    53,
     109,  -215,   290,   375,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,    60,    64,    66,  -215,   513,  -215,  -215,    22,    16,
     141,  -215,  -215,  -215,  -215,    68,    65,    16,    71,   488,
     488,    16,    93,   506,  -215,   283,   321,  -215,   527,   575,
    -215,  -215,  -215,  -215,  -215,  -215,   539,  -215,  -215,   506,
     410,     6,  -215,   506,   196,   339,   330,  -215,     6,  -215,
      33,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
     506,    16,   488,   656,    69,    26,  -215,  -215,  -215,  -215,
    -215,    70,    78,    97,    76,   506,   246,   506,  -215,   506,
    -215,   348,  -215,   545,  -215,   213,    79,  -215,   458,   427,
    -215,  -215,  -215,     6,   117,  -215,   553,   506,   357,   575,
     506,   506,   383,   186,   506,    16,   213,  -215,   576,    81,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     178,   488,   488,   178,   488,   506,   488,   208,    89,   577,
     592,   506,  -215,  -215,   449,  -215,  -215,  -215,   419,     6,
       6,     6,     6,   110,    96,   599,   506,   388,   604,   611,
     506,    47,   668,  -215,  -215,  -215,   213,   -14,  -215,   213,
     213,   213,   213,   -14,   213,  -215,   124,  -215,  -215,  -215,
     104,   101,  -215,   113,   122,   622,  -215,   466,  -215,    -5,
    -215,    -5,  -215,   134,  -215,   123,   623,   506,   125,   126,
     634,   138,    16,    16,   178,    16,   119,  -215,  -215,   128,
    -215,  -215,  -215,   129,   641,  -215,  -215,   130,  -215,   152,
    -215,  -215,  -215,   135,  -215,  -215,  -215,   142,  -215,    16,
     178,  -215,  -215,  -215
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     7,     8,     9,    96,
      97,    98,    99,   100,   101,   102,   103,     0,     1,     3,
       6,     0,   137,     0,     0,   113,     0,   104,   105,   106,
     107,   108,   109,   110,     0,     0,   111,     0,     5,   124,
     131,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,     0,    27,    30,    31,    32,    37,    38,
      39,     0,     0,     0,    33,     0,   115,   117,     0,     0,
       0,    10,    11,   112,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,    17,     0,     0,
      14,    26,    28,    29,    34,    18,     0,   114,   116,     0,
       0,     0,   130,     0,     0,     0,     0,   119,     0,   125,
     126,   118,    50,   135,   136,   132,    52,   134,    51,    53,
       0,     0,     0,    87,     0,    78,    57,    59,    55,    56,
      58,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,     0,    16,     0,    13,    43,    58,    70,    75,     0,
      73,    65,    66,     0,     0,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    15,     0,    74,    68,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,   128,   127,    49,    86,    80,    45,    48,    79,
      81,    82,    83,    46,    84,    47,    35,    76,    77,    41,
       0,     0,    92,     0,     0,     0,    71,     0,    64,    60,
      63,    61,    62,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,    94,     0,
      69,    44,    24,     0,     0,    20,    25,     0,   133,   122,
     121,   129,    36,     0,    42,    95,    21,     0,    22,     0,
       0,    23,   123,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,   184,   -23,     4,  -215,  -215,   155,  -215,
     -47,   -51,  -215,  -215,  -215,  -215,  -215,  -215,   -80,  -215,
      95,  -102,  -215,     3,  -142,   -76,  -111,   151,  -215,   157,
     167,   -26,   -57,   -43,  -214,  -215,  -215,  -152,   144,  -215,
    -215,   -33,  -215,  -215,   -17
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,     7,     8,    38,    72,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     123,   154,    63,   149,   150,   124,   125,    64,    17,    34,
      35,    65,    66,    67,    75,    36,    78,   109,    39,   126,
     269,   127,   128,   129,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      23,   132,    91,    85,   131,    88,   163,   197,    97,    20,
       1,   169,    18,   213,    52,    22,   151,    40,    96,    21,
      68,   172,    98,   105,    86,    22,    89,    76,   152,    97,
     200,   179,    97,    68,    91,    68,    68,    91,   270,   141,
     202,    24,   143,    98,   106,    91,    98,   104,    68,    97,
      25,   198,    40,    68,    91,    99,    20,   158,   153,   162,
     110,    26,   181,    98,   133,   282,   164,   165,    68,    68,
     182,    68,    68,   230,   100,    37,   101,    41,   159,    68,
     251,   252,   146,    42,   155,    69,    70,    68,    68,    68,
      91,   155,    91,    79,    80,   197,    81,   239,   240,   241,
     242,   271,    97,    50,   167,   227,   228,    91,    20,    92,
     231,    91,   207,    93,    83,    94,    98,   107,    22,   108,
     111,   134,   180,   183,    68,    44,    68,   184,   186,   226,
     185,   194,   229,    45,   215,    46,   155,    47,    48,    49,
     232,    68,    68,   243,    43,    68,   103,   244,   110,   199,
      22,   254,   200,   255,   256,   117,    91,    44,   201,    50,
      84,   268,   202,    68,   257,    45,    68,    46,   274,    47,
      48,    49,   203,   258,   262,   273,   265,   266,   136,   275,
     276,   278,   155,   155,   155,   155,   279,    22,   280,    19,
      68,    50,    51,   281,   145,   148,    71,   237,   156,    43,
      82,   157,    77,   272,    46,    22,    47,    48,    49,    73,
     261,     0,    44,   102,     0,   166,     0,   168,   199,     0,
      45,   200,    46,     0,    47,    48,    49,   201,    50,   283,
     187,   202,   189,     0,   190,    76,   110,    68,   133,     0,
     171,   211,     0,   172,   148,   171,    50,    87,   172,   177,
       0,     0,   205,   179,   177,   208,   209,     0,   179,   212,
       0,   214,    76,    68,     0,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,     0,     0,    43,   171,     0,
     145,   172,     0,    22,     0,     0,   235,   177,   137,   148,
      44,   179,    22,    43,     0,   188,     0,     0,    45,    22,
      46,   246,    47,    48,    49,   250,    44,     0,     0,    46,
       0,    47,    48,    49,    45,     0,    46,     0,    47,    48,
      49,     0,     0,     0,    50,    51,   139,     0,     0,     0,
      22,     0,   148,    50,   138,   161,     0,    44,     0,    22,
      50,    87,   264,     0,   160,    45,    44,    46,    22,    47,
      48,    49,     0,   191,    45,     0,    46,    22,    47,    48,
      49,     0,   206,     0,     0,    46,    22,    47,    48,    49,
       0,    50,   140,     0,    46,     0,    47,    48,    49,     0,
      50,    95,     0,    46,    22,    47,    48,    49,   210,    50,
      90,     0,    22,   247,     0,     0,     0,    22,    50,   192,
       0,    46,     0,    47,    48,    49,     0,    50,   142,    46,
       0,    47,    48,    49,    46,     0,    47,    48,    49,    22,
     112,     0,     0,     0,     0,    50,    90,   113,   114,   115,
     116,   117,   118,    50,   144,   119,    22,   112,    50,   193,
       0,     0,     0,     0,   113,   114,   115,   116,   117,   118,
       0,   199,   119,     0,   200,     0,   121,     0,    22,   112,
     201,     0,   135,   147,   202,     0,   113,   114,   115,   116,
     117,   118,   238,   121,   119,    22,   112,     0,     0,   135,
     196,     0,     0,   113,   114,   115,   116,   117,   118,     0,
     171,   119,   195,   172,     0,   121,     0,    22,   112,   177,
       0,   135,   236,   179,     0,   113,   114,   115,   116,   117,
     118,     0,   121,   119,     0,    22,   112,     0,   135,   260,
       0,     0,    22,   113,   114,   115,   116,   117,   118,    44,
     120,   119,     0,     0,   121,     0,    22,    45,     0,    46,
     122,    47,    48,    49,     0,     0,     0,     0,    22,     0,
       0,     0,   121,    46,    22,    47,    48,    49,   135,     0,
       0,     0,     0,    50,    95,    46,     0,    47,    48,    49,
       0,    46,     0,    47,    48,    49,     0,    50,   142,     0,
       0,     0,     0,     0,    22,   171,     0,     0,   172,    50,
     144,    44,     0,     0,   177,    50,   193,     0,   179,    45,
       0,    46,   204,    47,    48,    49,     0,   170,   171,   171,
       0,   172,   172,   173,   174,   175,   176,   177,   177,   178,
       0,   179,   179,     0,   171,    50,   233,   172,     0,   214,
       0,   171,     0,   177,   172,     0,   171,   179,     0,   172,
     177,   234,     0,   171,   179,   177,   172,     0,   245,   179,
       0,     0,   177,   248,   171,   171,   179,   172,   172,     0,
     249,     0,     0,   177,   177,     0,   171,   179,   179,   172,
       0,   259,   263,   171,     0,   177,   172,     0,     0,   179,
       0,     0,   177,   267,     0,     0,   179,   170,   171,     0,
     277,   172,     0,   173,   174,   175,   176,   177,     0,   178,
     171,   179,   253,   172,     0,     0,     0,     9,     0,   177,
      10,    11,     0,   179,    12,    13,    14,    15,    16,    74,
       0,     0,    10,    11,     0,     0,    12,    13,    14,    15,
      16,    27,    28,     0,     0,    29,    30,    31,    32,    33
};

static const yytype_int16 yycheck[] =
{
      17,    81,    53,    50,    80,    52,   108,   149,    65,     5,
       3,   122,     0,   165,    37,     9,    10,    34,    65,     6,
      37,    35,    65,    70,    50,     9,    52,    44,    22,    86,
      35,    45,    89,    50,    85,    52,    53,    88,   252,    86,
      45,    52,    89,    86,    70,    96,    89,    70,    65,   106,
      52,   153,    69,    70,   105,    33,    52,   104,    52,   106,
      77,    53,    36,   106,    81,   279,    33,    34,    85,    86,
      44,    88,    89,   184,    52,    50,    54,    53,   104,    96,
      33,    34,    99,    49,   101,    34,    50,   104,   105,   106,
     141,   108,   143,    52,    52,   237,    52,   199,   200,   201,
     202,   253,   159,    50,   121,   181,   182,   158,   104,    49,
     186,   162,   159,    49,     5,    49,   159,    49,     9,    54,
      49,    28,    53,    53,   141,    16,   143,    49,    52,   180,
      33,    52,   183,    24,    53,    26,   153,    28,    29,    30,
      51,   158,   159,    33,     3,   162,     5,    51,   165,    32,
       9,    27,    35,    49,    53,    21,   207,    16,    41,    50,
      51,    23,    45,   180,    51,    24,   183,    26,    49,    28,
      29,    30,    55,    51,    51,   255,    51,    51,    83,    51,
      51,    51,   199,   200,   201,   202,    34,     9,    53,     5,
     207,    50,    51,    51,    99,   100,    41,   194,   103,     3,
      49,     5,    45,   254,    26,     9,    28,    29,    30,    42,
     243,    -1,    16,    69,    -1,   120,    -1,   122,    32,    -1,
      24,    35,    26,    -1,    28,    29,    30,    41,    50,   280,
     135,    45,   137,    -1,   139,   252,   253,   254,   255,    -1,
      32,    55,    -1,    35,   149,    32,    50,    51,    35,    41,
      -1,    -1,   157,    45,    41,   160,   161,    -1,    45,   164,
      -1,    53,   279,   280,    -1,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,    -1,    -1,     3,    32,    -1,
     185,    35,    -1,     9,    -1,    -1,   191,    41,     5,   194,
      16,    45,     9,     3,    -1,    49,    -1,    -1,    24,     9,
      26,   206,    28,    29,    30,   210,    16,    -1,    -1,    26,
      -1,    28,    29,    30,    24,    -1,    26,    -1,    28,    29,
      30,    -1,    -1,    -1,    50,    51,     5,    -1,    -1,    -1,
       9,    -1,   237,    50,    51,     5,    -1,    16,    -1,     9,
      50,    51,   247,    -1,     5,    24,    16,    26,     9,    28,
      29,    30,    -1,     5,    24,    -1,    26,     9,    28,    29,
      30,    -1,     5,    -1,    -1,    26,     9,    28,    29,    30,
      -1,    50,    51,    -1,    26,    -1,    28,    29,    30,    -1,
      50,    51,    -1,    26,     9,    28,    29,    30,     5,    50,
      51,    -1,     9,     5,    -1,    -1,    -1,     9,    50,    51,
      -1,    26,    -1,    28,    29,    30,    -1,    50,    51,    26,
      -1,    28,    29,    30,    26,    -1,    28,    29,    30,     9,
      10,    -1,    -1,    -1,    -1,    50,    51,    17,    18,    19,
      20,    21,    22,    50,    51,    25,     9,    10,    50,    51,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      -1,    32,    25,    -1,    35,    -1,    46,    -1,     9,    10,
      41,    -1,    52,    53,    45,    -1,    17,    18,    19,    20,
      21,    22,    53,    46,    25,     9,    10,    -1,    -1,    52,
      53,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      32,    25,    34,    35,    -1,    46,    -1,     9,    10,    41,
      -1,    52,    53,    45,    -1,    17,    18,    19,    20,    21,
      22,    -1,    46,    25,    -1,     9,    10,    -1,    52,    53,
      -1,    -1,     9,    17,    18,    19,    20,    21,    22,    16,
      42,    25,    -1,    -1,    46,    -1,     9,    24,    -1,    26,
      52,    28,    29,    30,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    46,    26,     9,    28,    29,    30,    52,    -1,
      -1,    -1,    -1,    50,    51,    26,    -1,    28,    29,    30,
      -1,    26,    -1,    28,    29,    30,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,     9,    32,    -1,    -1,    35,    50,
      51,    16,    -1,    -1,    41,    50,    51,    -1,    45,    24,
      -1,    26,    49,    28,    29,    30,    -1,    31,    32,    32,
      -1,    35,    35,    37,    38,    39,    40,    41,    41,    43,
      -1,    45,    45,    -1,    32,    50,    49,    35,    -1,    53,
      -1,    32,    -1,    41,    35,    -1,    32,    45,    -1,    35,
      41,    49,    -1,    32,    45,    41,    35,    -1,    49,    45,
      -1,    -1,    41,    49,    32,    32,    45,    35,    35,    -1,
      49,    -1,    -1,    41,    41,    -1,    32,    45,    45,    35,
      -1,    49,    49,    32,    -1,    41,    35,    -1,    -1,    45,
      -1,    -1,    41,    49,    -1,    -1,    45,    31,    32,    -1,
      49,    35,    -1,    37,    38,    39,    40,    41,    -1,    43,
      32,    45,    34,    35,    -1,    -1,    -1,     4,    -1,    41,
       7,     8,    -1,    45,    11,    12,    13,    14,    15,     4,
      -1,    -1,     7,     8,    -1,    -1,    11,    12,    13,    14,
      15,     7,     8,    -1,    -1,    11,    12,    13,    14,    15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    62,    63,    64,    65,    66,    67,    68,     4,
       7,     8,    11,    12,    13,    14,    15,    89,     0,    64,
      66,     6,     9,   105,    52,    52,    53,     7,     8,    11,
      12,    13,    14,    15,    90,    91,    96,    50,    69,    99,
     105,    53,    49,     3,    16,    24,    26,    28,    29,    30,
      50,    51,    65,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    83,    88,    92,    93,    94,   105,    34,
      50,    69,    70,    91,     4,    95,   105,    90,    97,    52,
      52,    52,    88,     5,    51,    71,    92,    51,    71,    92,
      51,    72,    49,    49,    49,    51,    71,    93,    94,    33,
      52,    54,    99,     5,    65,    71,    92,    49,    54,    98,
     105,    49,    10,    17,    18,    19,    20,    21,    22,    25,
      42,    46,    52,    81,    86,    87,   100,   102,   103,   104,
     105,    86,    79,   105,    28,    52,    81,     5,    51,     5,
      51,    71,    51,    71,    51,    81,   105,    53,    81,    84,
      85,    10,    22,    52,    82,   105,    81,     5,    71,    92,
       5,     5,    71,    82,    33,    34,    81,   105,    81,    87,
      31,    32,    35,    37,    38,    39,    40,    41,    43,    45,
      53,    36,    44,    53,    49,    33,    52,    81,    49,    81,
      81,     5,    51,    51,    52,    34,    53,    85,    82,    32,
      35,    41,    45,    55,    49,    81,     5,    71,    81,    81,
       5,    55,    81,    98,    53,    53,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    72,    86,    86,    72,
      87,    86,    51,    49,    49,    81,    53,    84,    53,    82,
      82,    82,    82,    33,    51,    49,    81,     5,    49,    49,
      81,    33,    34,    34,    27,    49,    53,    51,    51,    49,
      53,   102,    51,    49,    81,    51,    51,    49,    23,   101,
      95,    98,    72,    79,    49,    51,    51,    49,    51,    34,
      53,    51,    95,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    65,    65,    66,    66,
      67,    68,    69,    69,    69,    69,    69,    69,    69,    70,
      70,    70,    70,    70,    70,    70,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    73,    74,    75,    75,    75,
      76,    77,    78,    79,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      83,    83,    84,    84,    85,    85,    86,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    92,    92,    92,    92,    93,    94,
      95,    95,    95,    95,    96,    97,    98,    98,    98,    98,
      99,    99,   100,   101,   102,   103,   104,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     6,     2,     1,     1,     1,
       7,     7,     2,     4,     3,     5,     4,     3,     3,     5,
       6,     7,     7,     8,     6,     6,     2,     1,     2,     2,
       1,     1,     1,     1,     2,     5,     7,     1,     1,     1,
       9,     5,     7,     3,     6,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     1,     1,     1,     4,     6,
       3,     5,     2,     1,     2,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     2,     3,
       3,     4,     5,     6,     6,     7,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     2,     1,     2,     1,     3,     3,
       4,     6,     6,     8,     2,     2,     1,     3,     3,     5,
       3,     1,     1,     1,     1,     1,     1,     1
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
#line 27 "src/file.y" /* yacc.c:1646  */
    {printtree((yyvsp[0]), 0);}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 31 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addlist((yyval), (yyvsp[-1])); addNode(&(yyval), (yyvsp[0]));}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 32 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addNode(&(yyval), (yyvsp[0]));}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("MAIN"); addNode(&(yyval), (yyvsp[0]));}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 40 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("sean", (yyvsp[-1]), (yyvsp[0]));}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, (yyvsp[-5])); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, (yyvsp[-5])); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); }
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 59 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v); addlist((yyval), (yyvsp[-1]));}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 60 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval),(yyvsp[-1]));}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-3])); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v);addlist((yyval),(yyvsp[-1]));}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 62 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-2])); addlist((yyval),(yyvsp[-1]));}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 63 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-1]));}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 64 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-1]));addNode(&(yyval),v);}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 68 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 69 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 70 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-5])); addlist((yyval),(yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 71 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY");node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 72 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-6]));  node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 73 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 74 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-4]));addNode(&(yyval),v); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 78 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 93 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF"); addNode(&s, (yyvsp[-2])); addlist(s,(yyvsp[0]));addNode(&(yyval),s);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 97 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF-ELSE"); addNode(&s, (yyvsp[-4])); addlist(s,(yyvsp[-2])); addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 107 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("FOR"); addlist(s, (yyvsp[-6])); addNode(&s, (yyvsp[-4])); addlist(s, (yyvsp[-2])); addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 110 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("WHILE"); addNode(&s, (yyvsp[-2])); addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 114 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("DO-WHILE"); addlist(s, (yyvsp[-5])); addNode(&s, (yyvsp[-2])); addNode(&(yyval),s);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 121 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); node* index = mknode("INDEX"); addNode(&index,(yyvsp[-3])); addNode(&(yyvsp[-5]), index); addNode(&s, (yyvsp[-5])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 125 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("+"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 126 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("-"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 127 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("*"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 128 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("/"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 129 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 130 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 131 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 132 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 133 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 134 "src/file.y" /* yacc.c:1646  */
    {char* t = (yyvsp[0])->token; char *s = malloc(strlen(t)+strlen("&")+1); strcat (s,"&"); strcat(s,t); (yyval) = mknode(s);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 143 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("+"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 144 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("-"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 145 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("*"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 146 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("/"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 147 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 148 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 149 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 154 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL"); addNode(&s,(yyvsp[-3])); node* args = mknode("ARGS"); addlist(args, (yyvsp[-1])); addNode(&s, args); addNode(&(yyval),s);}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 155 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); addNode(&s,(yyvsp[-5])); node* call = mknode("FUNC_CALL"); node* args = mknode("ARGS"); addlist(args, (yyvsp[-1])); addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 156 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL"); addNode(&s,(yyvsp[-2])); node* args = mknode("ARGS NONE"); addNode(&s, args); addNode(&(yyval),s);}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 157 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); addNode(&s,(yyvsp[-4])); node* call = mknode("FUNC_CALL"); node* args = mknode("ARGS NONE"); addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 161 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 166 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[-1]));}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 167 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[0]));}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 171 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0])); }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 172 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("||"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0])); }
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 177 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("=="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 178 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 179 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 180 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 181 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 182 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("!="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 183 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("NOT"); addNode(&(yyval),(yyvsp[0]));}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 184 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 189 "src/file.y" /* yacc.c:1646  */
    {(yyval) =  mknode("BLOCK");}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 190 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); addlist(s,(yyvsp[-1])); addNode(&(yyval),s);}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 191 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-1])); addNode(&s,v); addNode(&(yyval),s);}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 192 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-2])); addNode(&s,v); addlist(s, (yyvsp[-1])); addNode(&(yyval),s);}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 193 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BLOCK"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 194 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); addlist(s,(yyvsp[-4]));node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 195 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-4])); addNode(&s,v); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 196 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-5])); addNode(&s,v); addlist(s, (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 200 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE VOID");}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 201 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE INT");}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 202 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE REAL");}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 203 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE CHAR");}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 204 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE BOOL");}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 205 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE INT*");}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 206 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE CHAR*");}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 207 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE REAL*");}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 211 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT");}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 212 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL");}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 213 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR");}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 214 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BOOL");}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 215 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT*");}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 216 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR*");}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 217 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL*");}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 221 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[0]));}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 222 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[-2])); addlist((yyval), (yyvsp[0]));}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 223 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS NONE");}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 227 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("fd",(yyvsp[-1]),(yyvsp[0]));}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 229 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("fd",(yyvsp[-1]),(yyvsp[0]));}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 234 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 238 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("STRING"); addlist(s,(yyvsp[-1])); addNode(&(yyval),s);}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 242 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-1])); addNode(&(yyvsp[-3]),len); addNode(&(yyval),(yyvsp[-3]));}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 243 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-3])); addNode(&(yyvsp[-5]),len); addNode(&(yyval),(yyvsp[-5])); addlist((yyval),(yyvsp[0]));}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 244 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-3])); addNode(&(yyvsp[-5]),len); addNode(&ass,(yyvsp[-5])); addNode(&ass,(yyvsp[0]));addNode(&(yyval),ass);}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 245 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-5])); addNode(&(yyvsp[-7]),len); addNode(&ass,(yyvsp[-7])); addNode(&ass,(yyvsp[-2]));addNode(&(yyval),ass); addlist((yyval),(yyvsp[0]));}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 249 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = (yyvsp[-1]); mknodelist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 253 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = (yyvsp[-1]); addlist(s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 258 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[-2])); addlist((yyval),(yyvsp[0]));}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 259 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 260 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&(yyval),s); addlist((yyval),(yyvsp[0]));}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 264 "src/file.y" /* yacc.c:1646  */
    {addNode(&(yyvsp[-2]),(yyvsp[0]));}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 269 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (yytext);}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 273 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 277 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 281 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 284 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 287 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2269 "y.tab.c" /* yacc.c:1646  */
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
#line 290 "src/file.y" /* yacc.c:1906  */


int main(){
    return yyparse();
}

int yyerror(char* s){
    printf("%s: found line:%d token [%s]\n", s, linecount, yytext);
    return 0;
}
