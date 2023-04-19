/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	#include <stdio.h>
	#include <stdlib.h>
	int yylex(void);
	int yyerror(char* s);

#line 77 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    TINTEGER = 258,
    TREAL = 259,
    TIDENTIFIER = 260,
    TSTRING = 261,
    TBREAK = 262,
    TCASE = 263,
    TDEFAULT = 264,
    TDO = 265,
    TELSE = 266,
    TFOR = 267,
    TIF = 268,
    TRETURN = 269,
    TSWITCH = 270,
    TWHILE = 271,
    TCHAR = 272,
    TFLOAT = 273,
    TINT = 274,
    TVOID = 275,
    EQUAL = 276,
    INC = 277,
    DEC = 278,
    GE = 279,
    LE = 280,
    NE = 281,
    PE = 282,
    ME = 283,
    MTE = 284,
    DE = 285,
    MODE = 286,
    AND = 287,
    OR = 288,
    TERROR = 289,
    TCOMMENT = 290
  };
#endif
/* Tokens.  */
#define TINTEGER 258
#define TREAL 259
#define TIDENTIFIER 260
#define TSTRING 261
#define TBREAK 262
#define TCASE 263
#define TDEFAULT 264
#define TDO 265
#define TELSE 266
#define TFOR 267
#define TIF 268
#define TRETURN 269
#define TSWITCH 270
#define TWHILE 271
#define TCHAR 272
#define TFLOAT 273
#define TINT 274
#define TVOID 275
#define EQUAL 276
#define INC 277
#define DEC 278
#define GE 279
#define LE 280
#define NE 281
#define PE 282
#define ME 283
#define MTE 284
#define DE 285
#define MODE 286
#define AND 287
#define OR 288
#define TERROR 289
#define TCOMMENT 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 7 "parser.y"

	int iVal;
	float rVal;
	char* idVal;
	char* sVal;

#line 206 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   323

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

#define YYUNDEFTOK  2
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    52,     2,     2,
      36,    37,    50,    48,    39,    49,     2,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    38,
      46,    45,    47,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    26,    27,    30,    31,    34,    35,    36,
      37,    40,    41,    42,    45,    46,    49,    51,    53,    54,
      57,    59,    60,    61,    64,    65,    67,    68,    71,    72,
      75,    76,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    90,    91,    92,    93,    96,    98,    99,   102,   103,
     106,   107,   110,   112,   113,   116,   117,   119,   120,   121,
     122,   123,   124,   127,   128,   131,   132,   135,   136,   139,
     140,   141,   142,   143,   144,   145,   148,   149,   150,   153,
     154,   155,   156,   159,   160,   161,   162,   163,   164,   165,
     168,   169,   172,   173,   176,   178,   180,   182,   184,   186,
     188,   189,   192,   193,   194,   195
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TINTEGER", "TREAL", "TIDENTIFIER",
  "TSTRING", "TBREAK", "TCASE", "TDEFAULT", "TDO", "TELSE", "TFOR", "TIF",
  "TRETURN", "TSWITCH", "TWHILE", "TCHAR", "TFLOAT", "TINT", "TVOID",
  "EQUAL", "INC", "DEC", "GE", "LE", "NE", "PE", "ME", "MTE", "DE", "MODE",
  "AND", "OR", "TERROR", "TCOMMENT", "'('", "')'", "';'", "','", "'{'",
  "'}'", "'['", "']'", "':'", "'='", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "$accept", "Program", "DecList", "Dec", "FuncDec",
  "Params", "ParamList", "Param", "CpndStmt", "LDecList", "VarDec",
  "VarType", "IDs", "Value", "StmtList", "Stmt", "MatchedStmt", "OpenStmt",
  "SwitchStmt", "CaseList", "DefaultCase", "ReturnStmt", "BreakStmt",
  "ExprStmt", "Expr", "AssignExpr", "Variable", "SimpleExpr", "AndExpr",
  "RelExpr", "AddExpr", "Term", "Factor", "NumberLiteral", "IncDec",
  "WhileMatchedStmt", "WhileOpenStmt", "DoWhileStmt", "ForMatchedStmt",
  "ForOpenStmt", "FunCall", "Arguments", "ArgumentList", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    40,    41,    59,    44,
     123,   125,    91,    93,    58,    61,    60,    62,    43,    45,
      42,    47,    37
};
# endif

