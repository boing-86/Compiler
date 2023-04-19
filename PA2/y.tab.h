/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 7 "parser.y"

	int iVal;
	float rVal;
	char* sVal;

#line 133 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
