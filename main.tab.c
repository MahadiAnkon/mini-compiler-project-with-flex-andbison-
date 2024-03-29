
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "main.y"

    #include <stdio.h> 
    #include<math.h>
    #include<stdlib.h>
    #include<string.h>

        extern FILE *yyin;
        extern FILE *yyout;
	int yylex();
	int yyparse();
    void yyerror(char *s);

    char VAR[10000][10000];
    int VALUE[10000];
    int tot_dec = 0;
   


    int aldec(char *s){
        for(int i=0;i<tot_dec;i++)
        {
                if(strcmp(VAR[i],s) == 0)
                        return 1;
        }return 0;
    }




    int setval(char *s,int val)
    {   
        int flag =-1;
        for(int i=0;i<tot_dec;i++)
        {
                if(strcmp(VAR[i],s)==0)
                {
                       VALUE[i]=val;
                       flag = 0;
                        break; 
                }

        }
        if(flag==-1){
        strcpy(VAR[tot_dec],s);
        VALUE[tot_dec]=val;
        tot_dec++;}
    }




    int getval(char *s)
    {
        int pos=-1;
        for(int i=0;i<tot_dec;i++)
        {
                if(strcmp(VAR[i],s)==0)
                {
                        pos = i;
                        break; 
                }

        }
        return pos;
    }




    int isprime(int n)
    {
        int i, flag = 0;
        if (n == 0 || n == 1)
        flag = 1;
        for (i = 2; i <= n / 2; ++i) 
        {
                if (n % i == 0) 
                {
                        flag = 1;
                        break;
                }
        }
        if (flag == 0)
        {
                return 1;
        }
        else
        {
                return 0;
        }

    }


