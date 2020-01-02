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
    MULL = 316
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
#define MULL 316

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

#line 249 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  295

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

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
      55,    56,    57,    58,    59,    60,    61
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
     151,   152,   153,   154,   155,   156,   160,   161,   162,   163,
     167,   168,   172,   173,   177,   178,   179,   180,   181,   182,
     183,   184,   188,   189,   190,   191,   192,   193,   194,   198,
     199,   200,   201,   202,   203,   204,   208,   209,   210,   214,
     215,   216,   217,   221,   225,   229,   230,   231,   232,   236,
     240,   244,   245,   246,   247,   248,   249,   253,   254,   258,
     261,   265,   269,   273,   277,   281,   285,   289,   293,   297
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
  "MULL", "$accept", "s", "code", "Main", "functions", "function",
  "void_func", "value_func", "void_block", "value_block", "statments",
  "statment", "if_statment", "if_else_statment", "loop_statment", "for",
  "while", "do_while", "stat_assignment", "string_assignment",
  "expression", "func_call", "func_params", "func", "block", "func_type",
  "var_type", "args", "declerations", "var_decleration",
  "string_decleration", "string_params", "args_decleration",
  "params_decleration", "variables", "params", "string_id", "csnull",
  "string", "char", "int", "real", "hex", "true", "false", "id", "ptr", YY_NULLPTR
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
     315,   316
};
# endif

