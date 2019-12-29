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
#define YYLAST   977

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

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
     107,   110,   114,   117,   118,   122,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   156,   157,   158,   159,   160,   161,   162,
     166,   167,   168,   169,   173,   174,   178,   179,   183,   184,
     185,   186,   187,   188,   189,   190,   194,   195,   196,   197,
     198,   199,   200,   204,   205,   206,   207,   208,   209,   210,
     214,   215,   216,   220,   221,   222,   223,   227,   231,   235,
     236,   237,   238,   242,   246,   250,   251,   252,   253,   257,
     258,   262,   265,   269,   273,   277,   281,   285,   289,   293,
     297
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
  "int_exp", "func_call", "func_params", "func", "block", "func_type",
  "var_type", "args", "declerations", "var_decleration",
  "string_decleration", "string_params", "args_decleration",
  "params_decleration", "variables", "params", "string_id", "csnull",
  "string", "char", "int", "real", "hex", "true", "false", "id", YY_NULLPTR
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

#define YYPACT_NINF -255

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-255)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,   604,    29,  -255,  -255,    22,  -255,  -255,  -255,   106,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,    27,  -255,  -255,
    -255,     9,  -255,    18,    26,    33,   962,   962,    40,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,    27,    44,    49,    52,
     159,  -255,  -255,    72,    40,   962,    61,   953,    27,   962,
      64,    68,    69,    74,   311,  -255,   247,   416,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,    73,    81,    82,  -255,   563,
    -255,  -255,    35,    27,  -255,  -255,   265,  -255,    27,    83,
      79,    27,    87,   542,   542,    27,   109,   542,  -255,   325,
     320,  -255,   472,   574,  -255,  -255,  -255,  -255,  -255,  -255,
     527,  -255,  -255,   524,   412,     0,  -255,   542,   283,   144,
     368,  -255,     0,  -255,     1,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,   542,    27,   542,   611,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,    86,   630,
      93,   111,    94,   687,   542,  -255,   542,  -255,   338,  -255,
     545,  -255,   542,   898,   -33,  -255,   868,   430,  -255,     0,
      30,  -255,  -255,   702,   542,   373,   574,   542,   542,   378,
     172,   542,    27,   898,  -255,    86,   649,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   274,
     542,   274,   542,   524,   542,    96,   717,   732,   542,  -255,
    -255,   898,   468,  -255,  -255,  -255,   273,     0,     0,     0,
       0,   115,   100,   747,   542,   386,   762,   777,   542,    17,
     883,  -255,  -255,    47,   -21,  -255,   913,    47,    47,    47,
      47,   -21,    47,   913,  -255,   125,   590,  -255,   792,   668,
    -255,   104,   108,   807,  -255,   486,  -255,   -17,  -255,   -17,
    -255,   140,  -255,   113,   822,   542,   114,   116,   837,   143,
      27,    27,   274,  -255,    27,   122,  -255,  -255,   126,  -255,
    -255,  -255,   128,   852,  -255,  -255,   133,   152,  -255,  -255,
    -255,   137,  -255,  -255,  -255,   141,  -255,    27,   274,  -255,
    -255,  -255
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     7,     8,     9,     0,
      96,    97,    98,    99,   100,   101,   102,     0,     1,     3,
       6,     0,   140,     0,     0,     0,   112,   112,     0,   103,
     104,   105,   106,   107,   108,   109,     0,     0,   110,     0,
       0,     5,   123,   130,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,    27,    30,
      31,    32,    37,    38,    39,     0,     0,     0,    33,     0,
     114,   116,     0,     0,    10,   111,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    17,     0,     0,    14,    26,    28,    29,    34,    18,
       0,   113,   115,     0,     0,     0,   129,     0,     0,     0,
       0,   118,     0,   124,   125,   117,   135,   138,   139,   132,
     136,   134,   137,   133,    60,     0,     0,     0,     0,    66,
      69,    72,    71,    63,    65,    64,    67,    68,    70,     0,
       0,     0,     0,     0,     0,    89,     0,    90,     0,    16,
       0,    13,     0,    43,    70,    82,    87,     0,    85,     0,
       0,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,    62,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      15,    44,     0,    86,    80,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     127,   126,    59,    51,    46,    49,    56,    50,    52,    53,
      54,    47,    55,    57,    48,    35,     0,    41,     0,     0,
      92,     0,     0,     0,    83,     0,    77,    73,    76,    74,
      75,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,     0,     0,    93,    94,     0,    81,
      45,    24,     0,     0,    20,    25,     0,   121,   120,   128,
      36,     0,    42,    95,    21,     0,    22,     0,     0,    23,
     122,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,  -255,   186,   -27,    10,  -255,  -255,   149,  -255,
     -53,   -46,  -255,  -255,  -255,  -255,  -255,  -255,   -83,  -255,
      51,   -82,  -255,    -6,  -150,   155,  -255,   153,    -1,   -34,
     -52,   -37,  -254,  -255,  -255,  -168,   132,    85,  -255,   -47,
     -31,  -100,  -255,  -255,  -255,  -255,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,     7,     8,    41,    77,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
     156,   160,    67,   157,   158,    68,    17,    36,    37,    69,
      70,    71,    79,    38,    82,   113,    42,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      23,    89,   140,    92,   221,   161,   278,   205,    24,    22,
     116,    95,   161,    56,   179,    20,   100,   101,   208,   202,
      90,   190,    93,   109,   188,     1,    39,    43,   210,    18,
     170,    72,   102,   290,   171,   172,    22,   148,   101,    80,
     150,   101,   110,    95,    75,    72,    95,    72,    72,   108,
     259,   260,   159,   102,    95,   165,   102,   169,   101,   161,
      72,    25,   207,    95,    43,   208,    20,    72,   103,    23,
      26,   209,   114,   102,   166,   210,   141,   206,    27,   178,
      72,    72,   179,    72,    72,   211,    28,   104,   185,   105,
      40,    72,   188,   279,   154,   205,   162,    44,    45,    72,
      72,    72,    95,   162,    95,    46,    73,   161,   161,   161,
     161,    76,    21,   215,   101,    22,    83,   175,    20,    95,
      84,    85,    96,    95,    54,   247,   248,   249,   250,   102,
      97,    98,   111,   112,   128,   139,   115,   142,   143,    72,
     190,    72,   192,   235,   193,   237,   194,   240,   251,   167,
     162,   252,   262,    22,   153,   266,    72,    72,   163,   267,
      72,   121,    47,   114,   271,   274,   123,   275,    22,    95,
      50,   282,    51,    52,    53,    48,   173,   283,   176,   284,
      72,   281,    72,    49,   286,    50,   287,    51,    52,    53,
     288,    19,   289,    74,    54,   196,   245,   197,   162,   162,
     162,   162,    81,   201,   207,   106,    72,   208,    86,    54,
      55,   174,   277,   209,     0,   213,   280,   210,   216,   217,
     270,     0,   220,     0,     0,     0,     0,   219,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       0,   236,   291,   238,   153,   239,     0,     0,     0,   243,
      47,    80,   114,    72,     0,   141,    22,     0,     0,     0,
       0,     0,     0,    48,     0,   254,     0,     0,    47,   258,
     107,    49,     0,    50,    22,    51,    52,    53,    80,    72,
       0,    48,     0,    22,     0,     0,    47,     0,   164,    49,
       0,    50,    22,    51,    52,    53,     0,    54,    91,    48,
      50,     0,    51,    52,    53,   207,   273,    49,   208,    50,
       0,    51,    52,    53,   209,    54,    87,     0,   210,     0,
      22,     0,     0,     0,    54,   146,   246,    48,     0,    22,
     144,     0,     0,    54,    22,    49,    48,    50,     0,    51,
      52,    53,     0,   198,    49,     0,    50,    22,    51,    52,
      53,    50,     0,    51,    52,    53,     0,     0,     0,     0,
       0,    54,    88,     0,    50,     0,    51,    52,    53,     0,
      54,   147,     0,   168,     0,    54,   145,    22,   214,     0,
       0,     0,    22,   218,    48,     0,     0,    22,    54,   199,
       0,   255,    49,     0,    50,    22,    51,    52,    53,    50,
       0,    51,    52,    53,    50,     0,    51,    52,    53,     0,
       0,     0,    50,     0,    51,    52,    53,     0,    54,     0,
       0,    22,   116,    54,     0,    22,     0,     0,    54,   117,
     118,   119,   120,   121,   122,   123,    54,   124,     0,    22,
     116,     0,    50,     0,    51,    52,    53,   117,   118,   119,
     120,   121,   122,   123,   125,   124,     0,     0,   126,     0,
       0,     0,     0,     0,   127,   155,    54,    94,     0,     0,
       0,     0,   125,     0,     0,     0,   126,    22,   116,     0,
       0,    22,   127,   204,     0,   117,   118,   119,   120,   121,
     122,   123,     0,   124,     0,    22,   116,     0,    50,     0,
      51,    52,    53,   117,   118,   119,   120,   121,   122,   123,
     125,   124,     0,     0,   126,     0,     0,     0,     0,     0,
     127,   244,    54,   149,     0,     0,     0,     0,   125,     0,
       0,     0,   126,    22,   116,     0,    22,     0,   127,   269,
       0,   117,   118,   119,   120,   121,   122,   123,     0,   124,
       0,    22,   116,    50,    22,    51,    52,    53,     0,   117,
     118,   119,   120,   121,   122,   123,   125,   124,     0,   152,
     126,    50,    22,    51,    52,    53,   127,    54,   151,    48,
       0,     0,     0,    22,   125,     0,     0,    49,   126,    50,
      48,    51,    52,    53,   127,    54,   200,     0,    49,     0,
      50,     0,    51,    52,    53,     0,     0,     0,     9,     0,
       0,    10,    11,    54,    99,    12,    13,    14,    15,    16,
       0,   177,   178,     0,    54,   179,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,     0,     0,     0,     0,
       0,     0,   177,   178,     0,   263,   179,   180,   181,   182,
     183,   184,   185,     0,   186,   187,   188,     0,     0,     0,
       0,   177,   178,     0,   189,   179,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,     0,     0,     0,     0,
     177,   178,     0,   191,   179,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,     0,     0,     0,     0,   177,
     178,     0,   222,   179,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,     0,     0,     0,     0,   177,   178,
       0,   265,   179,   180,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   177,   178,     0,   195,   179,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   177,   178,
       0,   212,   179,   180,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   177,   178,     0,   241,   179,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   177,   178,
       0,   242,   179,   180,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   177,   178,     0,   253,   179,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   177,   178,
       0,   256,   179,   180,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   177,   178,     0,   257,   179,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   177,   178,
       0,   264,   179,   180,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   177,   178,     0,   268,   179,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   177,   178,
       0,   272,   179,   180,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   177,   178,     0,   276,   179,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,     0,   177,
     178,   285,   203,   179,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   177,   178,     0,   261,   179,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   177,
     178,     0,     0,   179,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   177,   178,     0,     0,   179,     0,
     181,   182,   183,   184,   185,     0,   186,    78,   188,     0,
      10,    11,     0,     0,    12,    13,    14,    15,    16,    29,
      30,     0,     0,    31,    32,    33,    34,    35
};

