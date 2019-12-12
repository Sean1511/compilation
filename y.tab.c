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
    COMMENTS = 262,
    INT = 263,
    REAL = 264,
    ID = 265,
    INTEGER = 266,
    CHAR = 267,
    BOOL = 268,
    INTPTR = 269,
    CHARPTR = 270,
    REALPTR = 271,
    STRING = 272,
    BOOLTRUE = 273,
    BOOLFALSE = 274,
    CSNULL = 275,
    REAL_D = 276,
    CHARACTER = 277,
    HEX = 278,
    STR = 279,
    VAR = 280,
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
#define COMMENTS 262
#define INT 263
#define REAL 264
#define ID 265
#define INTEGER 266
#define CHAR 267
#define BOOL 268
#define INTPTR 269
#define CHARPTR 270
#define REALPTR 271
#define STRING 272
#define BOOLTRUE 273
#define BOOLFALSE 274
#define CSNULL 275
#define REAL_D 276
#define CHARACTER 277
#define HEX 278
#define STR 279
#define VAR 280
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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   440

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

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
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    33,    34,    38,    42,    43,    47,    48,
      52,    56,    60,    61,    62,    63,    64,    68,    69,    70,
      71,    72,    76,    77,    81,    82,    83,    84,    85,    86,
      87,    91,    95,    99,   100,   101,   105,   108,   112,   115,
     119,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   136,   137,   138,   139,   140,   141,   142,   146,   147,
     148,   149,   153,   154,   155,   159,   160,   161,   162,   163,
     164,   165,   166,   170,   171,   175,   176,   177,   178,   179,
     183,   184,   185,   186,   190,   191,   192,   193,   197,   198,
     199,   203,   204,   205,   206,   210,   214,   215,   223,   227,
     231
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "VOID", "RETURN", "MAIN",
  "COMMENTS", "INT", "REAL", "ID", "INTEGER", "CHAR", "BOOL", "INTPTR",
  "CHARPTR", "REALPTR", "STRING", "BOOLTRUE", "BOOLFALSE", "CSNULL",
  "REAL_D", "CHARACTER", "HEX", "STR", "VAR", "IF", "ELSE", "WHILE", "FOR",
  "DO", "GREATER", "PLUS", "ASSIGNMENT", "COMMA", "DIVISION", "AND",
  "EQUAL", "GREATEREQUAL", "LESS", "LESSEQUAL", "MINUS", "NOT", "NOTEQUAL",
  "OR", "MULTI", "ADDRESS", "DEREFERENCE", "ABSUOLUTE", "SEMICOLON",
  "LEFTBRACE", "RIGHTBRACE", "LEFTPAREN", "RIGHTPAREN", "LEFTBRACKET",
  "RIGHTBRACKET", "PERCENT", "QUOTES", "DOUBLEQUOTES", "COLON", "XIF",
  "$accept", "s", "code", "Main", "functions", "function", "void_func",
  "value_func", "void_block", "value_block", "statments", "statment",
  "if_statment", "if_else_statment", "loop_statment", "for", "while",
  "do_while", "stat_assignment", "string_assignment", "expression",
  "int_exp", "func_call", "condition", "logical_exp", "block", "func_type",
  "var_type", "args", "var_decleration", "string_decleration",
  "params_decleration", "params", "string", "char", "id", YY_NULLPTR
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

