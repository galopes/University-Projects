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
#line 1 "jac.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdarg.h>
    #include "header.h"

    int yylex(void);
    void yyerror (const char *s);

    node *root = NULL;
    node *auxNode = NULL;
    node *auxNode2 = NULL;
    node *auxNode3 = NULL;

#line 82 "y.tab.c" /* yacc.c:339  */

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
    CLASS = 258,
    OBRACE = 259,
    SEMI = 260,
    CBRACE = 261,
    STATIC = 262,
    BOOL = 263,
    BOOLLIT = 264,
    DO = 265,
    DOTLENGTH = 266,
    DOUBLE = 267,
    ELSE = 268,
    IF = 269,
    INT = 270,
    PARSEINT = 271,
    PRINT = 272,
    PUBLIC = 273,
    RETURN = 274,
    STRING = 275,
    VOID = 276,
    WHILE = 277,
    OCURV = 278,
    CCURV = 279,
    AND = 280,
    OR = 281,
    LT = 282,
    GT = 283,
    ID = 284,
    EQ = 285,
    NEQ = 286,
    LEQ = 287,
    GEQ = 288,
    PLUS = 289,
    MINUS = 290,
    STAR = 291,
    DIV = 292,
    MOD = 293,
    NOT = 294,
    ASSIGN = 295,
    COMMA = 296,
    RESERVED = 297,
    OSQUARE = 298,
    CSQUARE = 299,
    DECLIT = 300,
    REALLIT = 301,
    STRLIT = 302,
    IFX = 303
  };
#endif
/* Tokens.  */
#define CLASS 258
#define OBRACE 259
#define SEMI 260
#define CBRACE 261
#define STATIC 262
#define BOOL 263
#define BOOLLIT 264
#define DO 265
#define DOTLENGTH 266
#define DOUBLE 267
#define ELSE 268
#define IF 269
#define INT 270
#define PARSEINT 271
#define PRINT 272
#define PUBLIC 273
#define RETURN 274
#define STRING 275
#define VOID 276
#define WHILE 277
#define OCURV 278
#define CCURV 279
#define AND 280
#define OR 281
#define LT 282
#define GT 283
#define ID 284
#define EQ 285
#define NEQ 286
#define LEQ 287
#define GEQ 288
#define PLUS 289
#define MINUS 290
#define STAR 291
#define DIV 292
#define MOD 293
#define NOT 294
#define ASSIGN 295
#define COMMA 296
#define RESERVED 297
#define OSQUARE 298
#define CSQUARE 299
#define DECLIT 300
#define REALLIT 301
#define STRLIT 302
#define IFX 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "jac.y" /* yacc.c:355  */

    struct token* value;
    struct node* node;

