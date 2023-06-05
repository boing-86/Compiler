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
	#include "ast.h"
	int yylex(void);
	int yyerror(char* s);
	STACK *stack;
	int checkloop = 0;

#line 80 "y.tab.c"

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
    TSTRING = 260,
    TIDENTIFIER = 261,
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
#define TSTRING 260
#define TIDENTIFIER 261
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
#line 10 "parser.y"

	int iVal;
	float rVal;
	char* sVal;

#line 208 "y.tab.c"

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   205

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

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
static const yytype_int16 yyrline[] =
{
       0,    26,    26,    31,    35,    38,    39,    42,    48,    53,
      59,    66,    69,    71,    75,    78,    81,    86,    91,   100,
     103,   108,   109,   112,   115,   117,   121,   124,   135,   138,
     139,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     159,   160,   161,   166,   175,   184,   199,   208,   213,   216,
     221,   224,   234,   238,   241,   242,   244,   248,   252,   256,
     260,   264,   270,   276,   279,   285,   288,   294,   297,   303,
     309,   315,   321,   327,   333,   336,   342,   348,   351,   357,
     363,   369,   372,   373,   374,   379,   380,   386,   392,   395,
     396,   399,   400,   403,   410,   417,   424,   434,   444,   451,
     456,   459,   464
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TINTEGER", "TREAL", "TSTRING",
  "TIDENTIFIER", "TBREAK", "TCASE", "TDEFAULT", "TDO", "TELSE", "TFOR",
  "TIF", "TRETURN", "TSWITCH", "TWHILE", "TCHAR", "TFLOAT", "TINT",
  "TVOID", "EQUAL", "INC", "DEC", "GE", "LE", "NE", "PE", "ME", "MTE",
  "DE", "MODE", "AND", "OR", "TERROR", "TCOMMENT", "'('", "')'", "';'",
  "','", "'{'", "'}'", "'['", "']'", "':'", "'='", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "$accept", "Program", "DecList", "Dec",
  "FuncDec", "Params", "ParamList", "Param", "CpndStmt", "LDecList",
  "VarDec", "VarType", "IDs", "Value", "StmtList", "Stmt", "MatchedStmt",
  "OpenStmt", "SwitchStmt", "CaseList", "DefaultCase", "ReturnStmt",
  "BreakStmt", "ExprStmt", "Expr", "AssignExpr", "Variable", "SimpleExpr",
  "AndExpr", "RelExpr", "AddExpr", "Term", "Factor", "NumberLiteral",
  "IncDec", "WhileMatchedStmt", "WhileOpenStmt", "DoWhileStmt",
  "ForMatchedStmt", "ForOpenStmt", "FuncCall", "Arguments", "ArgumentList", YY_NULLPTR
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

#define YYPACT_NINF (-161)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,  -161,  -161,    -2,    23,    27,  -161,  -161,  -161,    19,
       4,  -161,  -161,   -30,    -6,  -161,   118,   118,    75,  -161,
      85,  -161,    68,    60,  -161,    85,   119,    64,    80,  -161,
      41,    52,  -161,    62,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,    52,  -161,    85,    70,  -161,  -161,   -15,   111,   117,
     123,   126,   112,   127,   128,  -161,  -161,   122,  -161,  -161,
     122,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,   116,
    -161,    67,   132,   135,   -10,    39,    91,  -161,  -161,   154,
    -161,  -161,  -161,  -161,  -161,  -161,   122,   122,  -161,   152,
     122,   122,  -161,   131,   122,   122,   133,   124,  -161,  -161,
     122,   122,   122,   122,   122,   122,  -161,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     136,  -161,  -161,   142,   141,   138,   146,   145,   147,  -161,
     148,   149,  -161,  -161,  -161,  -161,  -161,  -161,  -161,   135,
     -10,    39,    39,    39,    39,    39,    39,    91,    91,  -161,
    -161,  -161,  -161,   122,  -161,   122,   122,   117,   150,   117,
    -161,   151,   153,  -161,   176,   181,  -161,  -161,   155,   122,
     117,   189,   105,  -161,   157,  -161,  -161,   156,   192,   158,
     160,   117,  -161,   159,  -161,  -161,  -161,  -161,   117,  -161,
     117,   117
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    22,    21,     0,     0,     2,     4,     6,     5,     0,
       0,     1,     3,    26,     0,    24,    13,    13,     0,    20,
       0,    12,     0,    11,    15,     0,     0,     0,    26,    23,
       0,     0,    16,     0,    25,    10,    19,     9,    14,     8,
       7,    28,    18,     0,     0,    89,    90,    63,     0,     0,
       0,     0,     0,     0,     0,    91,    92,     0,    53,    17,
       0,    36,    27,    29,    30,    38,    35,    37,    31,     0,
      54,    85,    55,    65,    67,    74,    77,    81,    88,     0,
      33,    41,    34,    32,    40,    83,   100,     0,    51,     0,
       0,     0,    50,     0,     0,     0,     0,    85,    84,    52,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,    87,   102,     0,    99,     0,     0,     0,     0,    49,
       0,     0,    82,    57,    58,    59,    60,    61,    56,    64,
      66,    72,    71,    69,    73,    68,    70,    75,    76,    78,
      79,    80,    98,     0,    62,     0,     0,     0,     0,     0,
     101,     0,     0,    42,    29,     0,    93,    94,     0,     0,
       0,     0,    48,    95,     0,    39,    43,     0,     0,     0,
       0,     0,    28,     0,    28,    44,    96,    97,    46,    28,
      47,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,  -161,   191,  -161,   180,  -161,   167,    42,  -161,
     163,     3,  -161,    -7,  -160,   -48,  -140,  -150,  -161,  -161,
    -161,  -161,  -161,  -161,   -52,  -161,   -53,  -161,    92,    97,
      63,    36,   -50,  -161,   -69,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    22,    23,    24,    61,    41,
       8,    25,    14,    15,    44,    62,    63,    64,    65,   172,
     180,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   123,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      93,    89,   106,     9,    10,    96,    17,    97,     9,   167,
      98,   109,    18,    29,   110,   111,   112,   164,    32,   166,
     176,    86,   188,    11,   190,    13,   121,    87,   106,   191,
     175,   187,    19,    20,   122,   125,   113,   114,   127,   128,
      16,   186,   130,   131,    43,     1,     2,     3,   133,   134,
     135,   136,   137,   138,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,   149,   150,   151,
       1,     2,    37,    45,    46,    40,    47,    48,    27,    35,
      49,    36,    50,    51,    52,    53,    54,   115,   116,    55,
      56,    28,    55,    56,   100,   101,   102,   103,   104,    31,
      39,   160,    36,   161,   162,    30,    57,    34,    58,   163,
      36,    59,   105,   178,   179,    45,    46,   174,    47,    60,
      45,    46,    18,    47,    48,    45,    46,    49,    47,    50,
      51,    52,    53,    54,    55,    56,     1,     2,    21,    55,
      56,   117,   118,   119,    55,    56,    55,    56,    57,    88,
      92,   147,   148,    57,    99,    58,    33,    36,    57,    90,
     120,    60,    91,    94,    95,   107,    60,   108,   126,   129,
     132,    60,   141,   142,   143,   144,   145,   146,    87,   152,
     153,   154,   155,   156,   157,   158,   159,   170,   168,   171,
     165,   169,   177,   173,   181,   183,    12,    26,    38,   139,
     182,   185,   184,   189,    42,   140
};