#define YYPACT_NINF -188

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-188)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,   306,    19,  -188,  -188,     7,  -188,  -188,  -188,    15,
    -188,  -188,  -188,  -188,    13,  -188,  -188,  -188,   -24,  -188,
      43,    12,   173,     2,  -188,  -188,  -188,  -188,    13,    14,
     184,   150,  -188,  -188,    64,    66,   173,  -188,   427,    13,
     173,    62,    67,    68,    71,   240,  -188,   188,   254,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,    74,    76,  -188,  -188,
     310,   -13,    13,   119,  -188,  -188,  -188,  -188,    77,    73,
      90,   237,   237,    13,   114,  -188,   266,   271,   310,  -188,
    -188,  -188,  -188,   173,   283,   251,     8,    -7,  -188,   251,
     188,   133,   310,  -188,    -7,  -188,  -188,  -188,  -188,  -188,
     251,   237,   389,    93,    -1,  -188,  -188,    97,   103,   121,
     105,  -188,  -188,   297,   116,  -188,   251,    96,   122,   124,
     118,  -188,  -188,    -7,   180,   123,   194,   310,   251,   201,
     309,    96,   330,   134,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   327,   237,   237,   327,   237,   251,
     237,  -188,  -188,   331,    22,  -188,   145,   346,    -7,    -7,
      -7,    -7,   162,   151,   251,   227,   347,   251,    59,  -188,
    -188,    96,     5,  -188,    96,    96,    96,    96,     5,    96,
    -188,   176,  -188,  -188,  -188,   158,   155,   170,   175,  -188,
    -188,    38,  -188,    38,  -188,   204,  -188,   362,   251,   183,
     363,   212,    13,   327,    13,   190,  -188,   191,  -188,   192,
     374,  -188,   195,  -188,   207,  -188,  -188,   189,  -188,  -188,
    -188,   198,  -188,    13,   327,  -188,  -188,  -188
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     7,     8,     9,    75,
      76,    77,    78,    79,     0,     1,     3,     6,     0,   100,
       0,     0,    87,     0,    80,    81,    82,    83,     0,     0,
      87,     0,     5,    95,    97,     0,    85,    84,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,    23,
      26,    27,    28,    33,    34,    35,     0,     0,    30,    29,
       0,     0,     0,     0,    10,    11,    86,    75,     0,     0,
       0,     0,     0,     0,     0,    74,     0,     0,     0,    14,
      22,    24,    25,     0,     0,     0,     0,     0,    96,     0,
       0,     0,     0,    90,     0,    89,    46,    49,    99,    47,
       0,     0,     0,     0,    64,    48,    50,     0,     0,     0,
       0,    73,    16,     0,     0,    13,     0,    39,    50,     0,
       0,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    88,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    45,
      72,    66,    41,    44,    65,    67,    68,    69,    42,    70,
      43,    31,    62,    63,    37,     0,     0,     0,     0,    58,
      55,    51,    54,    52,    53,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,    40,     0,
       0,    18,     0,    98,    93,    91,    32,     0,    38,    59,
      19,     0,    20,     0,     0,    21,    94,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -188,  -188,  -188,   249,   -25,     0,  -188,  -188,   228,  -188,
     -36,   -47,  -188,  -188,  -188,  -188,  -188,  -188,   -70,  -188,
     -32,   -72,  -188,   -65,   -88,   221,  -188,  -188,   241,    11,
    -187,   -28,   -60,  -188,    72,   -14
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,     7,     8,    32,    65,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
     102,   124,    58,   103,   104,    59,    14,    28,    29,    60,
      68,    30,    33,   214,   105,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      20,    80,    88,   108,   121,    17,    47,   107,    66,    76,
       1,    77,    70,   133,    34,   215,   122,    61,    19,    15,
      85,    18,   130,    19,    84,    69,   120,    91,    21,    80,
      80,    61,    19,    61,    61,   145,   226,    80,    90,    86,
     136,    87,   113,   146,    80,   123,    61,    17,    34,    61,
     143,   157,    31,   117,   126,   114,   129,   125,    78,   109,
     185,   119,    61,    61,    61,    23,    80,    35,   131,   132,
      61,   118,    34,   159,    92,   187,    61,    61,    61,    80,
     182,   183,    80,   161,   153,   186,   191,   192,   193,   194,
      17,   165,   201,   202,   188,    22,   166,   181,    62,    61,
     184,   127,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,    61,    61,    71,    61,    63,   117,    80,    72,
      73,    45,    38,    81,    89,    82,    93,    94,   135,    19,
      61,   136,   197,    61,   217,   200,    39,   141,   128,    95,
      34,   143,   110,    19,    40,    41,   144,    42,    43,    44,
     147,    61,   148,    38,   149,   135,   216,   150,   136,    41,
      19,    42,    43,    44,   141,   152,   210,    39,   143,    45,
      46,   156,   163,   155,   154,    40,    41,   227,    42,    43,
      44,    24,    25,    45,    79,    26,    27,   170,    69,    61,
     109,    38,    24,    25,   189,   195,    26,    27,    19,   164,
      45,    46,   196,   203,    19,    39,   167,   204,   205,    69,
      61,    19,   158,    40,    41,   159,    42,    43,    44,   206,
      41,   160,    42,    43,    44,   161,    98,    41,   207,    42,
      43,    44,   198,    36,   211,   162,   213,    19,    45,   218,
     219,   223,   224,   220,    45,   112,   222,    19,    96,   225,
      19,    45,   115,    41,    16,    42,    43,    44,    97,    98,
      99,    19,    96,    64,    19,    74,    41,   208,    42,    43,
      44,    37,    97,    98,    99,     0,    19,    45,   151,   100,
      41,    19,    42,    43,    44,     0,     0,     0,     0,   101,
      45,    75,    41,    19,    42,    43,    44,    41,     0,    42,
      43,    44,     0,   116,    45,    79,     0,    19,     0,    41,
       9,    42,    43,    44,    10,    11,    45,   111,    12,    13,
      19,    45,   112,    41,     0,    42,    43,    44,     0,     0,
       0,     0,     0,    45,   115,    83,    41,    19,    42,    43,
      44,   158,     0,     0,   159,     0,     0,    45,   151,     0,
     160,     0,     0,    41,   161,    42,    43,    44,     0,     0,
      45,   134,   135,   135,   168,   136,   136,   137,   138,   139,
     140,   141,   141,   142,     0,   143,   143,    45,   158,   135,
       0,   159,   136,   169,   169,     0,     0,   160,   141,     0,
       0,   161,   143,     0,   135,   135,   199,   136,   136,   190,
       0,     0,     0,   141,   141,     0,   135,   143,   143,   136,
       0,   209,   212,     0,     0,   141,     0,     0,     0,   143,
     134,   135,     0,   221,   136,     0,   137,   138,   139,   140,
     141,    67,   142,     0,   143,    10,    11,     0,     0,    12,
      13
};