#line 223 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 240 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   318

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    52,    53,    54,    55,    58,    67,    70,
      71,    80,    84,    92,   100,   110,   121,   124,   125,   126,
     129,   139,   151,   152,   162,   171,   172,   181,   182,   183,
     186,   190,   195,   202,   208,   213,   217,   224,   225,   226,
     227,   228,   232,   235,   238,   239,   242,   250,   256,   264,
     268,   269,   272,   280,   283,   284,   287,   288,   289,   292,
     295,   298,   301,   304,   307,   310,   313,   316,   319,   322,
     325,   328,   331,   334,   337,   343,   346,   348,   351,   354,
     357
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "OBRACE", "SEMI", "CBRACE",
  "STATIC", "BOOL", "BOOLLIT", "DO", "DOTLENGTH", "DOUBLE", "ELSE", "IF",
  "INT", "PARSEINT", "PRINT", "PUBLIC", "RETURN", "STRING", "VOID",
  "WHILE", "OCURV", "CCURV", "AND", "OR", "LT", "GT", "ID", "EQ", "NEQ",
  "LEQ", "GEQ", "PLUS", "MINUS", "STAR", "DIV", "MOD", "NOT", "ASSIGN",
  "COMMA", "RESERVED", "OSQUARE", "CSQUARE", "DECLIT", "REALLIT", "STRLIT",
  "IFX", "$accept", "Program", "auxProgram", "FieldDecl", "auxFieldDecl",
  "MethodDecl", "MethodHeader", "MethodBody", "auxMethodBody",
  "FormalParams", "auxFormalParams", "VarDecl", "auxVarDecl", "Type",
  "Statement", "auxStatement", "Assignment", "MethodInvocation",
  "auxMethodInvocation", "ParseArgs", "Expr", "Expr2", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF -63

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-63)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,   -14,    38,    13,   -63,   -63,    89,    22,   -63,   -63,
      33,   -63,   -63,   -63,   103,   -63,   -63,   -63,    30,    56,
      32,    39,   -63,   -63,    41,   187,    62,   220,    14,    26,
     -63,    47,    46,    77,   -63,   -63,   -63,   237,    66,    73,
      74,   135,    81,   -15,   -63,    76,   -63,    80,   101,   108,
     -63,    95,   -63,    96,    82,   -63,   -63,   -63,   217,   106,
     159,    27,   138,   -63,   -63,   107,    -1,   180,   180,   180,
     -63,   -63,   -63,   -63,   -63,   127,   242,   159,    64,   159,
     -63,   -63,   -63,   -63,   -63,   -63,   104,    94,   -63,   -63,
     120,   121,   124,   112,   125,   126,   132,   133,   -63,     3,
     -63,   -63,   -63,   -63,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   136,   139,   -63,
     -63,   -63,    16,   -63,   119,   159,   237,   -63,   159,   154,
     157,   -63,   -63,   268,   256,   226,   226,   280,   280,   226,
     226,    -7,    -7,   -63,   -63,   -63,   237,   -63,    17,   -63,
     137,   142,   141,   163,   134,   -63,   -63,   -63,   -63,   159,
     -63,   -63,   174,   237,   162,   -63,   -63,   -63,   -63
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,     0,     6,     2,
       0,     4,     5,     8,     0,    27,    29,    28,     0,     0,
       0,     0,    17,    11,     9,     0,     0,     0,     0,     0,
      14,     0,     0,     0,    44,    37,    16,     0,     0,     0,
       0,     0,     0,     0,    18,     0,    19,     0,     0,     0,
      12,     0,     7,     0,     0,    15,    22,    43,     0,     0,
       0,     0,     0,    42,    77,     0,    75,     0,     0,     0,
      78,    79,    54,    56,    57,     0,    55,     0,     0,     0,
      25,    38,    39,    40,    13,    10,     0,    20,    30,    45,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      71,    72,    73,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      50,    46,     0,    21,     0,     0,     0,    53,     0,     0,
       0,    80,    76,    58,    59,    64,    62,    60,    65,    63,
      61,    66,    67,    68,    69,    70,     0,    49,     0,    24,
       0,     0,     0,    31,     0,    36,    35,    33,    48,     0,
      26,    23,     0,     0,     0,    51,    34,    32,    52
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   160,
     -63,   -63,   -63,   -10,   -34,   -63,   -26,   -25,   -63,   -24,
     -42,   -62
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    11,    28,    12,    19,    23,    26,    31,
      87,    44,   122,    32,    46,    58,    72,    73,   148,    74,
      75,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,    48,    49,    59,    20,   100,   101,   102,    78,     1,
      98,    47,    48,    49,    98,     3,    45,     5,    91,    52,
      95,   149,    78,    97,    89,    79,    78,    13,    92,   114,
     115,   116,    47,    48,    49,   117,   120,   121,     4,    79,
      14,   158,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,    53,    93,   150,   159,    21,
      22,    24,    25,    33,    27,   118,    34,    35,    36,    54,
      15,    55,    37,    64,    16,    56,    38,    17,    39,    40,
      39,    41,    57,   152,    42,    81,   154,    65,   119,    60,
       7,    43,   153,    66,     8,     9,    61,    62,    67,    68,
      47,    48,    49,    69,    77,    80,    82,    10,    96,    70,
      71,    15,   157,    83,   151,    16,    64,   165,    17,    84,
      47,    48,    49,    39,    18,    85,    86,    15,    90,   167,
      65,    16,   103,   123,    17,   124,    66,    47,    48,    49,
      63,    67,    68,   125,    64,   126,    69,    64,   127,   129,
     130,    39,    70,    71,    39,   128,   131,   132,    65,   155,
     146,    65,   156,   147,    66,   162,   160,    66,    64,    67,
      68,   161,    67,    68,    69,    39,   163,    69,   164,   166,
      70,    71,    65,    70,    71,    94,   168,    51,    66,    64,
       0,     0,     0,    67,    68,    15,    39,     0,    69,    16,
       0,     0,    17,    65,    70,    71,     0,    29,     0,    99,
       0,    30,     0,     0,    67,    68,     0,     0,    33,    69,
       0,    34,    35,    88,     0,    70,    71,    37,    15,     0,
       0,    38,    16,    39,    40,    17,    41,     0,    33,    42,
      29,    34,    35,     0,    50,     0,    43,    37,     0,     0,
       0,    38,     0,    39,    40,     0,    41,     0,     0,    42,
     112,   113,   114,   115,   116,     0,    43,   104,   105,   106,
     107,     0,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   104,     0,   106,   107,     0,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   106,   107,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   106,   107,     0,
       0,     0,   110,   111,   112,   113,   114,   115,   116
};