#define YYPACT_NINF -257

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-257)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,  1162,    26,  -257,  -257,    16,  -257,  -257,  -257,    15,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,    14,  -257,  -257,
    -257,   -23,  -257,    -7,    17,    12,  1183,  1183,    24,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,    14,    27,    30,    40,
     169,  -257,  -257,    32,    24,  1183,    45,  1174,   693,    14,
    1183,    47,    49,    55,    53,   708,   270,  -257,   352,    13,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,    59,    62,    65,
    -257,   431,  -257,  -257,   -16,    43,    14,  -257,  -257,   382,
    -257,    14,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
     708,    14,   708,  -257,   708,   865,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,    63,  -257,    67,    64,    14,
      70,   708,   708,     7,    93,  -257,   693,  -257,   313,   440,
    -257,   466,   522,  -257,  -257,  -257,  -257,  -257,  -257,   474,
    -257,  -257,   708,   583,   708,   708,  -257,   693,   413,   117,
     531,  1120,  -257,    63,  1060,   789,   708,   708,   708,   708,
     708,   708,   708,   708,   708,   708,   708,   708,  -257,   708,
    -257,   708,  -257,   -19,  -257,   808,   827,    75,    92,    76,
     880,   693,  -257,   693,  -257,   484,  -257,   492,  -257,  1120,
       1,  -257,  1075,   598,  -257,   726,  1120,   895,   693,   216,
     522,   693,   693,   259,  -257,  -257,    51,   -32,  -257,   198,
      51,    51,    51,    51,   -32,    51,   198,  -257,   747,   768,
     708,    14,   540,   540,   708,   708,   708,    82,   910,   925,
     693,  -257,  -257,   638,  -257,  -257,  -257,    94,    84,   940,
     693,   549,   955,   970,   693,  -257,    23,  1090,   102,    -8,
    -257,   115,  -257,   985,   846,  -257,    98,    99,  1000,  -257,
     653,   708,  -257,   104,  1015,   693,   109,   110,  1030,   708,
      14,    14,    14,    14,   540,     7,    95,  -257,  -257,   112,
    -257,  1120,  -257,   113,  1045,  -257,  -257,   119,  1105,  -257,
    -257,  -257,   121,  -257,   118,  -257,  -257,  -257,   124,  -257,
      14,   540,  -257,  -257,  -257
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     7,     8,     9,     0,
      92,    93,    94,    95,    96,    97,    98,     0,     1,     3,
       6,     0,   138,     0,     0,     0,   108,   108,     0,    99,
     100,   101,   102,   103,   104,   105,     0,     0,   106,     0,
       0,     5,   119,   128,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
      27,    30,    31,    32,    39,    40,    41,     0,     0,     0,
      33,     0,   110,   112,     0,     0,     0,    10,   107,     0,
      11,     0,   133,   136,   137,   130,   134,   132,   135,   131,
       0,     0,     0,    36,     0,     0,    68,    71,    74,    73,
      65,    67,    66,    69,    70,    72,    75,     0,     0,     0,
       0,     0,     0,     0,     0,   139,     0,    84,     0,     0,
      17,     0,     0,    14,    26,    28,    29,    34,    18,     0,
     109,   111,     0,     0,     0,     0,   127,     0,     0,     0,
       0,    60,    64,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
     114,     0,   120,   121,   113,     0,     0,     0,     0,     0,
       0,     0,    85,     0,    86,     0,    16,     0,    13,    45,
      72,    78,    83,     0,    81,     0,    46,     0,     0,     0,
       0,     0,     0,     0,    62,    61,    53,    48,    51,    58,
      52,    54,    55,    56,    49,    57,    59,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,     0,
       0,    87,    15,     0,    82,    76,    80,     0,    35,     0,
       0,     0,     0,     0,     0,   129,   115,   123,   125,    72,
     122,    37,    43,     0,     0,    88,    35,    35,     0,    79,
       0,     0,    19,    35,     0,     0,    35,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    35,
      77,    47,    24,    35,     0,    20,    25,    35,   117,   116,
     124,   126,     0,    38,     0,    44,    91,    21,    35,    22,
       0,     0,    23,   118,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -257,  -257,  -257,   171,   -28,    -4,  -257,  -257,   133,  -257,
     -51,   -24,  -257,  -257,  -257,  -257,  -257,  -257,  -111,  -257,
     179,   -31,   -41,  -177,   129,  -257,   136,     3,   -47,   -38,
     -34,  -256,  -257,  -257,  -201,   111,   100,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,    -9,    19
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,     7,     8,    41,    80,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     182,    69,   183,   184,    70,    17,    36,    37,    71,    72,
      73,   107,    38,   110,   162,    42,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      23,    20,   167,   148,   279,   118,   226,   121,    24,   119,
     240,   122,    58,   157,   210,   211,    22,   132,    48,     1,
     129,    21,    22,    22,    22,   263,    18,    43,   139,    25,
      39,    74,   140,   130,   293,   124,   133,   131,   134,    51,
     108,    52,    53,    54,   133,    26,   159,    74,    78,    74,
      74,   138,    55,   223,    20,   159,   259,   260,    55,    75,
     280,   281,    74,    56,   123,    28,    76,    43,   175,    27,
      74,   177,    23,   226,    40,    75,   135,    75,    75,    45,
      44,   130,   143,   147,   130,   131,   148,   189,   131,   193,
      75,   190,   154,    46,   124,    79,   157,   124,    75,   111,
     163,   112,   130,    56,   168,   124,   131,   113,   125,    74,
      74,   126,    74,    74,   127,   124,   160,   159,   161,   164,
      74,   169,   191,   180,   214,   215,    22,   251,   216,    74,
      74,    74,    75,   245,    20,   252,   262,    75,    75,   231,
      75,    75,   264,    51,   285,    52,    53,    54,    75,   267,
     268,   124,   130,   124,   284,   272,   131,    75,    75,    75,
     275,   276,    55,   286,   287,   124,    74,    56,    74,   124,
     289,   291,    47,   223,    48,   292,    19,    77,    22,   238,
      74,    74,   250,   114,    74,    49,   109,   136,   241,   242,
       0,   142,     0,    50,    75,    51,    75,    52,    53,    54,
       0,   239,   163,    74,    74,     0,     0,   124,    75,    75,
       0,     0,    75,     0,    55,     0,     0,     0,     0,    56,
      57,   230,    74,     0,     0,    22,     0,    95,     0,   146,
     147,    75,    75,   148,   115,   150,   151,   152,   153,   154,
     283,   155,    51,   157,    52,    53,    54,     0,     0,     0,
      75,   108,   163,   163,   282,    74,   168,     0,     0,     0,
       0,    55,     0,     0,   234,     0,    56,   294,    22,   141,
       0,   144,     0,   145,     0,   116,     0,     0,     0,    22,
       0,   108,    74,    75,    75,    51,    49,    52,    53,    54,
     165,   166,     0,     0,    50,   170,    51,     0,    52,    53,
      54,     0,     0,     0,    55,     0,     0,     0,     0,    56,
      75,   179,     0,   185,   186,    55,   187,     0,   171,     0,
      56,   117,    22,     0,     0,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,    51,
     209,    52,    53,    54,     0,     0,     0,     0,     0,     0,
     218,     0,   219,     0,     0,    47,     0,    48,    55,     0,
       0,    22,     0,    56,   172,     0,     0,   229,    49,     0,
     232,   233,     0,     0,     0,     0,    50,     0,    51,     0,
      52,    53,    54,     0,     0,    47,     0,   137,     0,   237,
       0,    22,     0,   243,   179,   244,     0,    55,    49,   248,
       0,     0,    56,   120,     0,     0,    50,     0,    51,   254,
      52,    53,    54,   258,     0,     0,    47,     0,   188,     0,
       0,     0,    22,     0,     0,     0,     0,    55,     0,    49,
     271,     0,    56,     0,   274,     0,    48,    50,   278,    51,
      22,    52,    53,    54,     0,   173,     0,    49,     0,    22,
       0,     0,     0,     0,     0,    50,    49,    51,    55,    52,
      53,    54,     0,    56,    50,     0,    51,     0,    52,    53,
      54,    48,     0,     0,     0,    22,    55,     0,     0,    48,
       0,    56,   128,    22,     0,    55,     0,     0,     0,   220,
      56,   174,    51,    22,    52,    53,    54,    48,     0,     0,
      51,    22,    52,    53,    54,     0,     0,     0,     0,     0,
      51,    55,    52,    53,    54,     0,    56,   176,    51,    55,
      52,    53,    54,     0,    56,   178,     0,    48,     0,    55,
       0,    22,     0,     0,    56,   221,   192,    55,    49,     0,
      22,     0,    56,   222,     0,    48,    50,    49,    51,    22,
      52,    53,    54,     0,   255,    50,     0,    51,    22,    52,
      53,    54,     0,     0,     0,     0,    51,    55,    52,    53,
      54,     0,    56,     0,     0,    51,    55,    52,    53,    54,
       0,    56,     0,     0,     0,    55,     0,     0,     0,     0,
      56,     0,    22,    82,    55,     0,     0,     0,     0,    56,
      83,    84,    85,    86,    87,    88,    89,    22,    82,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,    87,
      88,    89,     0,     0,     0,    90,     0,     0,    55,    91,
       0,    92,     0,     0,     0,    94,   181,     0,     0,     0,
      90,     0,     0,    55,    91,     0,    92,    22,    82,     0,
      94,   225,     0,     0,     0,    83,    84,    85,    86,    87,
      88,    89,    22,    82,     0,     0,     0,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    89,     0,     0,     0,
      90,     0,     0,    55,    91,     0,    92,     0,     0,     0,
      94,   249,     0,     0,     0,    90,     0,     0,    55,    91,
       0,    92,    22,    82,     0,    94,   270,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    89,    22,    82,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,    87,
      88,    89,     0,     0,     0,    90,     0,     0,    55,    91,
       0,    92,    93,     0,     0,    94,     0,     0,     0,     0,
      90,     0,     0,    55,    91,     0,    92,   146,   147,     0,
      94,   148,   149,   150,   151,   152,   153,   154,     0,   155,
     156,   157,     0,     0,     0,     0,     0,     0,   146,   147,
       0,   227,   148,   149,   150,   151,   152,   153,   154,     0,
     155,   156,   157,     0,     0,     0,     0,     0,     0,   146,
     147,     0,   235,   148,   149,   150,   151,   152,   153,   154,
       0,   155,   156,   157,     0,     0,     0,     0,     0,     0,
     146,   147,     0,   236,   148,   149,   150,   151,   152,   153,
     154,     0,   155,   156,   157,     0,     0,     0,     0,   146,
     147,     0,   195,   148,   149,   150,   151,   152,   153,   154,
       0,   155,   156,   157,     0,     0,     0,     0,   146,   147,
       0,   212,   148,   149,   150,   151,   152,   153,   154,     0,
     155,   156,   157,     0,     0,     0,     0,   146,   147,     0,
     213,   148,   149,   150,   151,   152,   153,   154,     0,   155,
     156,   157,     0,     0,     0,     0,   146,   147,     0,   266,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   146,   147,     0,   158,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,   146,   147,     0,   217,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   146,   147,     0,   228,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,   146,   147,     0,   246,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   146,   147,     0,   247,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,   146,   147,     0,   253,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   146,   147,     0,   256,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,   146,   147,     0,   257,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   146,   147,     0,   265,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,   146,   147,     0,   269,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   146,   147,     0,   273,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,   146,   147,     0,   277,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   146,   147,     0,   288,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,   146,   147,   194,   224,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   146,   147,     0,   261,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,   146,   147,     0,   290,
     148,   149,   150,   151,   152,   153,   154,     0,   155,   156,
     157,   146,   147,     0,     0,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,     9,     0,     0,    10,
      11,     0,     0,    12,    13,    14,    15,    16,    81,     0,
       0,    10,    11,     0,     0,    12,    13,    14,    15,    16,
      29,    30,     0,     0,    31,    32,    33,    34,    35
};