static const yytype_int16 yycheck[] =
{
      14,    48,    62,    73,    11,     5,    31,    72,    36,    45,
       3,    47,    40,   101,    28,   202,    23,    31,    10,     0,
      33,     6,    94,    10,    60,    39,    86,    63,    52,    76,
      77,    45,    10,    47,    48,    36,   223,    84,    63,    52,
      35,    54,    78,    44,    91,    52,    60,    47,    62,    63,
      45,   123,    50,    85,    90,    83,    92,    89,    47,    73,
     148,    53,    76,    77,    78,    53,   113,    53,   100,   101,
      84,    85,    86,    35,    63,    53,    90,    91,    92,   126,
     145,   146,   129,    45,   116,   150,   158,   159,   160,   161,
      90,   127,    33,    34,   154,    52,   128,   144,    34,   113,
     147,    90,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   126,   127,    52,   129,    50,   149,   165,    52,
      52,    50,     3,    49,     5,    49,    49,    54,    32,    10,
     144,    35,   164,   147,   204,   167,    17,    41,     5,    49,
     154,    45,    28,    10,    25,    26,    53,    28,    29,    30,
      53,   165,    49,     3,    33,    32,   203,    52,    35,    26,
      10,    28,    29,    30,    41,    49,   198,    17,    45,    50,
      51,    53,    49,    49,    52,    25,    26,   224,    28,    29,
      30,     8,     9,    50,    51,    12,    13,    53,   202,   203,
     204,     3,     8,     9,    49,    33,    12,    13,    10,     5,
      50,    51,    51,    27,    10,    17,     5,    49,    53,   223,
     224,    10,    32,    25,    26,    35,    28,    29,    30,    49,
      26,    41,    28,    29,    30,    45,    22,    26,    53,    28,
      29,    30,     5,    49,    51,    55,    24,    10,    50,    49,
      49,    34,    53,    51,    50,    51,    51,    10,    11,    51,
      10,    50,    51,    26,     5,    28,    29,    30,    21,    22,
      23,    10,    11,    35,    10,    44,    26,   195,    28,    29,
      30,    30,    21,    22,    23,    -1,    10,    50,    51,    42,
      26,    10,    28,    29,    30,    -1,    -1,    -1,    -1,    52,
      50,    51,    26,    10,    28,    29,    30,    26,    -1,    28,
      29,    30,    -1,    52,    50,    51,    -1,    10,    -1,    26,
       4,    28,    29,    30,     8,     9,    50,    51,    12,    13,
      10,    50,    51,    26,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    50,    51,    25,    26,    10,    28,    29,
      30,    32,    -1,    -1,    35,    -1,    -1,    50,    51,    -1,
      41,    -1,    -1,    26,    45,    28,    29,    30,    -1,    -1,
      50,    31,    32,    32,    55,    35,    35,    37,    38,    39,
      40,    41,    41,    43,    -1,    45,    45,    50,    32,    32,
      -1,    35,    35,    53,    53,    -1,    -1,    41,    41,    -1,
      -1,    45,    45,    -1,    32,    32,    49,    35,    35,    53,
      -1,    -1,    -1,    41,    41,    -1,    32,    45,    45,    35,
      -1,    49,    49,    -1,    -1,    41,    -1,    -1,    -1,    45,
      31,    32,    -1,    49,    35,    -1,    37,    38,    39,    40,
      41,     4,    43,    -1,    45,     8,     9,    -1,    -1,    12,
      13
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    62,    63,    64,    65,    66,    67,    68,     4,
       8,     9,    12,    13,    87,     0,    64,    66,     6,    10,
      96,    52,    52,    53,     8,     9,    12,    13,    88,    89,
      92,    50,    69,    93,    96,    53,    49,    89,     3,    17,
      25,    26,    28,    29,    30,    50,    51,    65,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    83,    86,
      90,    96,    34,    50,    69,    70,    92,     4,    91,    96,
      92,    52,    52,    52,    86,    51,    71,    71,    90,    51,
      72,    49,    49,    25,    71,    33,    52,    54,    93,     5,
      65,    71,    90,    49,    54,    49,    11,    21,    22,    23,
      42,    52,    81,    84,    85,    95,    96,    84,    79,    96,
      28,    51,    51,    71,    92,    51,    52,    81,    96,    53,
      93,    11,    23,    52,    82,    81,    71,    90,     5,    71,
      82,    81,    81,    85,    31,    32,    35,    37,    38,    39,
      40,    41,    43,    45,    53,    36,    44,    53,    49,    33,
      52,    51,    49,    81,    52,    49,    53,    82,    32,    35,
      41,    45,    55,    49,     5,    71,    81,     5,    55,    53,
      53,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    72,    84,    84,    72,    85,    84,    53,    93,    49,
      53,    82,    82,    82,    82,    33,    51,    81,     5,    49,
      81,    33,    34,    27,    49,    53,    49,    53,    95,    49,
      81,    51,    49,    24,    94,    91,    72,    79,    49,    49,
      51,    49,    51,    34,    53,    51,    91,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    65,    65,    66,    66,
      67,    68,    69,    69,    69,    69,    69,    70,    70,    70,
      70,    70,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    73,    74,    75,    75,    75,    76,    77,    78,    79,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      83,    83,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      88,    88,    88,    88,    89,    89,    89,    89,    90,    90,
      90,    91,    91,    91,    91,    92,    93,    93,    94,    95,
      96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     6,     2,     1,     1,     1,
       7,     7,     2,     4,     3,     5,     4,     5,     6,     7,
       7,     8,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     5,     7,     1,     1,     1,     9,     5,     7,     3,
       6,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     1,     1,     5,     7,
       4,     6,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     0,     4,     3,
       3,     6,     4,     6,     8,     2,     3,     1,     1,     1,
       1
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
#line 29 "src/file.y" /* yacc.c:1646  */
    {printtree((yyvsp[0]), 0);}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 33 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addlist((yyval), (yyvsp[-1])); addNode(&(yyval), (yyvsp[0]));}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 34 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addNode(&(yyval), (yyvsp[0]));}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 38 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("MAIN"); addNode(&(yyval), (yyvsp[0]));}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 42 "src/file.y" /* yacc.c:1646  */
    {(yyval) = combine("sean", (yyvsp[-1]), (yyvsp[0]));}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 52 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, (yyvsp[-5])); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, (yyvsp[-5])); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); }
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v); addlist((yyval), (yyvsp[-1]));}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 62 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval),(yyvsp[-1]));}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 63 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-3])); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v);addlist((yyval),(yyvsp[-1]));}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 64 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-2])); addlist((yyval),(yyvsp[-1]));}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 68 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 69 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 70 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-5])); addlist((yyval),(yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 71 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY");node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 72 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-6]));  node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 76 "src/file.y" /* yacc.c:1646  */
    {(yyval) = combine("", (yyvsp[-1]), (yyvsp[0]));}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 91 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF"); addNode(&s, (yyvsp[-2])); addlist(s,(yyvsp[0]));addNode(&(yyval),s);}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 95 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF-ELSE"); addNode(&s, (yyvsp[-4])); addlist(s,(yyvsp[-2])); addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 105 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("FOR"); addlist(s, (yyvsp[-6])); addNode(&s, (yyvsp[-4])); addlist(s, (yyvsp[-2])); addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 108 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("WHILE"); addNode(&s, (yyvsp[-2])); addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 112 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("DO-WHILE"); addNode(&s, (yyvsp[-5])); addNode(&s, (yyvsp[-2])); addNode(&(yyval),s);}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 115 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 119 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("="); addNode(&(yyval), (yyvsp[-5])); addNode(&(yyval),(yyvsp[-3])); addNode(&(yyval), (yyvsp[0]));}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 123 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("+"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 124 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("-"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 125 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("*"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 126 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("/"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 127 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 128 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 129 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 131 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 136 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("+"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 137 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("-"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 138 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("*"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("/"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 140 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 141 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 142 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 146 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL"); addNode(&s,(yyvsp[-4])); node* args = mknode("ARGS"); mknodelist(args, (yyvsp[-2])); addNode(&s, args); addNode(&(yyval),s);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 147 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); addNode(&s,(yyvsp[-6])); node* call = mknode("FUNC_CALL"); node* args = mknode("ARGS"); mknodelist(args, (yyvsp[-2])); addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 148 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL"); addNode(&s,(yyvsp[-3])); node* args = mknode("ARGS NONE"); addNode(&s, args); addNode(&(yyval),s);}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 149 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); addNode(&s,(yyvsp[-5])); node* call = mknode("FUNC_CALL"); node* args = mknode("ARGS NONE"); addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 153 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0])); }
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 154 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("||"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0])); }
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 159 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("=="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 160 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 161 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 162 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 163 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 164 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("!="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 165 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("NOT"); addNode(&(yyval),(yyvsp[0]));}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 166 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 170 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); addlist(s,(yyvsp[-1])); addNode(&(yyval),s);}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 171 "src/file.y" /* yacc.c:1646  */
    {(yyval) =  mknode("BLOCK");}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 175 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE VOID");}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 176 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE INT");}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 177 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE REAL");}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 178 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE CHAR");}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 179 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE BOOL");}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 183 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT"); }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 184 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL"); }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 185 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR"); }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 186 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BOOL");}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 190 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[-1]));}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 191 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[-1]));}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 192 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[-2])); addlist((yyval), (yyvsp[0]));}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 193 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS NONE");}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 197 "src/file.y" /* yacc.c:1646  */
    {(yyval) = combine("fd",(yyvsp[-3]),(yyvsp[-1]));}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 198 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 199 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING"); addNode(&(yyval), (yyvsp[-1]));}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 203 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-5]); addNode(&(yyval),(yyvsp[-3])); addNode(&(yyval),(yyvsp[0]));}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 204 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-3]); addNode(&(yyval),(yyvsp[-1]));}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 205 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("="); addNode(&(yyval),(yyvsp[-5])); addNode(&(yyvsp[-5]),(yyvsp[-3])); addNode(&(yyval), (yyvsp[0]));}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 206 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("="); addNode(&(yyval),(yyvsp[-7])); addNode(&(yyvsp[-7]),(yyvsp[-5])); addNode(&(yyval), (yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 210 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = (yyvsp[-1]); mknodelist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 214 "src/file.y" /* yacc.c:1646  */
    {addNode(&(yyvsp[-2]),(yyvsp[0]));}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 223 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 227 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 231 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2012 "y.tab.c" /* yacc.c:1646  */
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
#line 234 "src/file.y" /* yacc.c:1906  */


int main(){
    return yyparse();
}

int yyerror(char* s){
    printf("%s: found line:%d token [%s]\n", s, linecount, yytext);
    return 0;
}
