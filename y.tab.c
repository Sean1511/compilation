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
#define YYLAST   1084

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  289

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
      85,    86,    87,    88,    89,    90,    91,    95,    99,   103,
     104,   105,   109,   112,   116,   119,   123,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   157,   158,   159,   160,   164,   165,
     169,   170,   174,   175,   176,   177,   178,   179,   180,   181,
     185,   186,   187,   188,   189,   190,   191,   195,   196,   197,
     198,   199,   200,   201,   205,   206,   207,   211,   212,   213,
     214,   218,   222,   226,   227,   228,   229,   233,   237,   241,
     242,   243,   244,   245,   246,   250,   251,   255,   258,   262,
     266,   270,   274,   278,   282,   286,   290
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
  "func_call", "func_params", "func", "block", "func_type", "var_type",
  "args", "declerations", "var_decleration", "string_decleration",
  "string_params", "args_decleration", "params_decleration", "variables",
  "params", "string_id", "csnull", "string", "char", "int", "real", "hex",
  "true", "false", "id", YY_NULLPTR
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

#define YYPACT_NINF -251

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-251)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,  1057,    36,  -251,  -251,    21,  -251,  -251,  -251,    29,
    -251,  -251,  -251,  -251,  -251,  -251,  -251,    35,  -251,  -251,
    -251,     1,  -251,     8,    15,    22,   223,   223,    27,  -251,
    -251,  -251,  -251,  -251,  -251,  -251,    35,    25,    46,    45,
      13,  -251,  -251,    48,    27,   223,    49,  1069,   602,    35,
     223,    50,    52,    55,    53,   317,  -251,   164,    85,  -251,
    -251,  -251,  -251,  -251,  -251,  -251,    61,    63,    68,  -251,
     345,  -251,  -251,   -24,    35,  -251,  -251,   278,  -251,    35,
    -251,  -251,  -251,  -251,  -251,  -251,  -251,  -251,   617,    35,
      35,  -251,   617,   774,  -251,  -251,  -251,  -251,  -251,  -251,
    -251,  -251,  -251,    64,    71,    69,    35,    73,   617,   617,
      35,    72,   602,  -251,   176,   354,  -251,   182,   416,  -251,
    -251,  -251,  -251,  -251,  -251,   372,  -251,  -251,   617,   492,
     617,  -251,   602,   308,   424,   432,  1015,  -251,    64,    79,
     698,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   617,   617,  -251,   617,  -251,   617,  -251,   -14,  -251,
     717,   736,    83,   100,    82,   789,   602,  -251,   602,  -251,
     380,  -251,   385,  -251,  1015,    -7,  -251,   970,   507,  -251,
     635,   804,   602,   442,   416,   602,   602,   450,  -251,  -251,
      51,   -20,  -251,   117,    51,    51,    51,    51,   -20,    51,
     117,  -251,   656,   677,   617,    35,   458,   458,   617,   617,
     617,    86,   819,   834,   602,  -251,  -251,   547,  -251,  -251,
    -251,   105,    88,   849,   602,   468,   864,   879,   602,  -251,
      17,   985,   107,    33,  -251,   116,  -251,   894,   755,  -251,
      93,    94,   909,  -251,   562,   617,  -251,    96,   924,   602,
     102,   113,   939,   617,    35,    35,    35,    35,   458,    35,
     119,  -251,  -251,   120,  -251,  1015,  -251,   121,   954,  -251,
    -251,   125,  1000,  -251,  -251,  -251,    99,  -251,   124,  -251,
    -251,  -251,   128,  -251,    35,   458,  -251,  -251,  -251
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     7,     8,     9,     0,
      90,    91,    92,    93,    94,    95,    96,     0,     1,     3,
       6,     0,   136,     0,     0,     0,   106,   106,     0,    97,
      98,    99,   100,   101,   102,   103,     0,     0,   104,     0,
       0,     5,   117,   126,     0,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,    27,
      30,    31,    32,    39,    40,    41,     0,     0,     0,    33,
       0,   108,   110,     0,     0,    10,   105,     0,    11,     0,
     131,   134,   135,   128,   132,   130,   133,   129,     0,     0,
       0,    36,     0,     0,    67,    70,    73,    72,    64,    66,
      65,    68,    69,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,     0,    17,     0,     0,    14,
      26,    28,    29,    34,    18,     0,   107,   109,     0,     0,
       0,   125,     0,     0,     0,     0,    59,    63,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,   112,     0,   118,   119,   111,
       0,     0,     0,     0,     0,     0,     0,    83,     0,    84,
       0,    16,     0,    13,    45,    71,    76,    81,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    60,
      52,    47,    50,    57,    51,    53,    54,    55,    48,    56,
      58,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,    85,    15,     0,    80,    74,
      78,     0,    35,     0,     0,     0,     0,     0,     0,   127,
     113,   121,   123,    71,   120,    37,    43,     0,     0,    86,
      35,    35,     0,    77,     0,     0,    19,    35,     0,     0,
      35,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    35,    75,    46,    24,    35,     0,    20,
      25,    35,   115,   114,   122,   124,     0,    38,     0,    44,
      89,    21,    35,    22,     0,     0,    23,   116,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -251,  -251,  -251,   165,   -19,    -3,  -251,  -251,   138,  -251,
     -44,   -41,  -251,  -251,  -251,  -251,  -251,  -251,  -109,  -251,
     111,   -21,   -31,  -175,   135,  -251,   150,   -22,   -45,   -63,
     -56,  -250,  -251,  -251,  -199,   127,   118,  -251,  -251,  -251,
    -251,  -251,  -251,  -251,  -251,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,     7,     8,    41,    78,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
     177,    68,   178,   179,    69,    17,    36,    37,    70,    71,
      72,   104,    38,   107,   157,    42,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      23,   162,    20,   220,   273,    39,   234,   126,    24,   128,
     115,   114,   118,   117,   127,   143,    47,   120,    48,   204,
     205,    57,    22,    76,     1,   152,   125,    43,   129,    49,
     130,    73,   135,   134,   287,    21,    18,    50,    22,    51,
     105,    52,    53,    54,    22,   217,    73,   154,    73,    73,
     253,   254,   126,    25,    20,   126,   274,   275,   133,   127,
      26,    73,   127,    55,    56,    43,   257,    27,    73,   220,
      23,   170,   126,   120,   172,    28,   120,    40,    44,   127,
     138,   139,    74,   142,   120,   129,   143,   154,   184,   183,
      48,   187,   149,   120,    22,    45,   152,   158,    46,    77,
     164,   163,   108,    55,   109,    73,    73,   110,    73,    73,
     121,    51,   122,    52,    53,    54,    73,   123,   154,   175,
     155,   126,   159,   156,    73,    73,    73,   188,   127,   120,
      20,   120,   208,   209,   210,    55,   119,   239,   245,   246,
     225,   256,   120,   258,   261,   262,   120,   266,   141,   142,
     278,   217,   143,   269,   145,   146,   147,   148,   149,    93,
     150,    73,   152,    73,   270,   235,   236,    47,   279,    48,
      19,   280,   281,    22,    73,    73,   283,   285,    73,   286,
      49,   166,    75,   232,   120,    22,   244,    48,    50,   111,
      51,    22,    52,    53,    54,   233,   158,    73,    73,   136,
     106,   131,    51,   140,    52,    53,    54,   137,    51,     0,
      52,    53,    54,     0,    55,   116,    73,   277,     0,   160,
     161,     0,     0,   165,     0,     0,    55,   167,     0,     0,
      29,    30,    55,   171,    31,    32,    33,    34,    35,   174,
       0,   180,     0,   181,   288,   105,   158,   158,   276,    73,
     163,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,     0,   202,     0,   203,     0,     0,
       0,     0,     0,     0,     0,   105,    73,   212,     0,   213,
       0,    47,     0,   132,     0,     0,     0,    22,     0,     0,
       0,     0,     0,   223,    49,     0,   226,   227,     0,     0,
       0,     0,    50,     0,    51,     0,    52,    53,    54,     0,
       0,    47,     0,   182,     0,   231,     0,    22,     0,   237,
     174,   238,   112,     0,    49,   242,    22,     0,    55,     0,
       0,     0,    50,    49,    51,   248,    52,    53,    54,   252,
       0,    50,     0,    51,     0,    52,    53,    54,     0,     0,
      48,     0,     0,     0,    22,     0,   265,     0,    55,   168,
     268,    49,     0,    22,   272,     0,     0,    55,   113,    50,
      49,    51,     0,    52,    53,    54,     0,    48,    50,     0,
      51,    22,    52,    53,    54,   214,     0,     0,     0,    22,
      48,     0,     0,     0,    22,    55,   124,     0,    51,     0,
      52,    53,    54,     0,    55,   169,    51,     0,    52,    53,
      54,    51,     0,    52,    53,    54,     0,     0,     0,     0,
       0,    48,    55,   173,     0,    22,     0,     0,     0,   185,
      55,   215,    49,    22,     0,    55,   216,   186,     0,     0,
      50,    22,    51,     0,    52,    53,    54,   224,    49,     0,
      51,    22,    52,    53,    54,   228,    50,     0,    51,    22,
      52,    53,    54,    48,     0,     0,    55,    22,    51,     0,
      52,    53,    54,   249,    55,     0,    51,    22,    52,    53,
      54,     0,    55,     0,    51,     0,    52,    53,    54,     0,
       0,     0,    55,     0,    51,     0,    52,    53,    54,     0,
      55,    22,    80,     0,     0,     0,     0,     0,    55,    81,
      82,    83,    84,    85,    86,    87,    22,    80,    55,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      87,     0,     0,     0,    88,     0,     0,     0,    89,     0,
      90,     0,     0,     0,    92,   176,     0,     0,     0,    88,
       0,     0,     0,    89,     0,    90,    22,    80,     0,    92,
     219,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    22,    80,     0,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,    88,
       0,     0,     0,    89,     0,    90,     0,     0,     0,    92,
     243,     0,     0,     0,    88,     0,     0,     0,    89,     0,
      90,    22,    80,     0,    92,   264,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    87,    22,    80,     0,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      87,     0,     0,     0,    88,     0,     0,     0,    89,     0,
      90,    91,     0,     0,    92,     0,     0,     0,     0,    88,
       0,     0,     0,    89,     0,    90,   141,   142,     0,    92,
     143,   144,   145,   146,   147,   148,   149,     0,   150,   151,
     152,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     221,   143,   144,   145,   146,   147,   148,   149,     0,   150,
     151,   152,     0,     0,     0,     0,     0,     0,   141,   142,
       0,   229,   143,   144,   145,   146,   147,   148,   149,     0,
     150,   151,   152,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   230,   143,   144,   145,   146,   147,   148,   149,
       0,   150,   151,   152,     0,     0,     0,     0,   141,   142,
       0,   189,   143,   144,   145,   146,   147,   148,   149,     0,
     150,   151,   152,     0,     0,     0,     0,   141,   142,     0,
     206,   143,   144,   145,   146,   147,   148,   149,     0,   150,
     151,   152,     0,     0,     0,     0,   141,   142,     0,   207,
     143,   144,   145,   146,   147,   148,   149,     0,   150,   151,
     152,     0,     0,     0,     0,   141,   142,     0,   260,   143,
     144,   145,   146,   147,   148,   149,     0,   150,   151,   152,
     141,   142,     0,   153,   143,   144,   145,   146,   147,   148,
     149,     0,   150,   151,   152,   141,   142,     0,   211,   143,
     144,   145,   146,   147,   148,   149,     0,   150,   151,   152,
     141,   142,     0,   222,   143,   144,   145,   146,   147,   148,
     149,     0,   150,   151,   152,   141,   142,     0,   240,   143,
     144,   145,   146,   147,   148,   149,     0,   150,   151,   152,
     141,   142,     0,   241,   143,   144,   145,   146,   147,   148,
     149,     0,   150,   151,   152,   141,   142,     0,   247,   143,
     144,   145,   146,   147,   148,   149,     0,   150,   151,   152,
     141,   142,     0,   250,   143,   144,   145,   146,   147,   148,
     149,     0,   150,   151,   152,   141,   142,     0,   251,   143,
     144,   145,   146,   147,   148,   149,     0,   150,   151,   152,
     141,   142,     0,   259,   143,   144,   145,   146,   147,   148,
     149,     0,   150,   151,   152,   141,   142,     0,   263,   143,
     144,   145,   146,   147,   148,   149,     0,   150,   151,   152,
     141,   142,     0,   267,   143,   144,   145,   146,   147,   148,
     149,     0,   150,   151,   152,   141,   142,     0,   271,   143,
     144,   145,   146,   147,   148,   149,     0,   150,   151,   152,
       0,   141,   142,   282,   218,   143,   144,   145,   146,   147,
     148,   149,     0,   150,   151,   152,   141,   142,     0,   255,
     143,   144,   145,   146,   147,   148,   149,     0,   150,   151,
     152,   141,   142,     0,   284,   143,   144,   145,   146,   147,
     148,   149,     0,   150,   151,   152,   141,   142,     0,     0,
     143,   144,   145,   146,   147,   148,   149,     0,   150,   151,
     152,     9,     0,     0,    10,    11,     0,     0,    12,    13,
      14,    15,    16,    79,     0,     0,    10,    11,     0,     0,
      12,    13,    14,    15,    16
};