static const yytype_int16 yycheck[] =
{
       9,     5,   113,    35,   260,    56,   183,    58,    17,    56,
     211,    58,    40,    45,    33,    34,     9,    33,     5,     3,
      71,     6,     9,     9,     9,    33,     0,    36,    79,    52,
      27,    40,    79,    71,   290,    59,    52,    71,    54,    26,
      49,    28,    29,    30,    52,    52,    54,    56,    45,    58,
      59,    79,    45,    52,    58,    54,    33,    34,    45,    40,
     261,   262,    71,    50,    51,    53,    34,    76,   119,    52,
      79,   122,    81,   250,    50,    56,    33,    58,    59,    49,
      53,   119,    91,    32,   122,   119,    35,   138,   122,   140,
      71,   138,    41,    53,   118,    50,    45,   121,    79,    52,
     109,    52,   140,    50,   113,   129,   140,    52,    49,   118,
     119,    49,   121,   122,    49,   139,    49,    54,    54,    49,
     129,    28,     5,   132,    49,    33,     9,    33,    52,   138,
     139,   140,   113,    51,   138,    51,    34,   118,   119,   190,
     121,   122,    27,    26,    49,    28,    29,    30,   129,    51,
      51,   175,   190,   177,   265,    51,   190,   138,   139,   140,
      51,    51,    45,    51,    51,   189,   175,    50,   177,   193,
      51,    53,     3,    52,     5,    51,     5,    44,     9,   210,
     189,   190,   223,    54,   193,    16,    50,    76,   212,   213,
      -1,    91,    -1,    24,   175,    26,   177,    28,    29,    30,
      -1,   210,   211,   212,   213,    -1,    -1,   231,   189,   190,
      -1,    -1,   193,    -1,    45,    -1,    -1,    -1,    -1,    50,
      51,     5,   231,    -1,    -1,     9,    -1,    48,    -1,    31,
      32,   212,   213,    35,    55,    37,    38,    39,    40,    41,
     264,    43,    26,    45,    28,    29,    30,    -1,    -1,    -1,
     231,   260,   261,   262,   263,   264,   265,    -1,    -1,    -1,
      -1,    45,    -1,    -1,     5,    -1,    50,   291,     9,    90,
      -1,    92,    -1,    94,    -1,     5,    -1,    -1,    -1,     9,
      -1,   290,   291,   264,   265,    26,    16,    28,    29,    30,
     111,   112,    -1,    -1,    24,   116,    26,    -1,    28,    29,
      30,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
     291,   132,    -1,   134,   135,    45,   137,    -1,     5,    -1,
      50,    51,     9,    -1,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,    26,
     161,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,    -1,     3,    -1,     5,    45,    -1,
      -1,     9,    -1,    50,    51,    -1,    -1,   188,    16,    -1,
     191,   192,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      28,    29,    30,    -1,    -1,     3,    -1,     5,    -1,   210,
      -1,     9,    -1,   214,   215,   216,    -1,    45,    16,   220,
      -1,    -1,    50,    51,    -1,    -1,    24,    -1,    26,   230,
      28,    29,    30,   234,    -1,    -1,     3,    -1,     5,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    45,    -1,    16,
     251,    -1,    50,    -1,   255,    -1,     5,    24,   259,    26,
       9,    28,    29,    30,    -1,     5,    -1,    16,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    24,    16,    26,    45,    28,
      29,    30,    -1,    50,    24,    -1,    26,    -1,    28,    29,
      30,     5,    -1,    -1,    -1,     9,    45,    -1,    -1,     5,
      -1,    50,    51,     9,    -1,    45,    -1,    -1,    -1,     5,
      50,    51,    26,     9,    28,    29,    30,     5,    -1,    -1,
      26,     9,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      26,    45,    28,    29,    30,    -1,    50,    51,    26,    45,
      28,    29,    30,    -1,    50,    51,    -1,     5,    -1,    45,
      -1,     9,    -1,    -1,    50,    51,     5,    45,    16,    -1,
       9,    -1,    50,    51,    -1,     5,    24,    16,    26,     9,
      28,    29,    30,    -1,     5,    24,    -1,    26,     9,    28,
      29,    30,    -1,    -1,    -1,    -1,    26,    45,    28,    29,
      30,    -1,    50,    -1,    -1,    26,    45,    28,    29,    30,
      -1,    50,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      50,    -1,     9,    10,    45,    -1,    -1,    -1,    -1,    50,
      17,    18,    19,    20,    21,    22,    23,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    42,    -1,    -1,    45,    46,
      -1,    48,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,
      42,    -1,    -1,    45,    46,    -1,    48,     9,    10,    -1,
      52,    53,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      42,    -1,    -1,    45,    46,    -1,    48,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    42,    -1,    -1,    45,    46,
      -1,    48,     9,    10,    -1,    52,    53,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    42,    -1,    -1,    45,    46,
      -1,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    45,    46,    -1,    48,    31,    32,    -1,
      52,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    55,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    55,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    55,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,    31,
      32,    -1,    53,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    -1,    -1,    -1,    -1,    31,    32,
      -1,    53,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    -1,    -1,    -1,    -1,    31,    32,    -1,
      53,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    -1,    -1,    -1,    -1,    31,    32,    -1,    53,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    31,    32,    -1,    49,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    31,    32,    -1,    49,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    31,    32,    -1,    49,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    31,    32,    -1,    49,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    31,    32,    -1,    49,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    31,    32,    -1,    49,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    31,    32,    -1,    49,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    31,    32,    -1,    49,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    31,    32,    -1,    49,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    31,    32,    -1,    49,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    31,    32,    -1,    49,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    31,    32,    -1,    49,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    31,    32,    -1,    49,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    31,    32,    48,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,     4,    -1,    -1,     7,
       8,    -1,    -1,    11,    12,    13,    14,    15,     4,    -1,
      -1,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    63,    64,    65,    66,    67,    68,    69,     4,
       7,     8,    11,    12,    13,    14,    15,    87,     0,    65,
      67,     6,     9,   107,   107,    52,    52,    52,    53,     7,
       8,    11,    12,    13,    14,    15,    88,    89,    94,    89,
      50,    70,    97,   107,    53,    49,    53,     3,     5,    16,
      24,    26,    28,    29,    30,    45,    50,    51,    66,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    83,
      86,    90,    91,    92,   107,   108,    34,    70,    89,    50,
      71,     4,    10,    17,    18,    19,    20,    21,    22,    23,
      42,    46,    48,    49,    52,    82,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    93,   107,    88,
      95,    52,    52,    52,    86,    82,     5,    51,    72,    90,
      51,    72,    90,    51,    73,    49,    49,    49,    51,    72,
      91,    92,    33,    52,    54,    33,    97,     5,    66,    72,
      90,    82,    98,   107,    82,    82,    31,    32,    35,    36,
      37,    38,    39,    40,    41,    43,    44,    45,    49,    54,
      49,    54,    96,   107,    49,    82,    82,    80,   107,    28,
      82,     5,    51,     5,    51,    72,    51,    72,    51,    82,
     107,    53,    82,    84,    85,    82,    82,    82,     5,    72,
      90,     5,     5,    72,    48,    53,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      33,    34,    53,    53,    49,    33,    52,    49,    82,    82,
       5,    51,    51,    52,    34,    53,    85,    55,    49,    82,
       5,    72,    82,    82,     5,    55,    55,    82,    83,   107,
      96,    73,    73,    82,    82,    51,    49,    49,    82,    53,
      84,    33,    51,    49,    82,     5,    49,    49,    82,    33,
      34,    34,    34,    33,    27,    49,    53,    51,    51,    49,
      53,    82,    51,    49,    82,    51,    51,    49,    82,    93,
      96,    96,   107,    73,    80,    49,    51,    51,    49,    51,
      34,    53,    51,    93,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    66,    66,    67,    67,
      68,    69,    70,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    75,    76,
      76,    76,    77,    78,    79,    80,    80,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      84,    84,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    86,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    89,    90,
      90,    90,    90,    91,    92,    93,    93,    93,    93,    94,
      95,    96,    96,    96,    96,    96,    96,    97,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108
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
       1,     1,     1,     1,     1,     1,     4,     6,     3,     5,
       2,     1,     2,     1,     2,     3,     3,     4,     5,     6,
       6,     7,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     2,
       1,     2,     1,     3,     3,     4,     6,     6,     8,     2,
       2,     1,     3,     3,     5,     3,     5,     3,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2
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
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addlist((yyval), (yyvsp[-1])); addNode(&(yyval), (yyvsp[0]));}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addNode(&(yyval), (yyvsp[0]));}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 37 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("MAIN"); addNode(&(yyval), (yyvsp[0]));}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 41 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 51 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); s->line = (yyvsp[-4])->line; node* v = mknode("VOID"); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, v); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); s->line = (yyvsp[-4])->line; addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, (yyvsp[-5])); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 59 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); }
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v); addlist((yyval), (yyvsp[-1]));}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval),(yyvsp[-1]));}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 62 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-3])); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v);addlist((yyval),(yyvsp[-1]));}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 63 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-2])); addlist((yyval),(yyvsp[-1]));}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 64 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-1]));}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 65 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-1]));addNode(&(yyval),v);}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 69 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 70 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 71 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-5])); addlist((yyval),(yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 72 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY");node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 73 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-6]));  node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 74 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 75 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-4]));addNode(&(yyval),v); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 79 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 91 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("RET"); addNode(&s, (yyvsp[-1])); addNode(&(yyval), s);}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 92 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("RET"); addNode(&(yyval), s);}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 96 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF"); s->line = (yyvsp[-2])->line; addNode(&s, (yyvsp[-2]));  addlist(s,(yyvsp[0])); s->nodes[1]->father = "IF"; addNode(&(yyval),s);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 100 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF-ELSE"); s->line = (yyvsp[-4])->line; addNode(&s, (yyvsp[-4])); addlist(s,(yyvsp[-2])); s->nodes[1]->father = "IF"; addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 110 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("FOR"); s->line = (yyvsp[-6])->line; addlist(s, (yyvsp[-6])); addNode(&s, (yyvsp[-4])); addlist(s, (yyvsp[-2])); addlist(s, (yyvsp[0])); s->nodes[3]->father = "FOR"; addNode(&(yyval),s);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 113 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("WHILE"); s->line = (yyvsp[-2])->line; addNode(&s, (yyvsp[-2])); addlist(s, (yyvsp[0])); s->nodes[1]->father = "WHILE"; addNode(&(yyval),s);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 117 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("DO-WHILE"); s->line = (yyvsp[-2])->line; addlist(s, (yyvsp[-5])); s->nodes[0]->father = "DO-WHILE"; addNode(&s, (yyvsp[-2])); addNode(&(yyval),s);}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 120 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); s->line = linecount; addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); s->line = linecount; addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 125 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); node* index = mknode("INDEX"); addNode(&index,(yyvsp[-3])); addNode(&(yyvsp[-5]), index); addNode(&s, (yyvsp[-5])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 129 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("+"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 130 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("-"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 131 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("*"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 132 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("/"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 133 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("=="); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 134 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 135 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">="); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 136 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 137 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<="); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 138 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("!="); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 139 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0]));}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 140 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("||"); (yyval)->line = (yyvsp[-2])->line; addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0]));}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 141 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("NOT"); (yyval)->line = (yyvsp[0])->line; addNode(&(yyval),(yyvsp[0]));}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 142 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]); (yyval)->line = (yyvsp[-1])->line;}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 143 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("LEN OF"); addNode(&(yyval),(yyvsp[-1]));}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 144 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&"); addNode(&(yyval), (yyvsp[0]));}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 145 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&"); addNode(&(yyval), (yyvsp[0]));}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 160 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL");  addNode(&s,(yyvsp[-3])); node* args = mknode("ARGS"); args->line = (yyvsp[-3])->line; addlist(args, (yyvsp[-1])); addNode(&s, args); addNode(&(yyval),s);}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 161 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); s->line = (yyvsp[-3])->line; addNode(&s,(yyvsp[-5])); node* call = mknode("FUNC_CALL"); addNode(&call,(yyvsp[-3])); node* args = mknode("ARGS"); args->line = (yyvsp[-5])->line; addlist(args, (yyvsp[-1])); addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 162 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL"); addNode(&s,(yyvsp[-2])); node* args = mknode("ARGS NONE"); args->line = (yyvsp[-2])->line; addNode(&s, args); addNode(&(yyval),s);}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 163 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); s->line = (yyvsp[-2])->line; addNode(&s,(yyvsp[-4])); node* call = mknode("FUNC_CALL"); addNode(&call,(yyvsp[-2])); node* args = mknode("ARGS NONE"); args->line = (yyvsp[-4])->line; addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 167 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 172 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[-1]));}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 173 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[0]));}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 177 "src/file.y" /* yacc.c:1646  */
    {(yyval) =  mknode("BLOCK");}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 178 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); addlist(s,(yyvsp[-1])); addNode(&(yyval),s);}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 179 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-1])); addNode(&s,v); addNode(&(yyval),s);}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 180 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-2])); addNode(&s,v); addlist(s, (yyvsp[-1])); addNode(&(yyval),s);}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 181 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BLOCK"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 182 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); addlist(s,(yyvsp[-4]));node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 183 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-4])); addNode(&s,v); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 184 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-5])); addNode(&s,v); addlist(s, (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 188 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT");}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 189 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL");}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 190 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR");}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 191 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BOOL");}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 192 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT*");}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 193 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR*");}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 194 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL*");}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 198 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT");}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 199 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL");}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 200 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR");}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 201 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BOOL");}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 202 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT*");}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 203 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR*");}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 204 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL*");}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 208 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[0]));}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 209 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[-2])); addlist((yyval), (yyvsp[0]));}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 210 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS NONE");}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 214 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("fd",(yyvsp[-1]),(yyvsp[0]));}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 216 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("fd",(yyvsp[-1]),(yyvsp[0]));}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 221 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 225 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("STRING"); addlist(s,(yyvsp[-1])); addNode(&(yyval),s);}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 229 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-1])); addNode(&(yyvsp[-3]),len); addNode(&(yyval),(yyvsp[-3]));}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 230 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-3])); addNode(&(yyvsp[-5]),len); addNode(&(yyval),(yyvsp[-5])); addlist((yyval),(yyvsp[0]));}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 231 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-3])); addNode(&(yyvsp[-5]),len); addNode(&ass,(yyvsp[-5])); addNode(&ass,(yyvsp[0]));addNode(&(yyval),ass);}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 232 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-5])); addNode(&(yyvsp[-7]),len); addNode(&ass,(yyvsp[-7])); addNode(&ass,(yyvsp[-2]));addNode(&(yyval),ass); addlist((yyval),(yyvsp[0]));}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 236 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = (yyvsp[-1]); mknodelist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 240 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = (yyvsp[-1]); addlist(s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 245 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[-2])); addlist((yyval),(yyvsp[0]));}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 246 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 247 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&(yyval),s); addlist((yyval),(yyvsp[0]));}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 248 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-2])); addlist(s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 249 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-4])); addlist(s,(yyvsp[-2])); addNode(&(yyval),s); addlist((yyval),(yyvsp[0]));}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 253 "src/file.y" /* yacc.c:1646  */
    {addNode(&(yyvsp[-2]),(yyvsp[0]));}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 258 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-3]); node* index = mknode("INDEX"); addNode(&index,(yyvsp[-1])); addNode(&(yyval), index);}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 261 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (yytext); (yyval)->val_type = "NULL"; (yyval)->line = linecount;}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 265 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "STRING"; (yyval)->line = linecount;}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 269 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "CHAR"; (yyval)->line = linecount;}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 273 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "INT"; (yyval)->line = linecount;}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 277 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "REAL"; (yyval)->line = linecount;}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 281 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "HEX"; (yyval)->line = linecount;}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 285 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "BOOL"; (yyval)->line = linecount;}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 289 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "BOOL"; (yyval)->line = linecount;}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 293 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "ID"; (yyval)->line = linecount;}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 297 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("PTR"); node* m = mknode("*"); addNode(&m, (yyvsp[0])); addNode(&(yyval),m);}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2360 "y.tab.c" /* yacc.c:1646  */
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
#line 299 "src/file.y" /* yacc.c:1906  */


int main(){
    return yyparse();
}

int yyerror(char* s){
    printf("%s: found line:%d token [%s]\n", s, linecount, yytext);
    return 0;
}