#define YYPACT_NINF (-192)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     138,  -192,  -192,  -192,    -3,     6,   138,  -192,  -192,  -192,
      21,     8,  -192,  -192,   -25,    43,  -192,   170,   170,    64,
    -192,    41,  -192,    38,    49,  -192,    41,    40,    61,    79,
    -192,   -22,    80,  -192,   -18,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,    80,  -192,    41,   112,  -192,  -192,   -21,    85,
     207,    93,    97,    69,   100,   113,  -192,  -192,   274,  -192,
    -192,   274,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
     121,  -192,    56,   118,   116,    -9,   115,  -192,  -192,   155,
    -192,  -192,  -192,  -192,  -192,  -192,   266,   274,  -192,   154,
     274,   274,  -192,   137,   274,   274,   140,    72,  -192,  -192,
     274,   274,   274,   274,   274,   274,  -192,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   136,
    -192,  -192,  -192,   149,   156,   150,   158,   159,   161,  -192,
     162,   163,  -192,  -192,  -192,  -192,  -192,  -192,  -192,   164,
     116,    -9,    -9,    -9,    -9,    -9,    -9,   115,   115,  -192,
    -192,  -192,  -192,   270,  -192,   274,   274,   169,   166,   207,
     274,  -192,  -192,   165,   175,   245,  -192,   190,   195,  -192,
    -192,   116,   177,   274,   168,   172,   180,  -192,    19,   221,
     130,  -192,   188,   274,   274,   274,   191,   192,   196,  -192,
     182,   228,   189,   193,   207,   197,   199,   200,   274,   274,
     274,  -192,   194,  -192,  -192,  -192,  -192,   274,   229,   245,
     201,   204,   205,   207,  -192,   207,   206,   274,   207,    19,
     207,   274,   208,   214,   274,   245,   216,    19
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    22,    23,    21,     0,     0,     2,     4,     6,     5,
       0,     0,     1,     3,    27,     0,    25,    13,    13,     0,
      20,     0,    12,     0,    11,    15,     0,     0,     0,    27,
      24,     0,     0,    16,     0,    26,    10,    19,     9,    14,
       8,     7,    29,    18,     0,     0,    90,    91,    64,     0,
       0,     0,     0,     0,     0,     0,    92,    93,     0,    54,
      17,     0,    37,    28,    30,    31,    39,    36,    38,    32,
       0,    55,    86,    56,    66,    75,    78,    82,    89,     0,
      34,    42,    35,    33,    41,    84,   101,     0,    52,     0,
       0,     0,    51,     0,     0,     0,     0,    86,    85,    53,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      88,   105,   104,     0,   100,     0,     0,     0,     0,    50,
       0,     0,    83,    58,    59,    60,    61,    62,    57,    65,
      68,    73,    72,    70,    74,    69,    71,    76,    77,    79,
      80,    81,    99,     0,    63,     0,     0,     0,     0,     0,
       0,   103,   102,     0,     0,     0,    43,    30,     0,    94,
      95,    67,     0,     0,     0,     0,     0,    40,     0,     0,
      49,    96,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    29,    45,    97,    98,     0,     0,     0,
       0,     0,     0,    47,    29,    48,     0,     0,     0,     0,
      46,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,  -192,   248,  -192,   244,  -192,   231,    59,  -192,
     222,     3,  -192,    -2,  -191,   -49,  -129,  -151,  -192,  -192,
    -192,  -192,  -192,  -192,   -53,  -192,   -54,  -192,  -192,   -94,
       1,    29,   -47,  -192,   -68,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    23,    24,    25,    62,    42,
       9,    26,    15,    16,    45,    63,    64,    65,    66,   180,
     193,    67,    68,    69,    70,    71,    72,    73,   139,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   123,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      93,    89,    11,    10,   106,    96,    12,    97,   170,    10,
     213,    18,   215,   140,    98,    86,    36,    19,    37,    30,
      40,    87,    37,   220,    33,   120,    14,   189,   167,   106,
     169,   186,   187,   122,   125,   188,   177,   127,   128,   114,
     115,   130,   131,   206,    17,    44,    29,   133,   134,   135,
     136,   137,   138,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,   205,   171,    28,   170,   149,
     150,   151,    46,    47,    48,    31,   206,    34,    56,    57,
     169,    20,    21,   100,   101,   102,   103,   104,    32,   167,
      38,    56,    57,    41,    56,    57,   205,     1,     2,     3,
     162,   105,   163,   164,    35,    58,    97,    92,   166,   141,
     142,   143,   144,   145,   146,    46,    47,    48,    61,    49,
     182,    19,    50,    88,    51,    52,    53,    54,    55,    90,
     195,   196,   197,    91,    56,    57,    94,   108,   191,   192,
     109,   110,   111,   147,   148,   210,   211,   212,    58,    95,
      59,   107,    37,    60,   216,     1,     2,     3,     4,    99,
     119,    61,   112,   113,   222,   116,   117,   118,   223,   166,
     126,   226,    46,    47,    48,   129,    49,   132,    87,    50,
     165,    51,    52,    53,    54,    55,   152,     1,     2,     3,
      22,    56,    57,   154,   155,   153,   160,   156,   157,   158,
     159,   178,   172,   179,   183,    58,   168,    59,   184,    37,
      46,    47,    48,   173,    49,   181,   185,    50,    61,    51,
      52,    53,    54,    55,   190,   194,   201,   198,   199,    56,
      57,   202,   200,   203,   204,   207,   208,   209,   214,   217,
     165,   218,   219,    58,   221,    59,   224,    37,    46,    47,
      48,   225,    49,   227,    13,    50,    61,   174,   175,    53,
      54,   176,    27,    39,    43,     0,     0,    56,    57,    46,
      47,    48,   121,    46,    47,    48,   161,    46,    47,    48,
       0,    58,     0,    59,     0,    37,     0,     0,    56,    57,
       0,     0,    56,    57,    61,     0,    56,    57,     0,     0,
       0,     0,    58,     0,     0,     0,    58,     0,     0,     0,
      58,     0,     0,     0,     0,    61,     0,     0,     0,    61,
       0,     0,     0,    61
};