/* Line 189 of yacc.c  */
#line 168 "main.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     VARIABLE = 259,
     begin = 260,
     end = 261,
     torr = 262,
     int_type = 263,
     plus = 264,
     minus = 265,
     into = 266,
     divi = 267,
     float_type = 268,
     eq = 269,
     char_type = 270,
     string_type = 271,
     inc = 272,
     dec = 273,
     eol = 274,
     power = 275,
     ge = 276,
     le = 277,
     eqeq = 278,
     gt = 279,
     ngt = 280,
     lt = 281,
     nlt = 282,
     neq = 283,
     mod = 284,
     prnt = 285,
     ssqrt = 286,
     prime = 287,
     ffor = 288,
     iiff = 289,
     eelse = 290,
     eelif = 291,
     wwhile = 292,
     ffunc = 293,
     sep = 294,
     FLOAT = 295,
     STRING = 296,
     CHARACTER = 297,
     slcmnt = 298,
     mlcmnt = 299,
     fbs = 300,
     fbf = 301,
     sbs = 302,
     sbf = 303,
     headr = 304,
     extension = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 260 "main.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   740

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  9
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNRULES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    12,    16,    19,    21,    25,
      29,    32,    35,    43,    56,    72,    88,   102,   116,   120,
     130,   136,   137,   139,   140,   144,   145,   154,   162,   163,
     168,   172,   176,   178,   180,   182,   186,   190,   194,   197,
     201,   204,   208,   212,   216,   220,   224,   228,   232,   236,
     240,   244,   247,   250,   253,   256,   259,   261
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    54,    55,    51,    -1,     5,    54,     6,
      -1,    -1,    55,    19,    55,    -1,    55,    55,    -1,    61,
      -1,     8,    60,    19,    -1,     4,    52,    61,    -1,    30,
      61,    -1,    30,    41,    -1,    34,    45,    61,    46,    47,
      55,    48,    -1,    34,    45,    61,    46,    47,    55,    48,
      58,    35,    47,    55,    48,    -1,    33,    45,    59,    19,
       4,    22,     3,    19,     4,    17,     3,    46,    47,    55,
      48,    -1,    33,    45,    59,    19,     4,    21,     3,    19,
       4,    18,     3,    46,    47,    55,    48,    -1,    37,    45,
       4,    21,     3,    46,    47,     4,    18,     3,    19,    55,
      48,    -1,    37,    45,     4,    22,     3,    46,    47,     4,
      17,     3,    19,    55,    48,    -1,     5,    55,     6,    -1,
      38,     4,    45,    57,    46,    47,    55,    48,     8,    -1,
      49,    45,     4,    56,    46,    -1,    -1,    50,    -1,    -1,
      57,     8,     4,    -1,    -1,    58,    36,    45,    61,    46,
      47,    55,    48,    -1,    36,    45,    61,    46,    47,    55,
      48,    -1,    -1,     8,     4,    52,    61,    -1,     4,    52,
      61,    -1,    60,    39,     4,    -1,     4,    -1,     3,    -1,
       4,    -1,    61,     9,    61,    -1,    61,    10,    61,    -1,
      61,    11,    61,    -1,    10,    61,    -1,    61,    20,    61,
      -1,    31,    61,    -1,    61,    29,    61,    -1,    61,    24,
      61,    -1,    61,    26,    61,    -1,    61,    23,    61,    -1,
      61,    28,    61,    -1,    61,    21,    61,    -1,    61,    22,
      61,    -1,    61,    25,    61,    -1,    61,    27,    61,    -1,
      61,    12,    61,    -1,    32,    61,    -1,     4,    17,    -1,
       4,    18,    -1,     3,    17,    -1,     3,    18,    -1,    43,
      -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   111,   115,   122,   123,   124,   126,   129,
     137,   138,   141,   152,   162,   172,   183,   186,   190,   194,
     198,   202,   206,   207,   215,   220,   230,   231,   232,   243,
     254,   267,   274,   283,   284,   296,   298,   300,   303,   306,
     309,   311,   314,   317,   320,   323,   326,   329,   332,   335,
     338,   341,   344,   354,   364,   368,   372,   376
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "VARIABLE", "begin", "end",
  "torr", "int_type", "plus", "minus", "into", "divi", "float_type", "eq",
  "char_type", "string_type", "inc", "dec", "eol", "power", "ge", "le",
  "eqeq", "gt", "ngt", "lt", "nlt", "neq", "mod", "prnt", "ssqrt", "prime",
  "ffor", "iiff", "eelse", "eelif", "wwhile", "ffunc", "sep", "FLOAT",
  "STRING", "CHARACTER", "slcmnt", "mlcmnt", "fbs", "fbf", "sbs", "sbf",
  "headr", "extension", "'\\n'", "'='", "$accept", "program", "statement",
  "wxt", "param", "elfb", "fstatement", "syn", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    10,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    57,    57,    58,    58,    58,    59,
      59,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     0,     3,     2,     1,     3,     3,
       2,     2,     7,    12,    15,    15,    13,    13,     3,     9,
       5,     0,     1,     0,     3,     0,     8,     7,     0,     4,
       3,     3,     1,     1,     1,     3,     3,     3,     2,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     4,    21,    21,     1,    33,    34,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,     0,
       0,     7,     3,    54,    55,    52,    53,     0,     0,    32,
       0,    34,    38,    11,    10,    40,    51,     0,     0,     0,
       0,     0,    21,     2,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      18,     8,     0,     0,     0,     0,     0,     0,    25,    23,
       5,    35,    36,    37,    50,    39,    46,    47,    44,    42,
      48,    43,    49,    45,    41,    31,     0,     0,     0,     0,
       0,     0,     0,    22,     0,    30,     0,     0,    21,     0,
       0,     0,     0,    20,    29,     0,     0,     0,     0,     0,
      24,    21,     0,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    21,     0,     0,    21,
      13,     0,     0,     0,    21,    21,     0,    21,    16,    17,
       0,     0,    27,     0,    15,    14,    26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    44,    94,    92,   121,    65,    30,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -18