static const yytype_int16 yycheck[] =
{
      26,    26,    26,    37,    14,    67,    68,    69,    23,     3,
      11,    37,    37,    37,    11,    29,    26,     4,    60,     5,
      62,     5,    23,    65,    58,    40,    23,     5,     1,    36,
      37,    38,    58,    58,    58,    77,    78,    79,     0,    40,
       7,    24,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    41,    29,    41,    41,    29,
       4,    29,    23,     1,    23,     1,     4,     5,     6,    43,
       8,    24,    10,     9,    12,    29,    14,    15,    16,    17,
      16,    19,     5,   125,    22,     5,   128,    23,    24,    23,
       1,    29,   126,    29,     5,     6,    23,    23,    34,    35,
     126,   126,   126,    39,    23,    29,     5,    18,     1,    45,
      46,     8,   146,     5,   124,    12,     9,   159,    15,    24,
     146,   146,   146,    16,    21,    29,    44,     8,    22,   163,
      23,    12,     5,    29,    15,    41,    29,   163,   163,   163,
       5,    34,    35,    23,     9,    24,    39,     9,    24,    24,
      24,    16,    45,    46,    16,    43,    24,    24,    23,     5,
      24,    23,     5,    24,    29,    24,    29,    29,     9,    34,
      35,    29,    34,    35,    39,    16,    13,    39,    44,     5,
      45,    46,    23,    45,    46,    47,    24,    27,    29,     9,
      -1,    -1,    -1,    34,    35,     8,    16,    -1,    39,    12,
      -1,    -1,    15,    23,    45,    46,    -1,    20,    -1,    29,
      -1,    24,    -1,    -1,    34,    35,    -1,    -1,     1,    39,
      -1,     4,     5,     6,    -1,    45,    46,    10,     8,    -1,
      -1,    14,    12,    16,    17,    15,    19,    -1,     1,    22,
      20,     4,     5,    -1,    24,    -1,    29,    10,    -1,    -1,
      -1,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,
      34,    35,    36,    37,    38,    -1,    29,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    27,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    50,    29,     0,     4,    51,     1,     5,     6,
      18,    52,    54,     5,     7,     8,    12,    15,    21,    55,
      62,    29,     4,    56,    29,    23,    57,    23,    53,    20,
      24,    58,    62,     1,     4,     5,     6,    10,    14,    16,
      17,    19,    22,    29,    60,    62,    63,    65,    66,    68,
      24,    58,     5,    41,    43,    24,    29,     5,    64,    63,
      23,    23,    23,     5,     9,    23,    29,    34,    35,    39,
      45,    46,    65,    66,    68,    69,    70,    23,    23,    40,
      29,     5,     5,     5,    24,    29,    44,    59,     6,    63,
      22,    69,     1,    29,    47,    69,     1,    69,    11,    29,
      70,    70,    70,     5,    25,    26,    27,    28,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    69,     1,    24,
      69,    69,    61,    29,    41,    23,    24,    24,    43,    24,
      24,    24,    24,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    24,    24,    67,     5,
      41,    62,    69,    63,    69,     5,     5,    63,    24,    41,
      29,    29,    24,    13,    44,    69,     5,    63,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    51,    52,    52,    53,
      53,    54,    55,    55,    55,    55,    56,    57,    57,    57,
      58,    58,    59,    59,    60,    61,    61,    62,    62,    62,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    65,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     2,     2,     6,     2,     0,
       3,     4,     4,     5,     4,     5,     3,     0,     2,     2,
       3,     4,     0,     4,     4,     0,     3,     1,     1,     1,
       3,     5,     7,     5,     7,     5,     5,     1,     2,     2,
       2,     3,     2,     2,     0,     2,     3,     3,     5,     4,
       0,     3,     7,     4,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     1,     3,     1,     1,     1,
       3
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
#line 45 "jac.y" /* yacc.c:1646  */
    {root = createNode("Program", NULL, 0, 0);
                                                            auxNode = createNode("Id", (yyvsp[-3].value)->value, (yyvsp[-3].value)->line, (yyvsp[-3].value)->colunm);
                                                            insertChildren(root, auxNode);
                                                            insertBrother(auxNode, (yyvsp[-1].node));

                                                            freeToken((yyvsp[-3].value));}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 52 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("NULL", NULL, 0, 0);}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 53 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node); insertBrother((yyvsp[-1].node), (yyvsp[0].node));}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 54 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node); insertBrother((yyvsp[-1].node), (yyvsp[0].node));}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 55 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 58 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("FieldDecl", NULL, 0, 0);
                                                            insertChildren((yyval.node), (yyvsp[-3].node));
                                                            auxNode = createNode("Id", (yyvsp[-2].value)->value, (yyvsp[-2].value)->line, (yyvsp[-2].value)->colunm);
                                                            insertBrother((yyvsp[-3].node), auxNode);
                                                            atributeType((yyvsp[-3].node), (yyvsp[-1].node));
                                                            insertBrother((yyval.node), (yyvsp[-1].node));

                                                            freeToken((yyvsp[-2].value));}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Error", NULL, 0, 0);}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("NULL", NULL, 0, 0);}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("FieldDecl", NULL, 0, 0);
                                                            insertBrother((yyvsp[-2].node), (yyval.node));
                                                            auxNode = createNode("Id", (yyvsp[0].value)->value, (yyvsp[0].value)->line, (yyvsp[0].value)->colunm);
                                                            insertChildren((yyval.node), auxNode);
                                                            (yyval.node) = (yyvsp[-2].node); 

                                                            freeToken((yyvsp[0].value));}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 80 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("MethodDecl", NULL, 0, 0);
                                                            insertChildren((yyval.node), (yyvsp[-1].node));
                                                            insertBrother((yyvsp[-1].node), (yyvsp[0].node));}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 84 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("MethodHeader", NULL, 0, 0);
                                                            insertChildren((yyval.node), (yyvsp[-3].node));
                                                            auxNode = createNode("Id", (yyvsp[-2].value)->value, (yyvsp[-2].value)->line, (yyvsp[-2].value)->colunm);
                                                            insertBrother((yyvsp[-3].node), auxNode);
                                                            insertBrother(auxNode, createNode("MethodParams", NULL, 0, 0));
                                                            
                                                            freeToken((yyvsp[-2].value));}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 92 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("MethodHeader", NULL, 0, 0);
                                                            insertChildren((yyval.node), (yyvsp[-4].node));
                                                            auxNode = createNode("Id", (yyvsp[-3].value)->value, (yyvsp[-3].value)->line, (yyvsp[-3].value)->colunm);
                                                            insertBrother((yyvsp[-4].node), auxNode);
                                                            insertBrother(auxNode, (yyvsp[-1].node));

                                                            freeToken((yyvsp[-3].value));}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 100 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("MethodHeader", NULL, 0, 0);
                                                            auxNode = createNode("Void", NULL, (yyvsp[-3].value)->line, (yyvsp[-3].value)->colunm);
                                                            insertChildren((yyval.node), auxNode);
                                                            auxNode2 = createNode("Id", (yyvsp[-2].value)->value, (yyvsp[-2].value)->line, (yyvsp[-2].value)->colunm);
                                                            insertBrother(auxNode, auxNode2);
                                                            insertBrother(auxNode2, createNode("MethodParams", NULL, 0, 0));
                                                            
                                                            freeToken((yyvsp[-3].value));
                                                            freeToken((yyvsp[-2].value));}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 110 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("MethodHeader", NULL, 0, 0);
                                                            auxNode = createNode("Void", NULL, (yyvsp[-4].value)->line, (yyvsp[-4].value)->colunm);
                                                            insertChildren((yyval.node), auxNode);
                                                            auxNode2 = createNode("Id", (yyvsp[-3].value)->value, (yyvsp[-3].value)->line, (yyvsp[-3].value)->colunm);
                                                            insertBrother(auxNode, auxNode2);
                                                            insertBrother(auxNode2, (yyvsp[-1].node));

                                                            freeToken((yyvsp[-4].value));
                                                            freeToken((yyvsp[-3].value));}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 121 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("MethodBody", NULL, 0, 0);
                                                            insertChildren((yyval.node), (yyvsp[-1].node));}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 124 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("NULL", NULL, 0, 0);}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 125 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node); insertBrother((yyvsp[-1].node), (yyvsp[0].node));}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 126 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node); insertBrother((yyvsp[-1].node), (yyvsp[0].node));}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 129 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("MethodParams", NULL, 0, 0);
                                                            auxNode = createNode("ParamDecl", NULL, 0, 0);
                                                            insertChildren((yyval.node), auxNode);
                                                            auxNode2 = createNode("Id", (yyvsp[-1].value)->value, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertBrother((yyvsp[-2].node), auxNode2);
                                                            insertChildren(auxNode, (yyvsp[-2].node));
                                                            insertBrother(auxNode, (yyvsp[0].node));

                                                            freeToken((yyvsp[-1].value));}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 139 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("MethodParams", NULL, 0, 0);
                                                            auxNode = createNode("ParamDecl", NULL, 0, 0);
                                                            insertChildren((yyval.node), auxNode);
                                                            auxNode2 = createNode("StringArray", NULL, (yyvsp[-3].value)->line, (yyvsp[-3].value)->colunm);
                                                            insertChildren(auxNode, auxNode2);
                                                            auxNode3 = createNode("Id", (yyvsp[0].value)->value, (yyvsp[0].value)->line, (yyvsp[0].value)->colunm);
                                                            insertBrother(auxNode2, auxNode3);

                                                            freeToken((yyvsp[-3].value));
                                                            freeToken((yyvsp[0].value));}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 151 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("NULL", NULL, 0, 0);}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 152 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("ParamDecl", NULL, 0, 0);
                                                            auxNode = createNode("Id", (yyvsp[0].value)->value, (yyvsp[0].value)->line, (yyvsp[0].value)->colunm);
                                                            insertChildren((yyval.node), (yyvsp[-1].node));
                                                            insertBrother((yyvsp[-1].node), auxNode);
                                                            insertBrother((yyvsp[-3].node), (yyval.node));
                                                            (yyval.node) = (yyvsp[-3].node);

                                                            freeToken((yyvsp[0].value));}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 162 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("VarDecl", NULL, 0, 0);
                                                            insertChildren((yyval.node), (yyvsp[-3].node));
                                                            auxNode = createNode("Id", (yyvsp[-2].value)->value, (yyvsp[-2].value)->line, (yyvsp[-2].value)->colunm);
                                                            insertBrother((yyvsp[-3].node), auxNode);
                                                            atributeType((yyvsp[-3].node), (yyvsp[-1].node));
                                                            insertBrother((yyval.node), (yyvsp[-1].node));

                                                            freeToken((yyvsp[-2].value));}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 171 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("NULL", NULL, 0, 0);}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 172 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("VarDecl", NULL, 0, 0);
                                                            auxNode = createNode("Id", (yyvsp[0].value)->value, (yyvsp[0].value)->line, (yyvsp[0].value)->colunm);
                                                            insertChildren((yyval.node), auxNode);
                                                            insertBrother((yyvsp[-2].node), (yyval.node));
                                                            (yyval.node) = (yyvsp[-2].node);

                                                            freeToken((yyvsp[0].value));}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 181 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Bool", NULL, 0, 0);}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 182 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Int", NULL, 0, 0);}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 183 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Double", NULL, 0, 0);}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 186 "jac.y" /* yacc.c:1646  */
    {if(addBlock((yyvsp[-1].node))>2){(yyval.node) = createNode("Block", NULL, 0, 0); insertChildren((yyval.node), (yyvsp[-1].node));}
                                                            else if(addBlock((yyvsp[-1].node))==0){(yyval.node) = NULL; clearAST((yyvsp[-1].node));}
                                                            else{(yyval.node) = (yyvsp[-1].node);}}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 190 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("If",NULL, (yyvsp[-4].value)->line, (yyvsp[-4].value)->colunm); 
                                                            if((yyvsp[0].node) == NULL){auxNode=createNode("Block",NULL, 0, 0); insertBrother((yyvsp[-2].node), auxNode);}
                                                            else{insertBrother((yyvsp[-2].node),(yyvsp[0].node));} insertBrother((yyvsp[-2].node), createNode("Block",NULL, 0, 0)); insertChildren((yyval.node),(yyvsp[-2].node));
                                                            freeToken((yyvsp[-4].value));}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 195 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("If", NULL, (yyvsp[-6].value)->line, (yyvsp[-6].value)->colunm); 
                                                            if((yyvsp[-2].node) == NULL){auxNode=createNode("Block", NULL, 0, 0); insertBrother((yyvsp[-4].node), auxNode);}
                                                            else{insertBrother((yyvsp[-4].node), (yyvsp[-2].node));}
                                                            if((yyvsp[0].node) == NULL){auxNode = createNode("Block", NULL, 0, 0); insertBrother((yyvsp[-4].node), auxNode);}
                                                            else{insertBrother((yyvsp[-4].node), (yyvsp[0].node));} insertChildren((yyval.node),(yyvsp[-4].node));
                                                            freeToken((yyvsp[-6].value));}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 202 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("While",NULL, (yyvsp[-4].value)->line, (yyvsp[-4].value)->colunm);
                                                            if((yyvsp[0].node) == NULL){auxNode=createNode("Block",NULL, 0, 0); insertBrother((yyvsp[-2].node), auxNode);}
                                                            else{insertBrother((yyvsp[-2].node),(yyvsp[0].node));}
                                                            insertChildren((yyval.node),(yyvsp[-2].node));
                                                            freeToken((yyvsp[-4].value));}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 208 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("DoWhile", NULL, (yyvsp[-4].value)->line, (yyvsp[-4].value)->colunm);
                                                            if((yyvsp[-5].node) == NULL){auxNode = createNode("Block", NULL, 0, 0); insertBrother(auxNode, (yyvsp[-2].node)); insertChildren((yyval.node), auxNode);}
                                                            else{insertBrother((yyvsp[-5].node), (yyvsp[-2].node));}  insertChildren((yyval.node), (yyvsp[-5].node));
                                                            freeToken((yyvsp[-4].value));}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 213 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Print", NULL, (yyvsp[-4].value)->line, (yyvsp[-4].value)->colunm);
                                                            insertChildren((yyval.node), (yyvsp[-2].node));
                                                            freeToken((yyvsp[-4].value));}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 217 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Print", NULL, (yyvsp[-4].value)->line, (yyvsp[-4].value)->colunm);
                                                            auxNode = createNode("StrLit", (yyvsp[-2].value)->value, (yyvsp[-2].value)->line, (yyvsp[-2].value)->colunm);
                                                            insertChildren((yyval.node), auxNode);

                                                            freeToken((yyvsp[-4].value));
                                                            freeToken((yyvsp[-2].value));}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 224 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 225 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 226 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 227 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 228 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Return", NULL, (yyvsp[-2].value)->line, (yyvsp[-2].value)->colunm);
                                                            insertChildren((yyval.node), (yyvsp[-1].node));
                                                            freeToken((yyvsp[-2].value));}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 232 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Return", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            freeToken((yyvsp[-1].value));}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 235 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Error", NULL, 0, 0);}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 238 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("NULL", NULL, 0, 0);}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 239 "jac.y" /* yacc.c:1646  */
    {insertBrother((yyvsp[-1].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-1].node);}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 242 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Assign", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            auxNode = createNode("Id", (yyvsp[-2].value)->value, (yyvsp[-2].value)->line, (yyvsp[-2].value)->colunm);
                                                            insertChildren((yyval.node), auxNode);
                                                            insertBrother(auxNode, (yyvsp[0].node));

                                                            freeToken((yyvsp[-1].value));
                                                            freeToken((yyvsp[-2].value));}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 250 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Call", NULL, (yyvsp[-2].value)->line, (yyvsp[-2].value)->colunm);
                                                            auxNode = createNode("Id", (yyvsp[-2].value)->value, (yyvsp[-2].value)->line, (yyvsp[-2].value)->colunm);
                                                            insertChildren((yyval.node), auxNode);

                                                            freeToken((yyvsp[-2].value));}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 256 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Call", NULL, (yyvsp[-4].value)->line, (yyvsp[-4].value)->colunm);
                                                            auxNode = createNode("Id", (yyvsp[-4].value)->value, (yyvsp[-4].value)->line, (yyvsp[-4].value)->colunm);
                                                            insertChildren((yyval.node), auxNode);
                                                            insertBrother(auxNode, (yyvsp[-2].node));
                                                            insertBrother(auxNode, (yyvsp[-1].node));

                                                            freeToken((yyvsp[-4].value));}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 264 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Error", NULL, 0, 0); 
                                                            freeToken((yyvsp[-3].value));}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 268 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("NULL", NULL, 0, 0);}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 269 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-2].node); insertBrother((yyvsp[-2].node), (yyvsp[0].node));}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 272 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("ParseArgs", NULL, (yyvsp[-6].value)->line, (yyvsp[-6].value)->colunm);
                                                            auxNode = createNode("Id", (yyvsp[-4].value)->value, (yyvsp[-4].value)->line, (yyvsp[-4].value)->colunm);
                                                            insertChildren((yyval.node), auxNode);
                                                            insertBrother(auxNode, (yyvsp[-2].node));

                                                            freeToken((yyvsp[-6].value));
                                                            freeToken((yyvsp[-4].value));}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 280 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Error", NULL, 0, 0);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 283 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 284 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 287 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 288 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 289 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("And", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 292 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Or", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 295 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Eq", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 298 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Geq", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 301 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Gt", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 304 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Leq", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 307 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Lt", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 310 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Neq", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 313 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Add", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 316 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Sub", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 319 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Mul", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 322 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Div", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 325 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Mod", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[-2].node)); insertBrother((yyvsp[-2].node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 328 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Plus", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 331 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Minus", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 334 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Not", NULL, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node),(yyvsp[0].node)); freeToken((yyvsp[-1].value));}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 337 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Length", NULL, (yyvsp[0].value)->line, (yyvsp[0].value)->colunm);
                                                            auxNode = createNode("Id", (yyvsp[-1].value)->value, (yyvsp[-1].value)->line, (yyvsp[-1].value)->colunm);
                                                            insertChildren((yyval.node), auxNode);
                                                            
                                                            freeToken((yyvsp[0].value)); freeToken((yyvsp[-1].value));}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 343 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Id", (yyvsp[0].value)->value, (yyvsp[0].value)->line, (yyvsp[0].value)->colunm);
                                                            freeToken((yyvsp[0].value));}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 346 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 348 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("BoolLit", (yyvsp[0].value)->value, (yyvsp[0].value)->line, (yyvsp[0].value)->colunm); 
                                                            freeToken((yyvsp[0].value));}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 351 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("DecLit", (yyvsp[0].value)->value, (yyvsp[0].value)->line, (yyvsp[0].value)->colunm);
                                                            freeToken((yyvsp[0].value));}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 354 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("RealLit", (yyvsp[0].value)->value, (yyvsp[0].value)->line, (yyvsp[0].value)->colunm);
                                                            freeToken((yyvsp[0].value));}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 357 "jac.y" /* yacc.c:1646  */
    {(yyval.node) = createNode("Error", NULL, 0, 0);}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2093 "y.tab.c" /* yacc.c:1646  */
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
#line 360 "jac.y" /* yacc.c:1906  */