static const yytype_int16 yycheck[] =
{
       9,    54,    85,    56,   172,   105,   260,   157,    17,     9,
      10,    57,   112,    40,    35,     5,    69,    69,    35,    52,
      54,    54,    56,    76,    45,     3,    27,    36,    45,     0,
     112,    40,    69,   287,    33,    34,     9,    90,    90,    48,
      93,    93,    76,    89,    45,    54,    92,    56,    57,    76,
      33,    34,    52,    90,   100,   108,    93,   110,   110,   159,
      69,    52,    32,   109,    73,    35,    56,    76,    33,    78,
      52,    41,    81,   110,   108,    45,    85,   159,    52,    32,
      89,    90,    35,    92,    93,    55,    53,    52,    41,    54,
      50,   100,    45,   261,   103,   245,   105,    53,    49,   108,
     109,   110,   148,   112,   150,    53,    34,   207,   208,   209,
     210,    50,     6,   166,   166,     9,    52,   126,   108,   165,
      52,    52,    49,   169,    50,   207,   208,   209,   210,   166,
      49,    49,    49,    54,    83,    84,    49,    28,    87,   148,
      54,   150,    49,   189,    33,   191,    52,    51,    33,     5,
     159,    51,    27,     9,   103,    51,   165,   166,   107,    51,
     169,    21,     3,   172,    51,    51,    23,    51,     9,   215,
      26,    49,    28,    29,    30,    16,   125,    51,   127,    51,
     189,   264,   191,    24,    51,    26,    34,    28,    29,    30,
      53,     5,    51,    44,    50,   144,   202,   146,   207,   208,
     209,   210,    49,   152,    32,    73,   215,    35,    53,    50,
      51,   126,   259,    41,    -1,   164,   262,    45,   167,   168,
     251,    -1,   171,    -1,    -1,    -1,    -1,    55,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,   190,   288,   192,   193,   194,    -1,    -1,    -1,   198,
       3,   260,   261,   262,    -1,   264,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,   214,    -1,    -1,     3,   218,
       5,    24,    -1,    26,     9,    28,    29,    30,   287,   288,
      -1,    16,    -1,     9,    -1,    -1,     3,    -1,     5,    24,
      -1,    26,     9,    28,    29,    30,    -1,    50,    51,    16,
      26,    -1,    28,    29,    30,    32,   255,    24,    35,    26,
      -1,    28,    29,    30,    41,    50,     5,    -1,    45,    -1,
       9,    -1,    -1,    -1,    50,     5,    53,    16,    -1,     9,
       5,    -1,    -1,    50,     9,    24,    16,    26,    -1,    28,
      29,    30,    -1,     5,    24,    -1,    26,     9,    28,    29,
      30,    26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    26,    -1,    28,    29,    30,    -1,
      50,    51,    -1,     5,    -1,    50,    51,     9,     5,    -1,
      -1,    -1,     9,     5,    16,    -1,    -1,     9,    50,    51,
      -1,     5,    24,    -1,    26,     9,    28,    29,    30,    26,
      -1,    28,    29,    30,    26,    -1,    28,    29,    30,    -1,
      -1,    -1,    26,    -1,    28,    29,    30,    -1,    50,    -1,
      -1,     9,    10,    50,    -1,     9,    -1,    -1,    50,    17,
      18,    19,    20,    21,    22,    23,    50,    25,    -1,     9,
      10,    -1,    26,    -1,    28,    29,    30,    17,    18,    19,
      20,    21,    22,    23,    42,    25,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    52,    53,    50,    51,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    46,     9,    10,    -1,
      -1,     9,    52,    53,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,     9,    10,    -1,    26,    -1,
      28,    29,    30,    17,    18,    19,    20,    21,    22,    23,
      42,    25,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      52,    53,    50,    51,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,     9,    10,    -1,     9,    -1,    52,    53,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,     9,    10,    26,     9,    28,    29,    30,    -1,    17,
      18,    19,    20,    21,    22,    23,    42,    25,    -1,    45,
      46,    26,     9,    28,    29,    30,    52,    50,    51,    16,
      -1,    -1,    -1,     9,    42,    -1,    -1,    24,    46,    26,
      16,    28,    29,    30,    52,    50,    51,    -1,    24,    -1,
      26,    -1,    28,    29,    30,    -1,    -1,    -1,     4,    -1,
      -1,     7,     8,    50,    51,    11,    12,    13,    14,    15,
      -1,    31,    32,    -1,    50,    35,    36,    37,    38,    39,
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
      38,    39,    40,    41,    -1,    43,    44,    45,    -1,    31,
      32,    49,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    31,    32,    -1,    -1,    35,    -1,
      37,    38,    39,    40,    41,    -1,    43,     4,    45,    -1,
       7,     8,    -1,    -1,    11,    12,    13,    14,    15,     7,
       8,    -1,    -1,    11,    12,    13,    14,    15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    62,    63,    64,    65,    66,    67,    68,     4,
       7,     8,    11,    12,    13,    14,    15,    87,     0,    64,
      66,     6,     9,   107,   107,    52,    52,    52,    53,     7,
       8,    11,    12,    13,    14,    15,    88,    89,    94,    89,
      50,    69,    97,   107,    53,    49,    53,     3,    16,    24,
      26,    28,    29,    30,    50,    51,    65,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    83,    86,    90,
      91,    92,   107,    34,    69,    89,    50,    70,     4,    93,
     107,    88,    95,    52,    52,    52,    86,     5,    51,    71,
      90,    51,    71,    90,    51,    72,    49,    49,    49,    51,
      71,    91,    92,    33,    52,    54,    97,     5,    65,    71,
      90,    49,    54,    96,   107,    49,    10,    17,    18,    19,
      20,    21,    22,    23,    25,    42,    46,    52,    81,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    81,
      79,   107,    28,    81,     5,    51,     5,    51,    71,    51,
      71,    51,    45,    81,   107,    53,    81,    84,    85,    52,
      82,   102,   107,    81,     5,    71,    90,     5,     5,    71,
      82,    33,    34,    81,    98,   107,    81,    31,    32,    35,
      36,    37,    38,    39,    40,    41,    43,    44,    45,    53,
      54,    53,    49,    33,    52,    49,    81,    81,     5,    51,
      51,    81,    52,    34,    53,    85,    82,    32,    35,    41,
      45,    55,    49,    81,     5,    71,    81,    81,     5,    55,
      81,    96,    53,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    72,    81,    72,    81,    81,
      51,    49,    49,    81,    53,    84,    53,    82,    82,    82,
      82,    33,    51,    49,    81,     5,    49,    49,    81,    33,
      34,    34,    27,    55,    49,    53,    51,    51,    49,    53,
     101,    51,    49,    81,    51,    51,    49,   100,    93,    96,
      72,    79,    49,    51,    51,    49,    51,    34,    53,    51,
      93,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    65,    65,    66,    66,
      67,    68,    69,    69,    69,    69,    69,    69,    69,    70,
      70,    70,    70,    70,    70,    70,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    73,    74,    75,    75,    75,
      76,    77,    78,    79,    79,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    84,    84,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    90,    90,    90,    90,    91,    92,    93,
      93,    93,    93,    94,    95,    96,    96,    96,    96,    97,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     6,     2,     1,     1,     1,
       7,     7,     2,     4,     3,     5,     4,     3,     3,     5,
       6,     7,     7,     8,     6,     6,     2,     1,     2,     2,
       1,     1,     1,     1,     2,     5,     7,     1,     1,     1,
       9,     5,     7,     3,     4,     6,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     1,     1,
       4,     6,     3,     5,     2,     1,     2,     1,     2,     3,
       3,     4,     5,     6,     6,     7,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     2,     1,     2,     1,     3,     3,     4,
       6,     6,     8,     2,     2,     1,     3,     3,     5,     3,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 27 "src/file.y" /* yacc.c:1646  */
    {semanticAnalysis((yyvsp[0]));}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 31 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addlist((yyval), (yyvsp[-1])); addNode(&(yyval), (yyvsp[0]));}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 32 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CODE"); addNode(&(yyval), (yyvsp[0]));}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("MAIN"); addNode(&(yyval), (yyvsp[0]));}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 40 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); node* v = mknode("TYPE VOID"); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, v); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNCTION"); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&s, (yyvsp[-5])); addNode(&s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 59 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v); addlist((yyval), (yyvsp[-1]));}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 60 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval),(yyvsp[-1]));}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-3])); node* v = mknode("VAR"); addlist(v,(yyvsp[-2]));addNode(&(yyval),v);addlist((yyval),(yyvsp[-1]));}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 62 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-2])); addlist((yyval),(yyvsp[-1]));}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 63 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-1]));}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 64 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-1]));addNode(&(yyval),v);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 68 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 69 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 70 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-5])); addlist((yyval),(yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 71 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY");node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 72 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-6]));  node* v = mknode("VAR"); addlist(v, (yyvsp[-5])); addNode(&(yyval),v); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 73 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BODY"); addlist((yyval), (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 74 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BODY"); node* v = mknode("VAR"); addlist(v,(yyvsp[-4]));addNode(&(yyval),v); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 78 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 93 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF"); addNode(&s, (yyvsp[-2])); addlist(s,(yyvsp[0]));addNode(&(yyval),s);}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 97 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("IF-ELSE"); addNode(&s, (yyvsp[-4])); addlist(s,(yyvsp[-2])); addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 107 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("FOR"); addlist(s, (yyvsp[-6])); addNode(&s, (yyvsp[-4])); addlist(s, (yyvsp[-2])); addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 110 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("WHILE"); addNode(&s, (yyvsp[-2])); addlist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 114 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("DO-WHILE"); addlist(s, (yyvsp[-5])); addNode(&s, (yyvsp[-2])); addNode(&(yyval),s);}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 118 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); node* ptr = mknode("*"); addNode(&s,(yyvsp[-3])); addNode(&ptr,(yyvsp[0])); addNode(&s,ptr); addNode(&(yyval),s);}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 122 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("="); node* index = mknode("INDEX"); addNode(&index,(yyvsp[-3])); addNode(&(yyvsp[-5]), index); addNode(&s, (yyvsp[-5])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 126 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("+"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 127 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("-"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 128 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("*"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 129 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("/"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 130 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("=="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 131 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 132 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (">="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 133 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 134 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("<="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 135 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode ("!="); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 136 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0]));}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 137 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("||"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval),(yyvsp[0]));}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 138 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("NOT"); addNode(&(yyval),(yyvsp[0]));}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 139 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 140 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext);}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 141 "src/file.y" /* yacc.c:1646  */
    {char* t = (yyvsp[0])->token; char *s = malloc(strlen(t)+strlen("&")+1); strcat (s,"&"); strcat(s,t); (yyval) = mknode(s);}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 142 "src/file.y" /* yacc.c:1646  */
    {char* t = (yyvsp[0])->token; char *s = malloc(strlen(t)+strlen("&")+1); strcat (s,"&"); strcat(s,t); (yyvsp[0])->token = s; (yyval) = (yyvsp[0]);}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 156 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("+"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 157 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("-"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 158 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("*"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 159 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("/"); addNode(&(yyval),(yyvsp[-2])); addNode(&(yyval), (yyvsp[0]));}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 160 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 166 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL"); addNode(&s,(yyvsp[-3])); node* args = mknode("ARGS"); addlist(args, (yyvsp[-1])); addNode(&s, args); addNode(&(yyval),s);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 167 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); addNode(&s,(yyvsp[-5])); node* call = mknode("FUNC_CALL"); addNode(&call,(yyvsp[-3])); node* args = mknode("ARGS"); addlist(args, (yyvsp[-1])); addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 168 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("FUNC_CALL"); addNode(&s,(yyvsp[-2])); node* args = mknode("ARGS NONE"); addNode(&s, args); addNode(&(yyval),s);}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 169 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode ("="); addNode(&s,(yyvsp[-4])); node* call = mknode("FUNC_CALL"); addNode(&call,(yyvsp[-2])); node* args = mknode("ARGS NONE"); addNode(&call, args); addNode(&s, call); addNode(&(yyval),s);}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 173 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("", (yyvsp[-1]), (yyvsp[0]));}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 178 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[-1]));}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 179 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[0]));}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 183 "src/file.y" /* yacc.c:1646  */
    {(yyval) =  mknode("BLOCK");}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 184 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); addlist(s,(yyvsp[-1])); addNode(&(yyval),s);}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 185 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-1])); addNode(&s,v); addNode(&(yyval),s);}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 186 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-2])); addNode(&s,v); addlist(s, (yyvsp[-1])); addNode(&(yyval),s);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 187 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("BLOCK"); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&(yyval),ret);}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 188 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); addlist(s,(yyvsp[-4]));node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 189 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-4])); addNode(&s,v); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 190 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("BLOCK"); node* v = mknode("VAR"); addlist(v,(yyvsp[-5])); addNode(&s,v); addlist(s, (yyvsp[-4])); node* ret = mknode("RET"); addNode(&ret,(yyvsp[-2])); addNode(&s,ret); addNode(&(yyval),s);}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 194 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE INT");}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 195 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE REAL");}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 196 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE CHAR");}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 197 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE BOOL");}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 198 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE INT*");}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 199 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE CHAR*");}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 200 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("TYPE REAL*");}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 204 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT");}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 205 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL");}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 206 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR");}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 207 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("BOOL");}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 208 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("INT*");}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 209 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("CHAR*");}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 210 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode ("REAL*");}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 214 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[0]));}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 215 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS"); addlist((yyval),(yyvsp[-2])); addlist((yyval), (yyvsp[0]));}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 216 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("ARGS NONE");}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 220 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("fd",(yyvsp[-1]),(yyvsp[0]));}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 222 "src/file.y" /* yacc.c:1646  */
    {(yyval) = integrate("fd",(yyvsp[-1]),(yyvsp[0]));}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 227 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 231 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = mknode("STRING"); addlist(s,(yyvsp[-1])); addNode(&(yyval),s);}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 235 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-1])); addNode(&(yyvsp[-3]),len); addNode(&(yyval),(yyvsp[-3]));}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 236 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-3])); addNode(&(yyvsp[-5]),len); addNode(&(yyval),(yyvsp[-5])); addlist((yyval),(yyvsp[0]));}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 237 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-3])); addNode(&(yyvsp[-5]),len); addNode(&ass,(yyvsp[-5])); addNode(&ass,(yyvsp[0]));addNode(&(yyval),ass);}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 238 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* ass = mknode("="); node* len = mknode("LENGTH"); addNode(&len,(yyvsp[-5])); addNode(&(yyvsp[-7]),len); addNode(&ass,(yyvsp[-7])); addNode(&ass,(yyvsp[-2]));addNode(&(yyval),ass); addlist((yyval),(yyvsp[0]));}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 242 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = (yyvsp[-1]); mknodelist(s, (yyvsp[0])); addNode(&(yyval),s);}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 246 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s = (yyvsp[-1]); addlist(s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 251 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); addNode(&(yyval),(yyvsp[-2])); addlist((yyval),(yyvsp[0]));}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 252 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-2])); addNode(&s,(yyvsp[0])); addNode(&(yyval),s);}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 253 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode("s"); node* s= mknode("="); addNode(&s,(yyvsp[-4])); addNode(&s,(yyvsp[-2])); addNode(&(yyval),s); addlist((yyval),(yyvsp[0]));}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 257 "src/file.y" /* yacc.c:1646  */
    {addNode(&(yyvsp[-2]),(yyvsp[0]));}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 262 "src/file.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-3]); node* index = mknode("INDEX"); addNode(&index,(yyvsp[-1])); addNode(&(yyval), index);}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 265 "src/file.y" /* yacc.c:1646  */
    { (yyval) = mknode (yytext); (yyval)->val_type = "NULL";}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 269 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "STRING";}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 273 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "CHAR";}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 277 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "INT";}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 281 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "REAL";}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 285 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "HEX";}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 289 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "BOOL";}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 293 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "BOOL";}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 297 "src/file.y" /* yacc.c:1646  */
    {(yyval) = mknode(yytext); (yyval)->val_type = "ID";}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2317 "y.tab.c" /* yacc.c:1646  */
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
#line 300 "src/file.y" /* yacc.c:1906  */


int main(){
    return yyparse();
}

int yyerror(char* s){
    printf("%s: found line:%d token [%s]\n", s, linecount, yytext);
    return 0;
}