static const yytype_int16 yypact[] =
{
      22,    22,    28,   507,   -18,   -11,    12,   581,     0,    80,
      84,    80,    80,    -6,    18,    31,    75,   -18,   -18,    36,
      70,   692,   -18,   -18,   -18,   -18,   -18,    80,   127,   -18,
     -17,     6,   711,   -18,   692,   692,   692,    17,    80,    78,
      41,    87,   581,   -18,   544,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,   692,
     -18,   -18,    88,    45,    89,    79,   611,    13,   -18,    49,
     544,   711,   711,   711,   711,   692,   161,    -9,   161,   161,
     161,   161,   161,   161,   692,   -18,    80,    53,   102,    63,
     114,   115,    -5,   -18,    74,   692,    80,    21,   581,    76,
      83,   134,    92,   -18,   692,   137,   138,   164,    95,    98,
     -18,   581,   129,   130,    32,   146,   147,   201,   150,   152,
     117,    34,   145,   149,   165,   157,   160,    80,   131,   135,
     176,   178,   -18,   188,   189,   638,   581,    80,   174,   180,
     154,   168,   156,   238,   665,   581,   581,   163,   169,   581,
     -18,   170,   275,   312,   581,   581,   349,   581,   -18,   -18,
     386,   423,   -18,   460,   -18,   -18,   -18
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -18,   214,    -2,   -18,   -18,   -18,   -18,   -18,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -29
static const yytype_int16 yytable[] =
{
      20,    20,    61,   101,    29,    28,    23,    24,    32,    34,
      35,    36,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    63,    62,    25,    26,    64,    59,     1,     4,    25,
      26,     5,     6,     7,    90,    91,     8,    66,     9,    37,
      70,   102,   105,   106,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    10,    11,
      12,    13,    14,    38,    27,    15,    16,   -28,   120,   128,
     129,    17,    18,     5,     6,     7,    39,    19,     8,    40,
       9,    41,    67,     5,    31,    95,    68,     5,    31,    42,
       9,    69,    85,    87,     9,   104,   107,    86,    88,    93,
      10,    11,    12,    13,    14,    96,    97,    15,    16,   117,
      98,    11,    12,    17,    18,    11,    12,    99,   100,    19,
     103,    43,   108,    17,    18,    33,   135,    17,    18,   109,
       5,     6,     7,    60,   143,     8,   144,     9,   110,   111,
     112,   113,   115,   152,   153,   116,    42,   156,   118,   119,
     122,   123,   160,   161,   125,   163,   126,    10,    11,    12,
      13,    14,   127,   130,    15,    16,   131,     5,     6,     7,
      17,    18,     8,   132,     9,   133,    19,   134,   136,   138,
     137,   139,    50,    42,    52,    53,    54,    55,    56,    57,
      58,   140,   141,   145,    10,    11,    12,    13,    14,   146,
     147,    15,    16,   149,     5,     6,     7,    17,    18,     8,
     154,     9,   114,    19,   148,     3,   155,   157,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,    12,    13,    14,     0,     0,    15,    16,
       0,     5,     6,     7,    17,    18,     8,     0,     9,   124,
      19,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
      12,    13,    14,     0,     0,    15,    16,     0,     5,     6,
       7,    17,    18,     8,     0,     9,   150,    19,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,    12,    13,    14,
       0,     0,    15,    16,     0,     5,     6,     7,    17,    18,
       8,     0,     9,   158,    19,     0,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,    12,    13,    14,     0,     0,    15,
      16,     0,     5,     6,     7,    17,    18,     8,     0,     9,
     159,    19,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,    12,    13,    14,     0,     0,    15,    16,     0,     5,
       6,     7,    17,    18,     8,     0,     9,   162,    19,     0,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,     0,     0,    15,    16,     0,     5,     6,     7,    17,
      18,     8,     0,     9,   164,    19,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,    12,    13,    14,     0,     0,
      15,    16,     0,     5,     6,     7,    17,    18,     8,     0,
       9,   165,    19,     0,     0,     0,     0,     0,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,    12,    13,    14,     0,     0,    15,    16,     0,
       0,     0,     0,    17,    18,     0,     0,     0,   166,    19,
       5,     6,     7,    22,     0,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,    12,
      13,    14,     0,     0,    15,    16,     0,     5,     6,     7,
      17,    18,     8,     0,     9,     0,    19,     0,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,    12,    13,    14,     0,
       0,    15,    16,     0,     5,     6,     7,    17,    18,     8,
       0,     9,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,    12,    13,    14,     0,     0,    15,    16,
      45,    46,    47,    48,    17,    18,     0,     0,     0,     0,
      19,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,    45,    46,    47,
      48,     0,     0,     0,     0,     0,     0,    89,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,     0,     0,
       0,     0,     0,     0,    45,    46,    47,    48,     0,     0,
       0,     0,     0,     0,   142,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,    45,    46,    47,    48,     0,     0,     0,     0,     0,
       0,   151,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,    52,    53,    54,    55,    56,    57,
      58
};

static const yytype_int16 yycheck[] =
{
       2,     3,    19,     8,     4,     7,    17,    18,     9,    10,
      11,    12,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     4,    39,    17,    18,     8,    27,     5,     0,    17,
      18,     3,     4,     5,    21,    22,     8,    38,    10,    45,
      42,    46,    21,    22,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    30,    31,
      32,    33,    34,    45,    52,    37,    38,    35,    36,    35,
      36,    43,    44,     3,     4,     5,    45,    49,     8,     4,
      10,    45,     4,     3,     4,    86,    45,     3,     4,    19,
      10,     4,     4,     4,    10,    96,    98,    52,    19,    50,
      30,    31,    32,    33,    34,    52,     4,    37,    38,   111,
      47,    31,    32,    43,    44,    31,    32,     3,     3,    49,
      46,    51,    46,    43,    44,    41,   127,    43,    44,    46,
       3,     4,     5,     6,   136,     8,   137,    10,     4,    47,
       3,     3,    47,   145,   146,    47,    19,   149,    19,    19,
       4,     4,   154,   155,     4,   157,     4,    30,    31,    32,
      33,    34,    45,    18,    37,    38,    17,     3,     4,     5,
      43,    44,     8,     8,    10,    18,    49,    17,    47,     3,
      45,     3,    21,    19,    23,    24,    25,    26,    27,    28,
      29,     3,     3,    19,    30,    31,    32,    33,    34,    19,
      46,    37,    38,    47,     3,     4,     5,    43,    44,     8,
      47,    10,    48,    49,    46,     1,    47,    47,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    37,    38,
      -1,     3,     4,     5,    43,    44,     8,    -1,    10,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    37,    38,    -1,     3,     4,
       5,    43,    44,     8,    -1,    10,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      -1,    -1,    37,    38,    -1,     3,     4,     5,    43,    44,
       8,    -1,    10,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    -1,    -1,    37,
      38,    -1,     3,     4,     5,    43,    44,     8,    -1,    10,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    -1,    -1,    37,    38,    -1,     3,
       4,     5,    43,    44,     8,    -1,    10,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    37,    38,    -1,     3,     4,     5,    43,
      44,     8,    -1,    10,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      37,    38,    -1,     3,     4,     5,    43,    44,     8,    -1,
      10,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    37,    38,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    48,    49,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    -1,    -1,    37,    38,    -1,     3,     4,     5,
      43,    44,     8,    -1,    10,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    -1,
      -1,    37,    38,    -1,     3,     4,     5,    43,    44,     8,
      -1,    10,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    37,    38,
       9,    10,    11,    12,    43,    44,    -1,    -1,    -1,    -1,
      49,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    46,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    54,    54,     0,     3,     4,     5,     8,    10,
      30,    31,    32,    33,    34,    37,    38,    43,    44,    49,
      55,    61,     6,    17,    18,    17,    18,    52,    55,     4,
      60,     4,    61,    41,    61,    61,    61,    45,    45,    45,
       4,    45,    19,    51,    55,     9,    10,    11,    12,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    61,
       6,    19,    39,     4,     8,    59,    61,     4,    45,     4,
      55,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,     4,    52,     4,    19,    46,
      21,    22,    57,    50,    56,    61,    52,     4,    47,     3,
       3,     8,    46,    46,    61,    21,    22,    55,    46,    46,
       4,    47,     3,     3,    48,    47,    47,    55,    19,    19,
      36,    58,     4,     4,    48,     4,     4,    45,    35,    36,
      18,    17,     8,    18,    17,    61,    47,    45,     3,     3,
       3,     3,    46,    55,    61,    19,    19,    46,    46,    47,
      48,    46,    55,    55,    47,    47,    55,    47,    48,    48,
      55,    55,    48,    55,    48,    48,    48
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 111 "main.y"
    {printf("program Successfully Ended");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 126 "main.y"
    { if((yyvsp[(2) - (3)]) == "not"){printf("INTEGER Declared\n\n");};}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 129 "main.y"
    {  if(aldec((yyvsp[(1) - (3)]))==1){setval((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));}
                                         else{
                                                printf("Not Declared\n\n");
                                         }
                                         ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 137 "main.y"
    {if((yyvsp[(2) - (2)]) != "not"){printf("%d\n\n", (yyvsp[(2) - (2)]));};}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 138 "main.y"
    {printf("%s\n\n", (yyvsp[(2) - (2)]));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 141 "main.y"
    {if((yyvsp[(3) - (7)]))
                                                                {
                                                                printf("If condition true\n\n");
                                                                } 
                                                            else{
                                                                printf("If condition false\n\n");
                                                                }
                                                                ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 152 "main.y"
    {if((yyvsp[(3) - (12)]))
                                                                {
                                                                printf("If condition true\n\n");
                                                                } 
                                                            else{
                                                                printf("If condition false\n\n");
                                                                }
                                                                ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 162 "main.y"
    {if((yyvsp[(3) - (15)]) != "not")
                                                                                        {for(int a =(yyvsp[(3) - (15)]);a<=(yyvsp[(7) - (15)]);a= a+ (yyvsp[(11) - (15)]))
                                                                                        { printf("For loop incremented by %d\n\n",(yyvsp[(11) - (15)]));
                                                                                        }
                                                                                        }
                                                                                         printf("For loop finished\n\n");
                                                                                        ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 172 "main.y"
    {if((yyvsp[(3) - (15)]) != "not")
                                                                                        {for(int a =(yyvsp[(3) - (15)]);a>=(yyvsp[(7) - (15)]);a= a - (yyvsp[(11) - (15)]))
                                                                                        { printf("For loop decremented by %d\n\n",(yyvsp[(11) - (15)]));
                                                                                        }
                                                                                        }
                                                                                         printf("For loop finished\n\n");
                                                                                        ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 183 "main.y"
    {int a = VALUE[getval((yyvsp[(3) - (13)]))];for(int i=a;i>=(yyvsp[(5) - (13)]);i=i-(yyvsp[(12) - (13)])){printf("While loop decremented by %d\n\n",(yyvsp[(12) - (13)]));}printf("While loop finished\n\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 186 "main.y"
    {int a = VALUE[getval((yyvsp[(3) - (13)]))];for(int i=a;i<=(yyvsp[(5) - (13)]);i=i+(yyvsp[(12) - (13)])){printf("While loop incremented by %d\n\n",(yyvsp[(12) - (13)]));}printf("While loop finished\n\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 190 "main.y"
    {printf("program started");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 194 "main.y"
    {printf("%s Function Declared\n\n",(yyvsp[(2) - (9)]));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 198 "main.y"
    {
                                                        printf("Header File Detected\n\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 215 "main.y"
    { if(aldec((yyvsp[(2) - (3)]))!=1){}
                                                          else{
                                                                printf("%s already Declared\n\n",(yyvsp[(2) - (3)]));
                                                                (yyval) = "not";
                                                          } ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 243 "main.y"
    { if(aldec((yyvsp[(2) - (4)]))!=1){setval((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));(yyval)=(yyvsp[(4) - (4)]);}
                                                          else{
                                                                printf("%s already Declared\n\n",(yyvsp[(2) - (4)]));
                                                                (yyval) = "not";
                                                          } ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 254 "main.y"
    {  if(aldec((yyvsp[(1) - (3)]))==1){setval((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));(yyval)=(yyvsp[(3) - (3)]);}
                                         else{
                                                printf("Not Declared\n\n");
                                                (yyval) = "not";
                                         }
                                         ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 267 "main.y"
    {
                                        if(aldec((yyvsp[(3) - (3)]))==1){printf("%s Declared Before\n\n",(yyvsp[(3) - (3)]));}
                                         else{setval((yyvsp[(3) - (3)]),0);(yyval) = "not";}
                                         ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 274 "main.y"
    {
                                        if(aldec((yyvsp[(1) - (1)]))==1){printf("%s Declared Before\n\n",(yyvsp[(1) - (1)]));}

                                         else{setval((yyvsp[(1) - (1)]),0);(yyval) = "not";}
                                         ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 284 "main.y"
    {
                                        
                                         if(aldec((yyvsp[(1) - (1)]))==0)
                                         {
                                                printf("Not Declared\n\n");
                                                (yyval)="not";
                                         }
                                         else
                                         {
                                                (yyval) = VALUE[getval((yyvsp[(1) - (1)]))];
                                        }
                                        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 296 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 298 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 300 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 303 "main.y"
    { (yyval) = -(yyvsp[(2) - (2)]);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 306 "main.y"
    { (yyval) = pow((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 309 "main.y"
    { (yyval) = sqrt((yyvsp[(2) - (2)]));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 311 "main.y"
    { (yyval) = (yyvsp[(1) - (3)])% (yyvsp[(3) - (3)]);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 314 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 317 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 320 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) == (yyvsp[(3) - (3)]);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 323 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) != (yyvsp[(3) - (3)]);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 326 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) >= (yyvsp[(3) - (3)]);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 329 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) <= (yyvsp[(3) - (3)]);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 332 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 335 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 338 "main.y"
    { (yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 341 "main.y"
    { (yyval) = isprime((yyvsp[(2) - (2)])); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 344 "main.y"
    { if(aldec((yyvsp[(1) - (2)]))==1){setval((yyvsp[(1) - (2)]),VALUE[getval((yyvsp[(1) - (2)]))]+1);
                                        (yyval) = "not";}
                                        else{
                                                printf("Not Declared\n\n");
                                                (yyval) = "not";
                                         }
                                        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 354 "main.y"
    { if(aldec((yyvsp[(1) - (2)]))==1){setval((yyvsp[(1) - (2)]),VALUE[getval((yyvsp[(1) - (2)]))]-1);
                                        (yyval) = "not";}
                                        else{
                                                printf("Not Declared\n\n");
                                                (yyval) = "not";
                                         }
                                        ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 364 "main.y"
    {(yyval) = (yyvsp[(1) - (2)]) + 1;;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 368 "main.y"
    {(yyval) = (yyvsp[(1) - (2)]) - 1;;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 372 "main.y"
    {printf("Single line comment : %s\n\n",(yyvsp[(1) - (1)]));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 376 "main.y"
    {printf("Multiple line Comment Starts : %s :Multiple line Comment Ends\n\n",(yyvsp[(1) - (1)]));;}
    break;



/* Line 1455 of yacc.c  */
#line 2070 "main.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 380 "main.y"




void yyerror(char *s) {

    fprintf(stderr, "%s\n\n", s);

}


int main(void) {

yyin=freopen("input.txt","r",stdin);

yyout = freopen("output.txt","w",stdout);

yyparse();

return 0;
}