static const yytype_int16 yycheck[] =
{
       9,   110,     5,   178,   254,    27,   205,    70,    17,    33,
      55,    55,    57,    57,    70,    35,     3,    58,     5,    33,
      34,    40,     9,    45,     3,    45,    70,    36,    52,    16,
      54,    40,    77,    77,   284,     6,     0,    24,     9,    26,
      49,    28,    29,    30,     9,    52,    55,    54,    57,    58,
      33,    34,   115,    52,    57,   118,   255,   256,    77,   115,
      52,    70,   118,    50,    51,    74,    33,    52,    77,   244,
      79,   115,   135,   114,   118,    53,   117,    50,    53,   135,
      89,    90,    34,    32,   125,    52,    35,    54,   133,   133,
       5,   135,    41,   134,     9,    49,    45,   106,    53,    50,
      28,   110,    52,    50,    52,   114,   115,    52,   117,   118,
      49,    26,    49,    28,    29,    30,   125,    49,    54,   128,
      49,   184,    49,    54,   133,   134,   135,    48,   184,   170,
     133,   172,    49,    33,    52,    50,    51,    51,    33,    51,
     184,    34,   183,    27,    51,    51,   187,    51,    31,    32,
     259,    52,    35,    51,    37,    38,    39,    40,    41,    48,
      43,   170,    45,   172,    51,   206,   207,     3,    49,     5,
       5,    51,    51,     9,   183,   184,    51,    53,   187,    51,
      16,     5,    44,   204,   225,     9,   217,     5,    24,    54,
      26,     9,    28,    29,    30,   204,   205,   206,   207,    88,
      50,    74,    26,    92,    28,    29,    30,    89,    26,    -1,
      28,    29,    30,    -1,    50,    51,   225,   258,    -1,   108,
     109,    -1,    -1,   112,    -1,    -1,    50,    51,    -1,    -1,
       7,     8,    50,    51,    11,    12,    13,    14,    15,   128,
      -1,   130,    -1,   132,   285,   254,   255,   256,   257,   258,
     259,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,   154,    -1,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   284,   285,   166,    -1,   168,
      -1,     3,    -1,     5,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,   182,    16,    -1,   185,   186,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,
      -1,     3,    -1,     5,    -1,   204,    -1,     9,    -1,   208,
     209,   210,     5,    -1,    16,   214,     9,    -1,    50,    -1,
      -1,    -1,    24,    16,    26,   224,    28,    29,    30,   228,
      -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,    -1,
       5,    -1,    -1,    -1,     9,    -1,   245,    -1,    50,     5,
     249,    16,    -1,     9,   253,    -1,    -1,    50,    51,    24,
      16,    26,    -1,    28,    29,    30,    -1,     5,    24,    -1,
      26,     9,    28,    29,    30,     5,    -1,    -1,    -1,     9,
       5,    -1,    -1,    -1,     9,    50,    51,    -1,    26,    -1,
      28,    29,    30,    -1,    50,    51,    26,    -1,    28,    29,
      30,    26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,     5,    50,    51,    -1,     9,    -1,    -1,    -1,     5,
      50,    51,    16,     9,    -1,    50,    51,     5,    -1,    -1,
      24,     9,    26,    -1,    28,    29,    30,     5,    16,    -1,
      26,     9,    28,    29,    30,     5,    24,    -1,    26,     9,
      28,    29,    30,     5,    -1,    -1,    50,     9,    26,    -1,
      28,    29,    30,     5,    50,    -1,    26,     9,    28,    29,
      30,    -1,    50,    -1,    26,    -1,    28,    29,    30,    -1,
      -1,    -1,    50,    -1,    26,    -1,    28,    29,    30,    -1,
      50,     9,    10,    -1,    -1,    -1,    -1,    -1,    50,    17,
      18,    19,    20,    21,    22,    23,     9,    10,    50,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      48,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,     9,    10,    -1,    52,
      53,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,
      53,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      48,     9,    10,    -1,    52,    53,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    31,    32,    -1,    52,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      55,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    55,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    55,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    -1,    -1,    -1,    -1,    31,    32,
      -1,    53,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    -1,    -1,    -1,    -1,    31,    32,    -1,
      53,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    -1,    -1,    -1,    -1,    31,    32,    -1,    53,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    -1,    -1,    -1,    -1,    31,    32,    -1,    53,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      31,    32,    -1,    49,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    31,    32,    -1,    49,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      31,    32,    -1,    49,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    31,    32,    -1,    49,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      31,    32,    -1,    49,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    31,    32,    -1,    49,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      31,    32,    -1,    49,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    31,    32,    -1,    49,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      31,    32,    -1,    49,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    31,    32,    -1,    49,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      31,    32,    -1,    49,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    31,    32,    -1,    49,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      -1,    31,    32,    49,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,     4,    -1,    -1,     7,     8,    -1,    -1,    11,    12,
      13,    14,    15,     4,    -1,    -1,     7,     8,    -1,    -1,
      11,    12,    13,    14,    15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    62,    63,    64,    65,    66,    67,    68,     4,
       7,     8,    11,    12,    13,    14,    15,    86,     0,    64,
      66,     6,     9,   106,   106,    52,    52,    52,    53,     7,
       8,    11,    12,    13,    14,    15,    87,    88,    93,    88,
      50,    69,    96,   106,    53,    49,    53,     3,     5,    16,
      24,    26,    28,    29,    30,    50,    51,    65,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    82,    85,
      89,    90,    91,   106,    34,    69,    88,    50,    70,     4,
      10,    17,    18,    19,    20,    21,    22,    23,    42,    46,
      48,    49,    52,    81,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    92,   106,    87,    94,    52,    52,
      52,    85,     5,    51,    71,    89,    51,    71,    89,    51,
      72,    49,    49,    49,    51,    71,    90,    91,    33,    52,
      54,    96,     5,    65,    71,    89,    81,    97,   106,   106,
      81,    31,    32,    35,    36,    37,    38,    39,    40,    41,
      43,    44,    45,    49,    54,    49,    54,    95,   106,    49,
      81,    81,    79,   106,    28,    81,     5,    51,     5,    51,
      71,    51,    71,    51,    81,   106,    53,    81,    83,    84,
      81,    81,     5,    71,    89,     5,     5,    71,    48,    53,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    33,    34,    53,    53,    49,    33,
      52,    49,    81,    81,     5,    51,    51,    52,    34,    53,
      84,    55,    49,    81,     5,    71,    81,    81,     5,    55,
      55,    81,    82,   106,    95,    72,    72,    81,    81,    51,
      49,    49,    81,    53,    83,    33,    51,    49,    81,     5,
      49,    49,    81,    33,    34,    34,    34,    33,    27,    49,
      53,    51,    51,    49,    53,    81,    51,    49,    81,    51,
      51,    49,    81,    92,    95,    95,   106,    72,    79,    49,
      51,    51,    49,    51,    34,    53,    51,    92,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    65,    65,    66,    66,
      67,    68,    69,    69,    69,    69,    69,    69,    69,    70,
      70,    70,    70,    70,    70,    70,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    74,    75,
      75,    75,    76,    77,    78,    79,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    83,    83,
      84,    84,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    90,    91,    92,    92,    92,    92,    93,    94,    95,
      95,    95,    95,    95,    95,    96,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     6,     2,     1,     1,     1,
       7,     7,     2,     4,     3,     5,     4,     3,     3,     5,
       6,     7,     7,     8,     6,     6,     2,     1,     2,     2,
       1,     1,     1,     1,     2,     3,     2,     5,     7,     1,
       1,     1,     9,     5,     7,     3,     6,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     6,     3,     5,     2,     1,
       2,     1,     2,     3,     3,     4,     5,     6,     6,     7,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     2,     1,     2,
       1,     3,     3,     4,     6,     6,     8,     2,     2,     1,
       3,     3,     5,     3,     5,     3,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
    {semanticAnalysis((yyvsp[0]));}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 31 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addlist((yyval), (yyvsp[-1])); addNode(&(yyval), (yyvsp[0]));}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 32 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addNode(&(yyval), (yyvsp[0]));}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("MAIN"); addNode(&(yyval), (yyvsp[0]));}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 40 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); node* v = mknode("VOID"); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, v); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, (yyvsp[-5])); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 59 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v); addlist((yyval), (yyvsp[-1]));}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 60 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval),(yyvsp[-1]));}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-3])); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v);addlist((yyval),(yyvsp[-1]));}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 62 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-2])); addlist((yyval),(yyvsp[-1]));}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 63 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-1]));}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 64 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-1]));addNode(&(yyval),v);}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 68 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 69 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 70 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-5])); addlist((yyval),(yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 71 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY");node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 72 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-6]));  node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 73 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 74 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-4]));addNode(&(yyval),v); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 78 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 90 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("RET"); addNode(&s, (yyvsp[-1])); addNode(&(yyval), s);}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 91 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("RET"); addNode(&(yyval), s);}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 95 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF"); s->line = (yyvsp[-2])->line; addNode(&s, (yyvsp[-2]));  addlist(s,(yyvsp[0])); s->nodes[1]->father = "IF"; addNode(&(yyval),s);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 99 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF-ELSE"); addNode(&s, (yyvsp[-4])); addlist(s,(yyvsp[-2])); s->nodes[1]->father = "IF"; addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 109 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("FOR"); s->line = (yyvsp[-6])->line; addlist(s, (yyvsp[-6])); addNode(&s, (yyvsp[-4])); addlist(s, (yyvsp[-2])); addlist(s, (yyvsp[0])); s->nodes[3]->father = "FOR"; addNode(&(yyval),s);}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 112 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("WHILE"); s->line = (yyvsp[-2])->line; addNode(&s, (yyvsp[-2])); addlist(s, (yyvsp[0])); s->nodes[1]->father = "WHILE"; addNode(&(yyval),s);}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 116 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("DO-WHILE"); s->line = (yyvsp[-2])->line; addlist(s, (yyvsp[-5])); s->nodes[0]->father = "DO-WHILE"; addNode(&s, (yyvsp[-2])); addNode(&(yyval),s);}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 119 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); s->line = linecount; addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 123 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); node* index = mknode("INDEX"); addNode(&index,(yyvsp[-3])); addNode(&(yyvsp[-5]), index); addNode(&s, (yyvsp[-5])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 127 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("+"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 128 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("-"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 129 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("*"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 130 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("/"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 131 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("=="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 132 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 133 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 134 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 135 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 136 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("!="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 137 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0]));}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 138 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("||"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0]));}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 139 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("NOT"); addNode(&(yyval),(yyvsp[0]));}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 140 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 141 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("LEN OF"); addNode(&(yyval),(yyvsp[-1]));}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 142 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&"); addNode(&(yyval), (yyvsp[0]));}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 143 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&"); addNode(&(yyval), (yyvsp[0]));}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 157 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL"); addNode(&s,(yyvsp[-3])); node* args = mknode("ARGS"); addlist(args, (yyvsp[-1])); addNode(&s, args); addNode(&(yyval),s);}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 158 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); addNode(&s,(yyvsp[-5])); node* call = mknode("FUNC_CALL"); addNode(&call,(yyvsp[-3])); node* args = mknode("ARGS"); addlist(args, (yyvsp[-1])); addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 159 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL"); addNode(&s,(yyvsp[-2])); node* args = mknode("ARGS NONE"); addNode(&s, args); addNode(&(yyval),s);}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 160 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); addNode(&s,(yyvsp[-4])); node* call = mknode("FUNC_CALL"); addNode(&call,(yyvsp[-2])); node* args = mknode("ARGS NONE"); addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 164 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 169 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[-1]));}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 170 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[0]));}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 174 "src/file.y" /* yacc.c:1646  */
    {(yyval) =  mknode("BLOCK");}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 175 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); addlist(s,(yyvsp[-1])); addNode(&(yyval),s);}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 176 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-1])); addNode(&s,v); addNode(&(yyval),s);}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 177 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-2])); addNode(&s,v); addlist(s, (yyvsp[-1])); addNode(&(yyval),s);}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 178 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BLOCK"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 179 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); addlist(s,(yyvsp[-4]));node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 180 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-4])); addNode(&s,v); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 181 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-5])); addNode(&s,v); addlist(s, (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 185 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT");}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 186 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL");}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 187 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR");}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 188 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BOOL");}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 189 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT*");}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 190 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR*");}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 191 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL*");}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 195 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT");}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 196 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL");}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 197 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR");}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 198 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BOOL");}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 199 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT*");}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 200 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR*");}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 201 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL*");}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 205 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[0]));}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 206 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[-2])); addlist((yyval), (yyvsp[0]));}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 207 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS NONE");}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 211 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("fd",(yyvsp[-1]),(yyvsp[0]));}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 213 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("fd",(yyvsp[-1]),(yyvsp[0]));}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 218 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 222 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("STRING"); addlist(s,(yyvsp[-1])); addNode(&(yyval),s);}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 226 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-1])); addNode(&(yyvsp[-3]),len); addNode(&(yyval),(yyvsp[-3]));}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 227 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-3])); addNode(&(yyvsp[-5]),len); addNode(&(yyval),(yyvsp[-5])); addlist((yyval),(yyvsp[0]));}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 228 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-3])); addNode(&(yyvsp[-5]),len); addNode(&ass,(yyvsp[-5])); addNode(&ass,(yyvsp[0]));addNode(&(yyval),ass);}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 229 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-5])); addNode(&(yyvsp[-7]),len); addNode(&ass,(yyvsp[-7])); addNode(&ass,(yyvsp[-2]));addNode(&(yyval),ass); addlist((yyval),(yyvsp[0]));}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 233 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = (yyvsp[-1]); mknodelist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 237 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = (yyvsp[-1]); addlist(s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 242 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[-2])); addlist((yyval),(yyvsp[0]));}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 243 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 244 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&(yyval),s); addlist((yyval),(yyvsp[0]));}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 245 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-2])); addlist(s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 246 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-4])); addlist(s,(yyvsp[-2])); addNode(&(yyval),s); addlist((yyval),(yyvsp[0]));}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 250 "src/file.y" /* yacc.c:1646  */
    {addNode(&(yyvsp[-2]),(yyvsp[0]));}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 255 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-3]); node* index = mknode("INDEX"); addNode(&index,(yyvsp[-1])); addNode(&(yyval), index);}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 258 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (yytext); (yyval)->val_type = "NULL"; (yyval)->line = linecount;}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 262 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "STRING"; (yyval)->line = linecount;}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 266 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "CHAR"; (yyval)->line = linecount;}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 270 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "INT"; (yyval)->line = linecount;}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 274 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "REAL"; (yyval)->line = linecount;}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 278 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "HEX"; (yyval)->line = linecount;}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 282 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "BOOL"; (yyval)->line = linecount;}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 286 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "BOOL"; (yyval)->line = linecount;}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 290 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "ID"; (yyval)->line = linecount;}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2321 "y.tab.c" /* yacc.c:1646  */
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
#line 293 "src/file.y" /* yacc.c:1906  */


int main(){
    return yyparse();
}

int yyerror(char* s){
    printf("%s: found line:%d token [%s]\n", s, linecount, yytext);
    return 0;
}