static const yytype_uint8 yycheck[] =
{
      52,    49,    71,     0,     6,    57,    36,    60,     5,   159,
      60,    21,    42,    20,    24,    25,    26,   157,    25,   159,
     170,    36,   182,     0,   184,     6,    79,    42,    97,   189,
     170,   181,    38,    39,    86,    87,    46,    47,    90,    91,
      36,   181,    94,    95,    41,    18,    19,    20,   100,   101,
     102,   103,   104,   105,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   117,   118,   119,
      18,    19,    30,     3,     4,    33,     6,     7,     3,    38,
      10,    40,    12,    13,    14,    15,    16,    48,    49,    22,
      23,     6,    22,    23,    27,    28,    29,    30,    31,    39,
      38,   153,    40,   155,   156,    37,    36,    43,    38,   157,
      40,    41,    45,     8,     9,     3,     4,   169,     6,    49,
       3,     4,    42,     6,     7,     3,     4,    10,     6,    12,
      13,    14,    15,    16,    22,    23,    18,    19,    20,    22,
      23,    50,    51,    52,    22,    23,    22,    23,    36,    38,
      38,   115,   116,    36,    38,    38,    37,    40,    36,    36,
       6,    49,    36,    36,    36,    33,    49,    32,    16,    38,
      37,    49,   109,   110,   111,   112,   113,   114,    42,    37,
      39,    43,    36,    38,    37,    37,    37,    11,    37,     8,
      40,    38,     3,    38,    37,     3,     5,    17,    31,   107,
      44,    41,    44,    44,    41,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    19,    20,    54,    55,    56,    57,    63,    64,
       6,     0,    56,     6,    65,    66,    36,    36,    42,    38,
      39,    20,    58,    59,    60,    64,    58,     3,     6,    66,
      37,    39,    66,    37,    43,    38,    40,    61,    60,    38,
      61,    62,    63,    64,    67,     3,     4,     6,     7,    10,
      12,    13,    14,    15,    16,    22,    23,    36,    38,    41,
      49,    61,    68,    69,    70,    71,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    36,    42,    38,    68,
      36,    36,    38,    77,    36,    36,    77,    79,    85,    38,
      27,    28,    29,    30,    31,    45,    87,    33,    32,    21,
      24,    25,    26,    46,    47,    48,    49,    50,    51,    52,
       6,    79,    77,    94,    95,    77,    16,    77,    77,    38,
      77,    77,    37,    77,    77,    77,    77,    77,    77,    81,
      82,    83,    83,    83,    83,    83,    83,    84,    84,    85,
      85,    85,    37,    39,    43,    36,    38,    37,    37,    37,
      77,    77,    77,    68,    69,    40,    69,    70,    37,    38,
      11,     8,    72,    38,    77,    69,    70,     3,     8,     9,
      73,    37,    44,     3,    44,    41,    69,    70,    67,    44,
      67,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    57,    57,    57,
      57,    58,    58,    58,    59,    59,    60,    61,    62,    62,
      63,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    70,    70,    71,    72,    72,    73,    73,    74,
      74,    75,    76,    76,    77,    77,    78,    78,    78,    78,
      78,    78,    79,    79,    80,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    84,    84,
      84,    84,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    87,    87,    88,    89,    90,    91,    92,    93,    94,
      94,    95,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     6,     6,
       6,     1,     1,     0,     3,     1,     2,     4,     2,     0,
       3,     1,     1,     3,     1,     4,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       1,     1,     5,     7,     8,     5,     4,     3,     0,     3,
       2,     2,     2,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     4,     1,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     5,     5,     7,     9,     9,     4,     1,
       0,     3,     1
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
#line 26 "parser.y"
                                {
	ASTNode* n = makeASTNode(_PROG); 
						ASTNode* n1 = pop(stack); 
						push(stack, setChild(n, n1));}
#line 1529 "y.tab.c"
    break;

  case 3:
#line 31 "parser.y"
                        {ASTNode* dec = pop(stack); 
						ASTNode* declist = pop(stack);
						push(stack, setLastSibling(declist, dec));
						}
#line 1538 "y.tab.c"
    break;

  case 4:
#line 35 "parser.y"
                                        {}
#line 1544 "y.tab.c"
    break;

  case 5:
#line 38 "parser.y"
                                {}
#line 1550 "y.tab.c"
    break;

  case 6:
#line 39 "parser.y"
                                        {}
#line 1556 "y.tab.c"
    break;

  case 7:
#line 42 "parser.y"
                                                                {ASTNode* funcdec = makeASTNode(_FUNCDEC); 
															ASTNode* cpndstmt = pop(stack);
															ASTNode* params = pop(stack);
															ASTNode* id = makeASTNodeID((yyvsp[-4].sVal));
															ASTNode* type = pop(stack);
															push(stack, setChild(funcdec, (setSibling(type, setSibling(id, (setSibling(params, cpndstmt)))))));}
#line 1567 "y.tab.c"
    break;

  case 8:
#line 48 "parser.y"
                                                                        {ASTNode* funcdec = makeASTNode(_FUNCDEC);
															ASTNode* params = pop(stack);
															ASTNode* id = makeASTNodeID((yyvsp[-4].sVal));
															ASTNode* type = pop(stack);
															push(stack, setChild(funcdec, (setSibling(type, setSibling(id, params)))));}
#line 1577 "y.tab.c"
    break;

  case 9:
#line 53 "parser.y"
                                                                                {ASTNode* funcdec = makeASTNode(_FUNCDEC); 
															ASTNode* cpndstmt = pop(stack);
															ASTNode* params = pop(stack);
															ASTNode* id = makeASTNodeID((yyvsp[-4].sVal));
															ASTNode* type = makeASTNodeTYPE(TYPE_VOID);
															push(stack, setChild(funcdec, (setSibling(type, setSibling(id, (setSibling(params, cpndstmt)))))));}
#line 1588 "y.tab.c"
    break;

  case 10:
#line 59 "parser.y"
                                                                                {ASTNode* funcdec = makeASTNode(_FUNCDEC);
															ASTNode* params = pop(stack);
															ASTNode* id = makeASTNodeID((yyvsp[-4].sVal));
															ASTNode* type = makeASTNodeTYPE(TYPE_VOID);
															push(stack, setChild(funcdec, (setSibling(type, setSibling(id, params)))));}
#line 1598 "y.tab.c"
    break;

  case 11:
#line 66 "parser.y"
                                {ASTNode* params = makeASTNode(_PARAMS);
						ASTNode* paramlist = pop(stack);
						push(stack, setChild(params, paramlist));}
#line 1606 "y.tab.c"
    break;

  case 12:
#line 69 "parser.y"
                                {ASTNode* params = makeASTNode(_PARAMS);
	   					push(stack, params);}
#line 1613 "y.tab.c"
    break;

  case 13:
#line 71 "parser.y"
                                        {ASTNode* params = makeASTNode(_PARAMS);
	   					push(stack, params);}
#line 1620 "y.tab.c"
    break;

  case 14:
#line 75 "parser.y"
                                        {ASTNode* param = pop(stack);
									ASTNode* paramlist = pop(stack);
									push(stack, setLastSibling(paramlist, param));}
#line 1628 "y.tab.c"
    break;

  case 15:
#line 78 "parser.y"
                                                                {}
#line 1634 "y.tab.c"
    break;

  case 16:
#line 81 "parser.y"
                                                {ASTNode* param = makeASTNode(_PARAM);
									ASTNode* value = pop(stack);
									ASTNode* type = pop(stack);
									push(stack, setChild(param, setSibling(type, value)));}
#line 1643 "y.tab.c"
    break;

  case 17:
#line 86 "parser.y"
                                        {ASTNode* cpndstmt = makeASTNode(_CPNDSTMT);
										ASTNode* stmtlist = pop(stack);
										ASTNode* ldeclist = pop(stack);
										push(stack, setChild(cpndstmt, setSibling(ldeclist, stmtlist)));}
#line 1652 "y.tab.c"
    break;

  case 18:
#line 91 "parser.y"
                                {
	ASTNode* vardec = pop(stack);
	ASTNode* ldeclist = pop(stack);
	if(getChild(ldeclist)){setLastSibling(getChild(ldeclist), vardec);
	push(stack, ldeclist);}
	else{
		push(stack, setChild(ldeclist, vardec));
	}
}
#line 1666 "y.tab.c"
    break;

  case 19:
#line 100 "parser.y"
                                                        {push(stack, makeASTNode(_LDECLIST));}
#line 1672 "y.tab.c"
    break;

  case 20:
#line 103 "parser.y"
                                {ASTNode* vardec = makeASTNode(_VARDEC);
							ASTNode* ids = pop(stack);
							ASTNode* type = pop(stack);
							push(stack, setChild(vardec, setSibling(type, ids)));}
#line 1681 "y.tab.c"
    break;

  case 21:
#line 108 "parser.y"
                                {push(stack, makeASTNodeTYPE(TYPE_INT));}
#line 1687 "y.tab.c"
    break;

  case 22:
#line 109 "parser.y"
                                        {push(stack, makeASTNodeTYPE(TYPE_FLOAT));}
#line 1693 "y.tab.c"
    break;

  case 23:
#line 112 "parser.y"
                                {ASTNode* value = pop(stack);
						ASTNode* ids = pop(stack);
						push(stack, setLastSibling(ids, value));}
#line 1701 "y.tab.c"
    break;

  case 24:
#line 115 "parser.y"
                                        {}
#line 1707 "y.tab.c"
    break;

  case 25:
#line 117 "parser.y"
                                        {ASTNode* array = makeASTNode(_ARRAY);
										ASTNode* id = makeASTNodeID((yyvsp[-3].sVal));
										ASTNode* integer = makeASTNodeINT((yyvsp[-1].iVal));
										push(stack, setChild(array, setSibling(id, integer)));}
#line 1716 "y.tab.c"
    break;

  case 26:
#line 121 "parser.y"
                                                                {push(stack, makeASTNodeID((yyvsp[0].sVal)));}
#line 1722 "y.tab.c"
    break;

  case 27:
#line 125 "parser.y"
{
	ASTNode* stmt = pop(stack);
	ASTNode* stmtlist = pop(stack);
	if(getChild(stmtlist)){
		setLastSibling(getChild(stmtlist), stmt);
		push(stack, stmtlist);}
	else{
		push(stack, setChild(stmtlist, stmt));
	}
	}
#line 1737 "y.tab.c"
    break;

  case 28:
#line 135 "parser.y"
                                                                                {push(stack, makeASTNode(_STMTLIST));}
#line 1743 "y.tab.c"
    break;

  case 29:
#line 138 "parser.y"
                                                                {}
#line 1749 "y.tab.c"
    break;

  case 30:
#line 139 "parser.y"
                                                                        {}
#line 1755 "y.tab.c"
    break;

  case 31:
#line 142 "parser.y"
                                                                        {}
#line 1761 "y.tab.c"
    break;

  case 32:
#line 143 "parser.y"
                                                                                {checkloop = 1;}
#line 1767 "y.tab.c"
    break;

  case 33:
#line 144 "parser.y"
                                                                                {checkloop = 1;}
#line 1773 "y.tab.c"
    break;

  case 34:
#line 145 "parser.y"
                                                                                {checkloop = 1;}
#line 1779 "y.tab.c"
    break;

  case 35:
#line 146 "parser.y"
                                                                                {}
#line 1785 "y.tab.c"
    break;

  case 36:
#line 147 "parser.y"
                                                                        {}
#line 1791 "y.tab.c"
    break;

  case 37:
#line 148 "parser.y"
                                                                        {}
#line 1797 "y.tab.c"
    break;

  case 38:
#line 149 "parser.y"
                                                                        {}
#line 1803 "y.tab.c"
    break;

  case 39:
#line 150 "parser.y"
                                                                                        {
				ASTNode* ifstmt = makeASTNode(_IFSTMT);
				ASTNode* stmt2 = pop(stack);
				ASTNode* stmt1 = pop(stack);
				ASTNode* expr = pop(stack);
				push(stack, setChild(ifstmt, setSibling(expr, setSibling(stmt1, stmt2))));
				}
#line 1815 "y.tab.c"
    break;

  case 40:
#line 159 "parser.y"
                                                                                        {}
#line 1821 "y.tab.c"
    break;

  case 41:
#line 160 "parser.y"
                                                                                                {}
#line 1827 "y.tab.c"
    break;

  case 42:
#line 161 "parser.y"
                                                                                        {
			ASTNode* ifstmt = makeASTNode(_IFSTMT);
			ASTNode* stmt = pop(stack);
			ASTNode* expr = pop(stack);
			push(stack, setChild(ifstmt, setSibling(expr, stmt)));}
#line 1837 "y.tab.c"
    break;

  case 43:
#line 166 "parser.y"
                                                                {
			ASTNode* ifstmt = makeASTNode(_IFSTMT);
			ASTNode* stmt2 = pop(stack);
			ASTNode* stmt1 = pop(stack);
			ASTNode* expr = pop(stack);
			push(stack, setChild(ifstmt, setSibling(expr, setSibling(stmt1, stmt2))));
		}
#line 1849 "y.tab.c"
    break;

  case 44:
#line 175 "parser.y"
                                                                {
	checkloop = 0;
	ASTNode* swtichstmt = makeASTNode(_SWSTMT);
	ASTNode* defaultcase = pop(stack);
	ASTNode* caselist = pop(stack);
	ASTNode* expr = pop(stack);
	push(stack, setChild(swtichstmt, setSibling(expr, setLastSibling (caselist, defaultcase))));
	}
#line 1862 "y.tab.c"
    break;

  case 45:
#line 184 "parser.y"
                                                {
			checkloop = 1;
			ASTNode* stmtlist = pop(stack);
			ASTNode* integer = makeASTNodeINT((yyvsp[-2].iVal));
			ASTNode* case_ = makeASTNode(_CASE);
			ASTNode* caselist = pop(stack);

			if(getSibling(caselist)){
				setLastSibling(getSibling(caselist), setChild(case_, setSibling(integer, stmtlist)));
				push(stack, caselist);
			} else {
				push(stack, setSibling(caselist, setChild(case_, setSibling(integer, stmtlist))));
			}
		}
#line 1881 "y.tab.c"
    break;

  case 46:
#line 199 "parser.y"
                                                                {
			checkloop = 1;
			ASTNode* stmtlist = pop(stack);
			ASTNode* case_ = makeASTNode(_CASE);
			ASTNode* integer = makeASTNodeINT((yyvsp[-2].iVal));
			push(stack, setChild(case_, setSibling(integer, stmtlist)));
		}
#line 1893 "y.tab.c"
    break;

  case 47:
#line 208 "parser.y"
                                        {
			ASTNode* stmtlist = pop(stack);
			ASTNode* default_ = makeASTNode(_DEFAULT);
			push(stack, setChild(default_, stmtlist));
}
#line 1903 "y.tab.c"
    break;

  case 48:
#line 213 "parser.y"
                                                                        {push(stack, makeASTNode(_DEFAULT));}
#line 1909 "y.tab.c"
    break;

  case 49:
#line 216 "parser.y"
                                {
	ASTNode* _return = makeASTNode(_RTSTMT);
	ASTNode* expr = pop(stack);
	push(stack, setChild(_return, expr));
	}
#line 1919 "y.tab.c"
    break;

  case 50:
#line 221 "parser.y"
                                                {push(stack, makeASTNode(_RTSTMT));}
#line 1925 "y.tab.c"
    break;

  case 51:
#line 224 "parser.y"
                        {
	if(checkloop == 1){
		push(stack, makeASTNode(_BRKSTMT));
		checkloop = 0;
	}
	else{
		yyerror("break must in loop or switch");
	}
}
#line 1939 "y.tab.c"
    break;

  case 52:
#line 234 "parser.y"
                        {
			ASTNode* expr = pop(stack);
			ASTNode* exprstmt = makeASTNode(_EXPRSTMT);
			push(stack, setChild(exprstmt, expr));}
#line 1948 "y.tab.c"
    break;

  case 53:
#line 238 "parser.y"
                                {push(stack, makeASTNode(_EXPRSTMT));}
#line 1954 "y.tab.c"
    break;

  case 54:
#line 241 "parser.y"
                        {}
#line 1960 "y.tab.c"
    break;

  case 55:
#line 242 "parser.y"
                        {}
#line 1966 "y.tab.c"
    break;

  case 56:
#line 244 "parser.y"
                                        {ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(16);
									push(stack, setChild(op, setSibling(var, expr)));}
#line 1975 "y.tab.c"
    break;

  case 57:
#line 248 "parser.y"
                                                {ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(17);
									push(stack, setChild(op, setSibling(var, expr)));}
#line 1984 "y.tab.c"
    break;

  case 58:
#line 252 "parser.y"
                                                {ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(18);
									push(stack, setChild(op, setSibling(var, expr)));}
#line 1993 "y.tab.c"
    break;

  case 59:
#line 256 "parser.y"
                                                {ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(19);
									push(stack, setChild(op, setSibling(var, expr)));}
#line 2002 "y.tab.c"
    break;

  case 60:
#line 260 "parser.y"
                                                {ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(20);
									push(stack, setChild(op, setSibling(var, expr)));}
#line 2011 "y.tab.c"
    break;

  case 61:
#line 264 "parser.y"
                                                {ASTNode* expr = pop(stack);
									ASTNode* var = pop(stack);
									ASTNode* op = makeASTNodeOP(21);
									push(stack, setChild(op, setSibling(var, expr)));}
#line 2020 "y.tab.c"
    break;

  case 62:
#line 270 "parser.y"
                                        {
	ASTNode* expr = pop(stack);
	ASTNode* arr = makeASTNode(_ARRAY);
	ASTNode* id = makeASTNodeID((yyvsp[-3].sVal));
	push(stack, setChild(arr, setSibling(id, expr)));
}
#line 2031 "y.tab.c"
    break;

  case 63:
#line 276 "parser.y"
                                                                {push(stack, makeASTNodeID((yyvsp[0].sVal)));}
#line 2037 "y.tab.c"
    break;

  case 64:
#line 279 "parser.y"
                                        {
	ASTNode* andexpr = pop(stack);
	ASTNode* simpleexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(15);
	push(stack, setChild(op, setSibling(simpleexpr, andexpr)));
}
#line 2048 "y.tab.c"
    break;

  case 65:
#line 285 "parser.y"
                                                                        {}
#line 2054 "y.tab.c"
    break;

  case 66:
#line 288 "parser.y"
                                                {
	ASTNode* relexpr = pop(stack);
	ASTNode* andexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(14);
	push(stack, setChild(op, setSibling(andexpr, relexpr)));
}
#line 2065 "y.tab.c"
    break;

  case 67:
#line 294 "parser.y"
                                                                        {}
#line 2071 "y.tab.c"
    break;

  case 68:
#line 297 "parser.y"
                                {
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(11);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
}
#line 2082 "y.tab.c"
    break;

  case 69:
#line 303 "parser.y"
                                        {
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(13);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
		}
#line 2093 "y.tab.c"
    break;

  case 70:
#line 309 "parser.y"
                                        {
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(10);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
		}
#line 2104 "y.tab.c"
    break;

  case 71:
#line 315 "parser.y"
                                        {
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(12);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
		}
#line 2115 "y.tab.c"
    break;

  case 72:
#line 321 "parser.y"
                                        {
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(8);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
		}
#line 2126 "y.tab.c"
    break;

  case 73:
#line 327 "parser.y"
                                        {
	ASTNode* addexpr = pop(stack);
	ASTNode* relexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(9);
	push(stack, setChild(op, setSibling(relexpr, addexpr)));
		}
#line 2137 "y.tab.c"
    break;

  case 74:
#line 333 "parser.y"
                                                        {}
#line 2143 "y.tab.c"
    break;

  case 75:
#line 336 "parser.y"
                                        {
	ASTNode* term = pop(stack);
	ASTNode* addexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(1);
	push(stack, setChild(op, setSibling(addexpr, term)));
}
#line 2154 "y.tab.c"
    break;

  case 76:
#line 342 "parser.y"
                                                {
	ASTNode* term = pop(stack);
	ASTNode* addexpr = pop(stack);
	ASTNode* op = makeASTNodeOP(2);
	push(stack, setChild(op, setSibling(addexpr, term)));
		}
#line 2165 "y.tab.c"
    break;

  case 77:
#line 348 "parser.y"
                                                        {}
#line 2171 "y.tab.c"
    break;

  case 78:
#line 351 "parser.y"
                        {
	ASTNode* factor = pop(stack);
	ASTNode* term = pop(stack);
	ASTNode* op = makeASTNodeOP(3);
	push(stack, setChild(op, setSibling(term, factor)));
}
#line 2182 "y.tab.c"
    break;

  case 79:
#line 357 "parser.y"
                                {
		ASTNode* factor = pop(stack);
	ASTNode* term = pop(stack);
	ASTNode* op = makeASTNodeOP(4);
	push(stack, setChild(op, setSibling(term, factor)));
	}
#line 2193 "y.tab.c"
    break;

  case 80:
#line 363 "parser.y"
                                {
		ASTNode* factor = pop(stack);
	ASTNode* term = pop(stack);
	ASTNode* op = makeASTNodeOP(5);
	push(stack, setChild(op, setSibling(term, factor)));
	}
#line 2204 "y.tab.c"
    break;

  case 81:
#line 369 "parser.y"
                                        {}
#line 2210 "y.tab.c"
    break;

  case 82:
#line 372 "parser.y"
                                {}
#line 2216 "y.tab.c"
    break;

  case 83:
#line 373 "parser.y"
                                                {}
#line 2222 "y.tab.c"
    break;

  case 84:
#line 374 "parser.y"
                                        {
			ASTNode* factor = pop(stack);
			ASTNode* op = makeASTNodeOP(2);
			push(stack, setChild(op, factor));
		}
#line 2232 "y.tab.c"
    break;

  case 85:
#line 379 "parser.y"
                                                {}
#line 2238 "y.tab.c"
    break;

  case 86:
#line 380 "parser.y"
                                        {
			ASTNode* incdec = pop(stack);
			ASTNode* variable = pop(stack);
			ASTNode* incdecexpr = makeASTNode(_INCDECEXP);
			push(stack, setChild(incdecexpr, (setSibling(variable, incdec))));
		}
#line 2249 "y.tab.c"
    break;

  case 87:
#line 386 "parser.y"
                                        {
			ASTNode* variable = pop(stack);
			ASTNode* incdec = pop(stack);
			ASTNode* incdecexpr = makeASTNode(_INCDECEXP);
			push(stack, setChild(incdecexpr, (setSibling(incdec, variable))));
		}
#line 2260 "y.tab.c"
    break;

  case 88:
#line 392 "parser.y"
                                        {}
#line 2266 "y.tab.c"
    break;

  case 89:
#line 395 "parser.y"
                                {push(stack, makeASTNodeINT((yyvsp[0].iVal)));}
#line 2272 "y.tab.c"
    break;

  case 90:
#line 396 "parser.y"
                                                {push(stack, makeASTNodeREAL((yyvsp[0].rVal)));}
#line 2278 "y.tab.c"
    break;

  case 91:
#line 399 "parser.y"
                {push(stack, makeASTNodeOP(INC_));}
#line 2284 "y.tab.c"
    break;

  case 92:
#line 400 "parser.y"
                        {push(stack, makeASTNodeOP(DEC_));}
#line 2290 "y.tab.c"
    break;

  case 93:
#line 403 "parser.y"
                                                        {
	ASTNode* stmt = pop(stack);
	ASTNode* expr = pop(stack);
	ASTNode* whilestmt = makeASTNode(_WHLSTMT);
	push(stack, setChild(whilestmt, setSibling(expr, stmt)));
	}
#line 2301 "y.tab.c"
    break;

  case 94:
#line 410 "parser.y"
                                                        {
	ASTNode* stmt = pop(stack);
	ASTNode* expr = pop(stack);
	ASTNode* whilestmt = makeASTNode(_WHLSTMT);
	push(stack, setChild(whilestmt, setSibling(expr, stmt)));
}
#line 2312 "y.tab.c"
    break;

  case 95:
#line 417 "parser.y"
                                                        {
	ASTNode* expr = pop(stack);
	ASTNode* stmt = pop(stack);
	ASTNode* dowhilestmt = makeASTNode(_DOWHLSTMT);
	push(stack, setChild(dowhilestmt, setSibling(stmt, expr)));
	}
#line 2323 "y.tab.c"
    break;

  case 96:
#line 424 "parser.y"
                                                                        {
	ASTNode* forstmt = makeASTNode(_FORSTMT);
	ASTNode* stmt = pop(stack);
	ASTNode* expr3 = pop(stack);
	ASTNode* expr2 = pop(stack);
	ASTNode* expr1 = pop(stack);
	ASTNode* childnodes = setSibling(expr1, setSibling(expr2, setSibling(expr3, stmt)));
	push(stack, setChild(forstmt, childnodes));
	}
#line 2337 "y.tab.c"
    break;

  case 97:
#line 434 "parser.y"
                                                                        {
	ASTNode* forstmt = makeASTNode(_FORSTMT);
	ASTNode* stmt = pop(stack);
	ASTNode* expr3 = pop(stack);
	ASTNode* expr2 = pop(stack);
	ASTNode* expr1 = pop(stack);
	ASTNode* childnodes = setSibling(expr1, setSibling(expr2, setSibling(expr3, stmt)));
	push(stack, setChild(forstmt, childnodes));
}
#line 2351 "y.tab.c"
    break;

  case 98:
#line 444 "parser.y"
                                                        {
	ASTNode* funccall = makeASTNode(_FUNCCALL);
	ASTNode* args = pop(stack);
	ASTNode* id = makeASTNodeID((yyvsp[-3].sVal));
	push(stack, setChild(funccall, setSibling(id, args)));
}
#line 2362 "y.tab.c"
    break;

  case 99:
#line 451 "parser.y"
                                {
	ASTNode* args = makeASTNode(_ARGS);
	ASTNode* arglist = pop(stack);
	push(stack, setChild(args, arglist));
}
#line 2372 "y.tab.c"
    break;

  case 100:
#line 456 "parser.y"
                                                        {push(stack, makeASTNode(_ARGS));}
#line 2378 "y.tab.c"
    break;

  case 101:
#line 459 "parser.y"
                                        {
	ASTNode* expr = pop(stack);
	ASTNode* arglist = pop(stack);
	push(stack, setLastSibling(arglist, expr));
}
#line 2388 "y.tab.c"
    break;

  case 102:
#line 464 "parser.y"
                                                                        {}
#line 2394 "y.tab.c"
    break;


#line 2398 "y.tab.c"

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
#line 470 "parser.y"

int main(int argc, char* argv[]){
	ASTNode* root;
	extern FILE *yyin;
	stack = initStack();
	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);
	printAST(pop(stack));
	delStack(stack);
	return 0;
}

int yyerror(char *s){
	printf("Parse error : %s\n", s);
	return 0;
}