static const yytype_int16 yycheck[] =
{
      53,    50,     5,     0,    72,    58,     0,    61,   159,     6,
     201,    36,   203,   107,    61,    36,    38,    42,    40,    21,
      38,    42,    40,   214,    26,    79,     5,   178,   157,    97,
     159,    12,    13,    86,    87,    16,   165,    90,    91,    48,
      49,    94,    95,   194,    36,    42,     5,   100,   101,   102,
     103,   104,   105,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   194,   160,     3,   219,   116,
     117,   118,     3,     4,     5,    37,   227,    37,    22,    23,
     209,    38,    39,    27,    28,    29,    30,    31,    39,   218,
      31,    22,    23,    34,    22,    23,   225,    17,    18,    19,
     153,    45,   155,   156,    43,    36,   160,    38,   157,   108,
     109,   110,   111,   112,   113,     3,     4,     5,    49,     7,
     173,    42,    10,    38,    12,    13,    14,    15,    16,    36,
     183,   184,   185,    36,    22,    23,    36,    21,     8,     9,
      24,    25,    26,   114,   115,   198,   199,   200,    36,    36,
      38,    33,    40,    41,   207,    17,    18,    19,    20,    38,
       5,    49,    46,    47,   217,    50,    51,    52,   221,   218,
      16,   224,     3,     4,     5,    38,     7,    37,    42,    10,
      11,    12,    13,    14,    15,    16,    37,    17,    18,    19,
      20,    22,    23,    43,    36,    39,    32,    38,    37,    37,
      37,    11,    37,     8,    36,    36,    40,    38,    36,    40,
       3,     4,     5,    38,     7,    38,    36,    10,    49,    12,
      13,    14,    15,    16,     3,    37,    44,    36,    36,    22,
      23,     3,    36,    44,    41,    38,    37,    37,    44,    38,
      11,    37,    37,    36,    38,    38,    38,    40,     3,     4,
       5,    37,     7,    37,     6,    10,    49,    12,    13,    14,
      15,    16,    18,    32,    42,    -1,    -1,    22,    23,     3,
       4,     5,     6,     3,     4,     5,     6,     3,     4,     5,
      -1,    36,    -1,    38,    -1,    40,    -1,    -1,    22,    23,
      -1,    -1,    22,    23,    49,    -1,    22,    23,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    18,    19,    20,    54,    55,    56,    57,    63,
      64,     5,     0,    56,     5,    65,    66,    36,    36,    42,
      38,    39,    20,    58,    59,    60,    64,    58,     3,     5,
      66,    37,    39,    66,    37,    43,    38,    40,    61,    60,
      38,    61,    62,    63,    64,    67,     3,     4,     5,     7,
      10,    12,    13,    14,    15,    16,    22,    23,    36,    38,
      41,    49,    61,    68,    69,    70,    71,    74,    75,    76,
      77,    78,    79,    80,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    36,    42,    38,    68,
      36,    36,    38,    77,    36,    36,    77,    79,    85,    38,
      27,    28,    29,    30,    31,    45,    87,    33,    21,    24,
      25,    26,    46,    47,    48,    49,    50,    51,    52,     5,
      79,     6,    77,    94,    95,    77,    16,    77,    77,    38,
      77,    77,    37,    77,    77,    77,    77,    77,    77,    81,
      82,    83,    83,    83,    83,    83,    83,    84,    84,    85,
      85,    85,    37,    39,    43,    36,    38,    37,    37,    37,
      32,     6,    77,    77,    77,    11,    68,    69,    40,    69,
      70,    82,    37,    38,    12,    13,    16,    69,    11,     8,
      72,    38,    77,    36,    36,    36,    12,    13,    16,    70,
       3,     8,     9,    73,    37,    77,    77,    77,    36,    36,
      36,    44,     3,    44,    41,    69,    70,    38,    37,    37,
      77,    77,    77,    67,    44,    67,    77,    38,    37,    37,
      67,    38,    77,    77,    38,    37,    77,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    57,    57,    57,
      57,    58,    58,    58,    59,    59,    60,    61,    62,    62,
      63,    64,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    71,    72,    72,    73,    73,
      74,    74,    75,    76,    76,    77,    77,    78,    78,    78,
      78,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    83,    84,
      84,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    87,    88,    89,    90,    91,    92,    93,
      94,    94,    95,    95,    95,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     6,     6,
       6,     1,     1,     0,     3,     1,     2,     4,     2,     0,
       3,     1,     1,     1,     3,     1,     4,     1,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     1,     1,     5,     7,     8,     5,     4,     3,     0,
       3,     2,     2,     2,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     4,     1,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     5,     5,     7,     9,     9,     4,
       1,     0,     3,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 24 "parser.y"
                                {printf("Program -> DecList\n");}
#line 1557 "y.tab.c"
    break;

  case 3:
#line 26 "parser.y"
                        {printf("DecList -> DecList Dec\n");}
#line 1563 "y.tab.c"
    break;

  case 4:
#line 27 "parser.y"
                                        {printf("DecList -> Dec\n");}
#line 1569 "y.tab.c"
    break;

  case 5:
#line 30 "parser.y"
                                {printf("Dec -> VarDec\n");}
#line 1575 "y.tab.c"
    break;

  case 6:
#line 31 "parser.y"
                                        {printf("Dec -> FuncDec\n");}
#line 1581 "y.tab.c"
    break;

  case 7:
#line 34 "parser.y"
                                                                {printf("FuncDec -> VarType %s ( Params ) CpndStmt\n", (yyvsp[-4].idVal));}
#line 1587 "y.tab.c"
    break;

  case 8:
#line 35 "parser.y"
                                                                        {printf("FuncDec -> VarType %s ( Params );\n", (yyvsp[-4].idVal));}
#line 1593 "y.tab.c"
    break;

  case 9:
#line 36 "parser.y"
                                                                                {printf("FuncDec -> void %s ( Params ) CpndStmt\n", (yyvsp[-4].idVal));}
#line 1599 "y.tab.c"
    break;

  case 10:
#line 37 "parser.y"
                                                                                {printf("FuncDec -> void %s ( Params )\n", (yyvsp[-4].idVal));}
#line 1605 "y.tab.c"
    break;

  case 11:
#line 40 "parser.y"
                                {printf("Params -> ParamList\n");}
#line 1611 "y.tab.c"
    break;

  case 12:
#line 41 "parser.y"
                                {printf("Params -> void\n");}
#line 1617 "y.tab.c"
    break;

  case 13:
#line 42 "parser.y"
                                        {printf("Params -> Empty\n");}
#line 1623 "y.tab.c"
    break;

  case 14:
#line 45 "parser.y"
                                        {printf("ParamList -> ParamList , Param\n");}
#line 1629 "y.tab.c"
    break;

  case 15:
#line 46 "parser.y"
                                                                {printf("ParamList -> Param\n");}
#line 1635 "y.tab.c"
    break;

  case 16:
#line 49 "parser.y"
                                                {printf("Param -> VarType Value\n");}
#line 1641 "y.tab.c"
    break;

  case 17:
#line 51 "parser.y"
                                        {printf("{ LDecList StmtList }\n");}
#line 1647 "y.tab.c"
    break;

  case 18:
#line 53 "parser.y"
                                {printf("LDecList -> LDecList VarDec\n");}
#line 1653 "y.tab.c"
    break;

  case 19:
#line 54 "parser.y"
                                                        {printf("LDecList -> Empty\n");}
#line 1659 "y.tab.c"
    break;

  case 20:
#line 57 "parser.y"
                                {printf("VarDec -> VarType IDs ; \n");}
#line 1665 "y.tab.c"
    break;

  case 21:
#line 59 "parser.y"
                                {printf("VarType -> int\n");}
#line 1671 "y.tab.c"
    break;

  case 22:
#line 60 "parser.y"
                                        {printf("VarType -> char\n");}
#line 1677 "y.tab.c"
    break;

  case 23:
#line 61 "parser.y"
                                        {printf("VarType -> float\n");}
#line 1683 "y.tab.c"
    break;

  case 24:
#line 64 "parser.y"
                                {printf("IDs -> IDs , Value\n");}
#line 1689 "y.tab.c"
    break;

  case 25:
#line 65 "parser.y"
                                        {printf("IDs -> Value\n");}
#line 1695 "y.tab.c"
    break;

  case 26:
#line 67 "parser.y"
                                        {printf("Value -> %s [ %d ] \n", (yyvsp[-3].idVal), (yyvsp[-1].iVal));}
#line 1701 "y.tab.c"
    break;

  case 27:
#line 68 "parser.y"
                                                                {printf("Value -> %s\n", (yyvsp[0].idVal));}
#line 1707 "y.tab.c"
    break;

  case 28:
#line 71 "parser.y"
                                                        {printf("StmtList -> StmtList Stmt\n");}
#line 1713 "y.tab.c"
    break;

  case 29:
#line 72 "parser.y"
                                                                                {printf("StmtList -> Empty\n");}
#line 1719 "y.tab.c"
    break;

  case 30:
#line 75 "parser.y"
                                                                {printf("Stmt -> MatchedStmt\n");}
#line 1725 "y.tab.c"
    break;

  case 31:
#line 76 "parser.y"
                                                                        {printf("Stmt -> OpenStmt\n");}
#line 1731 "y.tab.c"
    break;

  case 32:
#line 79 "parser.y"
                                                                        {printf("MatchedStmt -> ExprStmt\n");}
#line 1737 "y.tab.c"
    break;

  case 33:
#line 80 "parser.y"
                                                                                {printf("MatchedStmt -> ForMatchedStmt\n");}
#line 1743 "y.tab.c"
    break;

  case 34:
#line 81 "parser.y"
                                                                                {printf("MatchedStmt -> WhileMatchedStmt\n");}
#line 1749 "y.tab.c"
    break;

  case 35:
#line 82 "parser.y"
                                                                                {printf("MatchedStmt -> DoWhileStmt\n");}
#line 1755 "y.tab.c"
    break;

  case 36:
#line 83 "parser.y"
                                                                                {printf("MatchedStmt -> ReturnStmt\n");}
#line 1761 "y.tab.c"
    break;

  case 37:
#line 84 "parser.y"
                                                                        {printf("MatchedStmt -> CpndStmt\n");}
#line 1767 "y.tab.c"
    break;

  case 38:
#line 85 "parser.y"
                                                                        {printf("MatchedStmt -> BreakStmt\n");}
#line 1773 "y.tab.c"
    break;

  case 39:
#line 86 "parser.y"
                                                                        {printf("MatchedStmt -> SwitchStmt\n");}
#line 1779 "y.tab.c"
    break;

  case 40:
#line 87 "parser.y"
                                                                        {printf("MatchedStmt -> if ( Expr ) else MatchedStmt\n");}
#line 1785 "y.tab.c"
    break;

  case 41:
#line 90 "parser.y"
                                                                                        {printf("OpenStmt -> ForOpenStmt\n");}
#line 1791 "y.tab.c"
    break;

  case 42:
#line 91 "parser.y"
                                                                                                {printf("OpenStmt -> WhileOpenStmt\n");}
#line 1797 "y.tab.c"
    break;

  case 43:
#line 92 "parser.y"
                                                                                        {printf("OpenStmt -> if ( Expr ) Stmt\n");}
#line 1803 "y.tab.c"
    break;

  case 44:
#line 93 "parser.y"
                                                                {printf("if ( Expr ) MatchedStmt else OpenStmt\n");}
#line 1809 "y.tab.c"
    break;

  case 45:
#line 96 "parser.y"
                                                                {printf("SwitchStmt -> switch ( Expr ) { CaseList DefaultCase }\n");}
#line 1815 "y.tab.c"
    break;

  case 46:
#line 98 "parser.y"
                                                {printf("CaseList -> CaseList case %d : StmtList\n", (yyvsp[-2].iVal));}
#line 1821 "y.tab.c"
    break;

  case 47:
#line 99 "parser.y"
                                                                {printf("CaseList -> case %d : StmtList\n", (yyvsp[-2].iVal));}
#line 1827 "y.tab.c"
    break;

  case 48:
#line 102 "parser.y"
                                        {printf("DefaultCase -> default : StmtList\n");}
#line 1833 "y.tab.c"
    break;

  case 49:
#line 103 "parser.y"
                                                                        {printf("DefaultCase -> Empty\n");}
#line 1839 "y.tab.c"
    break;

  case 50:
#line 106 "parser.y"
                                {printf("ReturnStmt -> return Expr ; \n");}
#line 1845 "y.tab.c"
    break;

  case 51:
#line 107 "parser.y"
                                                {printf("ReturnStmt -> return ; \n");}
#line 1851 "y.tab.c"
    break;

  case 52:
#line 110 "parser.y"
                        {printf("BreakStmt -> break ; \n");}
#line 1857 "y.tab.c"
    break;

  case 53:
#line 112 "parser.y"
                        {printf("ExprStmt -> Expr ; \n");}
#line 1863 "y.tab.c"
    break;

  case 54:
#line 113 "parser.y"
                                {printf("ExprStmt -> ; \n");}
#line 1869 "y.tab.c"
    break;

  case 55:
#line 116 "parser.y"
                        {printf("Expr -> AssignExpr\n");}
#line 1875 "y.tab.c"
    break;

  case 56:
#line 117 "parser.y"
                        {printf("Expr -> SimpleExpr\n");}
#line 1881 "y.tab.c"
    break;

  case 57:
#line 119 "parser.y"
                                        {printf("AssignExpr -> Variable = Expr\n");}
#line 1887 "y.tab.c"
    break;

  case 58:
#line 120 "parser.y"
                                                {printf("AssignExpr -> Variable += Expr\n");}
#line 1893 "y.tab.c"
    break;

  case 59:
#line 121 "parser.y"
                                                {printf("AssignExpr -> Variable -= Expr\n");}
#line 1899 "y.tab.c"
    break;

  case 60:
#line 122 "parser.y"
                                                {printf("AssignExpr -> Variable *= Expr\n");}
#line 1905 "y.tab.c"
    break;

  case 61:
#line 123 "parser.y"
                                                {printf("AssignExpr -> Variable /= Expr\n");}
#line 1911 "y.tab.c"
    break;

  case 62:
#line 124 "parser.y"
                                                {printf("AssignExpr -> Variable %%= Expr\n");}
#line 1917 "y.tab.c"
    break;

  case 63:
#line 127 "parser.y"
                                        {printf("Variable -> %s [ Expr ]\n", (yyvsp[-3].idVal));}
#line 1923 "y.tab.c"
    break;

  case 64:
#line 128 "parser.y"
                                                                {printf("Variable -> %s\n", (yyvsp[0].idVal));}
#line 1929 "y.tab.c"
    break;

  case 65:
#line 131 "parser.y"
                                        {printf("SimpleExpr -> SimpleExpr || AndExpr\n");}
#line 1935 "y.tab.c"
    break;

  case 66:
#line 132 "parser.y"
                                                                        {printf("SimpleExpr -> RelExpr\n");}
#line 1941 "y.tab.c"
    break;

  case 67:
#line 135 "parser.y"
                                                {printf("AndExpr -> AndExpr && RelExpr\n");}
#line 1947 "y.tab.c"
    break;

  case 68:
#line 136 "parser.y"
                                                                        {printf("AndExpr -> RelExpr\n");}
#line 1953 "y.tab.c"
    break;

  case 69:
#line 139 "parser.y"
                                {printf("RelExpr -> RelExpr < AddExpr\n");}
#line 1959 "y.tab.c"
    break;

  case 70:
#line 140 "parser.y"
                                        {printf("RelExpr -> RelExpr <= AddExpr\n");}
#line 1965 "y.tab.c"
    break;

  case 71:
#line 141 "parser.y"
                                        {printf("RelExpr -> RelExpr > AddExpr\n");}
#line 1971 "y.tab.c"
    break;

  case 72:
#line 142 "parser.y"
                                        {printf("RelExpr -> RelExpr >= AddExpr\n");}
#line 1977 "y.tab.c"
    break;

  case 73:
#line 143 "parser.y"
                                        {printf("RelExpr -> RelExpr == AddExpr\n");}
#line 1983 "y.tab.c"
    break;

  case 74:
#line 144 "parser.y"
                                        {printf("RelExpr -> RelExpr != AddExpr\n");}
#line 1989 "y.tab.c"
    break;

  case 75:
#line 145 "parser.y"
                                                        {printf("RelExpr -> AddExpr\n");}
#line 1995 "y.tab.c"
    break;

  case 76:
#line 148 "parser.y"
                                        {printf("AddExpr -> AddExpr + Term\n");}
#line 2001 "y.tab.c"
    break;

  case 77:
#line 149 "parser.y"
                                                {printf("AddExpr -> AddExpr - Term\n");}
#line 2007 "y.tab.c"
    break;

  case 78:
#line 150 "parser.y"
                                                        {printf("AddExpr -> Term\n");}
#line 2013 "y.tab.c"
    break;

  case 79:
#line 153 "parser.y"
                        {printf("Term -> Term * Factor\n");}
#line 2019 "y.tab.c"
    break;

  case 80:
#line 154 "parser.y"
                                {printf("Term -> Term / Factor\n");}
#line 2025 "y.tab.c"
    break;

  case 81:
#line 155 "parser.y"
                                {printf("Term -> Term %% Factor\n");}
#line 2031 "y.tab.c"
    break;

  case 82:
#line 156 "parser.y"
                                        {printf("Term -> Factor\n");}
#line 2037 "y.tab.c"
    break;

  case 83:
#line 159 "parser.y"
                                {printf("Factor -> ( Expr )\n");}
#line 2043 "y.tab.c"
    break;

  case 84:
#line 160 "parser.y"
                                                {printf("Factor -> FunCall\n");}
#line 2049 "y.tab.c"
    break;

  case 85:
#line 161 "parser.y"
                                        {printf("Factor -> - Factor\n");}
#line 2055 "y.tab.c"
    break;

  case 86:
#line 162 "parser.y"
                                                {printf("Factor -> Variable\n");}
#line 2061 "y.tab.c"
    break;

  case 87:
#line 163 "parser.y"
                                        {printf("Factor -> Variable IncDec\n");}
#line 2067 "y.tab.c"
    break;

  case 88:
#line 164 "parser.y"
                                        {printf("Factor -> IncDec Variable\n");}
#line 2073 "y.tab.c"
    break;

  case 89:
#line 165 "parser.y"
                                        {printf("Factor -> NumberLiteral\n");}
#line 2079 "y.tab.c"
    break;

  case 90:
#line 168 "parser.y"
                                {printf("NumberLiteral -> %d\n", (yyvsp[0].iVal));}
#line 2085 "y.tab.c"
    break;

  case 91:
#line 169 "parser.y"
                                                {printf("NumberLiteral -> %.2f", (yyvsp[0].rVal));}
#line 2091 "y.tab.c"
    break;

  case 92:
#line 172 "parser.y"
                {printf("IncDec -> ++ \n");}
#line 2097 "y.tab.c"
    break;

  case 93:
#line 173 "parser.y"
                        {printf("IncDec -> -- \n");}
#line 2103 "y.tab.c"
    break;

  case 94:
#line 176 "parser.y"
                                                        {printf("WhileMatchedStmt -> while ( Expr ) MatchedStmt\n");}
#line 2109 "y.tab.c"
    break;

  case 95:
#line 178 "parser.y"
                                                        {printf("WhileOpenStmt -> while ( Expr ) OpenStmt\n");}
#line 2115 "y.tab.c"
    break;

  case 96:
#line 180 "parser.y"
                                                        {printf("DoWhileStmt -> do Stmt while ( Expr ) ; \n");}
#line 2121 "y.tab.c"
    break;

  case 97:
#line 182 "parser.y"
                                                                        {printf("ForMatchedStmt -> for ( Expr ; Expr ; Expr ; ) MatchedStmt\n");}
#line 2127 "y.tab.c"
    break;

  case 98:
#line 184 "parser.y"
                                                                        {printf("ForOpenStmt -> for ( Expr ; Expr ; Expr ) OpenStmt\n");}
#line 2133 "y.tab.c"
    break;

  case 99:
#line 186 "parser.y"
                                                {printf("FunCall -> %s ( Arguments )\n", (yyvsp[-3].idVal));}
#line 2139 "y.tab.c"
    break;

  case 100:
#line 188 "parser.y"
                                {printf("Arguments -> ArgumentList\n");}
#line 2145 "y.tab.c"
    break;

  case 101:
#line 189 "parser.y"
                                                        {printf("Arguments -> Empty\n");}
#line 2151 "y.tab.c"
    break;

  case 102:
#line 192 "parser.y"
                                        {printf("ArgumentList -> ArgumentList , Expr\n");}
#line 2157 "y.tab.c"
    break;

  case 103:
#line 193 "parser.y"
                                                        {printf("ArgumentList -> ArgumentList , %s", (yyvsp[0].sVal));}
#line 2163 "y.tab.c"
    break;

  case 104:
#line 194 "parser.y"
                                                                        {printf("ArgumentList -> Expr\n");}
#line 2169 "y.tab.c"
    break;

  case 105:
#line 195 "parser.y"
                                                                        {printf("ArgumentList -> %s", (yyvsp[0].sVal));}
#line 2175 "y.tab.c"
    break;


#line 2179 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 200 "parser.y"

int main(int argc, char* argv[]){
	extern FILE *yyin;
	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);
	return 0;
}

int yyerror(char *s){
	printf("Parse error : %s\n", s);
	return 0;
}
