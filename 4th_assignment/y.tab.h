/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 259,         /* TYPE_IDENTIFIER  */
    CHARACTER_CONSTANT = 260,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 261,          /* STRING_LITERAL  */
    FLOAT_CONSTANT = 262,          /* FLOAT_CONSTANT  */
    INTEGER_CONSTANT = 263,        /* INTEGER_CONSTANT  */
    ASSIGN = 264,                  /* ASSIGN  */
    MINUS = 265,                   /* MINUS  */
    PLUS = 266,                    /* PLUS  */
    SEMICOLON = 267,               /* SEMICOLON  */
    AMP = 268,                     /* AMP  */
    PERCENT = 269,                 /* PERCENT  */
    SLASH = 270,                   /* SLASH  */
    STAR = 271,                    /* STAR  */
    EXCL = 272,                    /* EXCL  */
    COMMA = 273,                   /* COMMA  */
    PERIOD = 274,                  /* PERIOD  */
    COLON = 275,                   /* COLON  */
    RR = 276,                      /* RR  */
    LR = 277,                      /* LR  */
    RB = 278,                      /* RB  */
    LB = 279,                      /* LB  */
    RP = 280,                      /* RP  */
    LP = 281,                      /* LP  */
    DOTDOTDOT = 282,               /* DOTDOTDOT  */
    BARBAR = 283,                  /* BARBAR  */
    AMPAMP = 284,                  /* AMPAMP  */
    NEQ = 285,                     /* NEQ  */
    EQL = 286,                     /* EQL  */
    GEQ = 287,                     /* GEQ  */
    LEQ = 288,                     /* LEQ  */
    GTR = 289,                     /* GTR  */
    LSS = 290,                     /* LSS  */
    ARROW = 291,                   /* ARROW  */
    MINUSMINUS = 292,              /* MINUSMINUS  */
    PLUSPLUS = 293,                /* PLUSPLUS  */
    WHILE_SYM = 294,               /* WHILE_SYM  */
    UNION_SYM = 295,               /* UNION_SYM  */
    TYPEDEF_SYM = 296,             /* TYPEDEF_SYM  */
    SWITCH_SYM = 297,              /* SWITCH_SYM  */
    STRUCT_SYM = 298,              /* STRUCT_SYM  */
    STATIC_SYM = 299,              /* STATIC_SYM  */
    SIZEOF_SYM = 300,              /* SIZEOF_SYM  */
    RETURN_SYM = 301,              /* RETURN_SYM  */
    IF_SYM = 302,                  /* IF_SYM  */
    FOR_SYM = 303,                 /* FOR_SYM  */
    ENUM_SYM = 304,                /* ENUM_SYM  */
    ELSE_SYM = 305,                /* ELSE_SYM  */
    DO_SYM = 306,                  /* DO_SYM  */
    DEFAULT_SYM = 307,             /* DEFAULT_SYM  */
    CONTINUE_SYM = 308,            /* CONTINUE_SYM  */
    CASE_SYM = 309,                /* CASE_SYM  */
    BREAK_SYM = 310,               /* BREAK_SYM  */
    AUTO_SYM = 311                 /* AUTO_SYM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define CHARACTER_CONSTANT 260
#define STRING_LITERAL 261
#define FLOAT_CONSTANT 262
#define INTEGER_CONSTANT 263
#define ASSIGN 264
#define MINUS 265
#define PLUS 266
#define SEMICOLON 267
#define AMP 268
#define PERCENT 269
#define SLASH 270
#define STAR 271
#define EXCL 272
#define COMMA 273
#define PERIOD 274
#define COLON 275
#define RR 276
#define LR 277
#define RB 278
#define LB 279
#define RP 280
#define LP 281
#define DOTDOTDOT 282
#define BARBAR 283
#define AMPAMP 284
#define NEQ 285
#define EQL 286
#define GEQ 287
#define LEQ 288
#define GTR 289
#define LSS 290
#define ARROW 291
#define MINUSMINUS 292
#define PLUSPLUS 293
#define WHILE_SYM 294
#define UNION_SYM 295
#define TYPEDEF_SYM 296
#define SWITCH_SYM 297
#define STRUCT_SYM 298
#define STATIC_SYM 299
#define SIZEOF_SYM 300
#define RETURN_SYM 301
#define IF_SYM 302
#define FOR_SYM 303
#define ENUM_SYM 304
#define ELSE_SYM 305
#define DO_SYM 306
#define DEFAULT_SYM 307
#define CONTINUE_SYM 308
#define CASE_SYM 309
#define BREAK_SYM 310
#define AUTO_SYM 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
