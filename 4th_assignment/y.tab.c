/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

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

	#define YYSTYPE_IS_DECLARED 1
	#define YYSTYPE long long

	#include "syntax.h"

	extern int line_no, syntax_err;
	extern A_NODE *root;
	extern A_ID *current_id;
	extern int current_level;
	extern A_TYPE *int_type, *float_type, *char_type, *void_type, *string_type;

    int yyerror(char *s);
	int yylex();

	A_NODE *makeNode (NODE_NAME,A_NODE *,A_NODE *,A_NODE *);
	A_NODE *makeNodeList (NODE_NAME,A_NODE *,A_NODE *);
	A_ID *makeIdentifier(char *);
	A_ID *makeDummyIdentifier();
	A_TYPE *makeType(T_KIND);
	A_SPECIFIER *makeSpecifier(A_TYPE *,S_KIND);
	A_ID *searchIdentifier(char *,A_ID *);
	A_ID *searchIdentifierAtCurrentLevel(char *,A_ID *);
	A_SPECIFIER *updateSpecifier(A_SPECIFIER *, A_TYPE *, S_KIND);
	A_ID *linkDeclaratorList(A_ID *,A_ID *) ;
	A_ID *getIdentifierDeclared(char *);
	A_TYPE *getTypeOfStructOrEnumRefIdentifier(T_KIND,char *,ID_KIND);
	A_ID *setDeclaratorInit(A_ID *,A_NODE *);
	A_ID *setDeclaratorKind(A_ID *,ID_KIND);
	A_ID *setDeclaratorType(A_ID *,A_TYPE *);
	A_ID *setDeclaratorElementType(A_ID *,A_TYPE *);
	A_ID *setDeclaratorTypeAndKind(A_ID *,A_TYPE *,ID_KIND);
	A_ID *setDeclaratorListSpecifier(A_ID *,A_SPECIFIER *);
	A_ID *setFunctionDeclaratorSpecifier(A_ID *, A_SPECIFIER *);
	A_ID *setFunctionDeclaratorBody(A_ID *, A_NODE *);
	A_ID *setParameterDeclaratorSpecifier(A_ID *, A_SPECIFIER *);
	A_ID *setStructDeclaratorListSpecifier(A_ID *, A_TYPE *);
	A_TYPE *setTypeNameSpecifier(A_TYPE *, A_SPECIFIER *);
	A_TYPE *setTypeElementType(A_TYPE *,A_TYPE *);
	A_TYPE *setTypeField(A_TYPE *,A_ID *);
	A_TYPE *setTypeExpr(A_TYPE *,A_NODE *);
	A_TYPE *setTypeAndKindOfDeclarator(A_TYPE *,ID_KIND,A_ID *);
	A_TYPE *setTypeStructOrEnumIdentifier(T_KIND,char *,ID_KIND);
	BOOLEAN isNotSameType(A_TYPE *, A_TYPE *);
	BOOLEAN isPointerOrArrayType(A_TYPE *);

#line 118 "y.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 4,            /* TYPE_IDENTIFIER  */
  YYSYMBOL_CHARACTER_CONSTANT = 5,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_FLOAT_CONSTANT = 7,             /* FLOAT_CONSTANT  */
  YYSYMBOL_INTEGER_CONSTANT = 8,           /* INTEGER_CONSTANT  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_PLUS = 11,                      /* PLUS  */
  YYSYMBOL_SEMICOLON = 12,                 /* SEMICOLON  */
  YYSYMBOL_AMP = 13,                       /* AMP  */
  YYSYMBOL_PERCENT = 14,                   /* PERCENT  */
  YYSYMBOL_SLASH = 15,                     /* SLASH  */
  YYSYMBOL_STAR = 16,                      /* STAR  */
  YYSYMBOL_EXCL = 17,                      /* EXCL  */
  YYSYMBOL_COMMA = 18,                     /* COMMA  */
  YYSYMBOL_PERIOD = 19,                    /* PERIOD  */
  YYSYMBOL_COLON = 20,                     /* COLON  */
  YYSYMBOL_RR = 21,                        /* RR  */
  YYSYMBOL_LR = 22,                        /* LR  */
  YYSYMBOL_RB = 23,                        /* RB  */
  YYSYMBOL_LB = 24,                        /* LB  */
  YYSYMBOL_RP = 25,                        /* RP  */
  YYSYMBOL_LP = 26,                        /* LP  */
  YYSYMBOL_DOTDOTDOT = 27,                 /* DOTDOTDOT  */
  YYSYMBOL_BARBAR = 28,                    /* BARBAR  */
  YYSYMBOL_AMPAMP = 29,                    /* AMPAMP  */
  YYSYMBOL_NEQ = 30,                       /* NEQ  */
  YYSYMBOL_EQL = 31,                       /* EQL  */
  YYSYMBOL_GEQ = 32,                       /* GEQ  */
  YYSYMBOL_LEQ = 33,                       /* LEQ  */
  YYSYMBOL_GTR = 34,                       /* GTR  */
  YYSYMBOL_LSS = 35,                       /* LSS  */
  YYSYMBOL_ARROW = 36,                     /* ARROW  */
  YYSYMBOL_MINUSMINUS = 37,                /* MINUSMINUS  */
  YYSYMBOL_PLUSPLUS = 38,                  /* PLUSPLUS  */
  YYSYMBOL_WHILE_SYM = 39,                 /* WHILE_SYM  */
  YYSYMBOL_UNION_SYM = 40,                 /* UNION_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 41,               /* TYPEDEF_SYM  */
  YYSYMBOL_SWITCH_SYM = 42,                /* SWITCH_SYM  */
  YYSYMBOL_STRUCT_SYM = 43,                /* STRUCT_SYM  */
  YYSYMBOL_STATIC_SYM = 44,                /* STATIC_SYM  */
  YYSYMBOL_SIZEOF_SYM = 45,                /* SIZEOF_SYM  */
  YYSYMBOL_RETURN_SYM = 46,                /* RETURN_SYM  */
  YYSYMBOL_IF_SYM = 47,                    /* IF_SYM  */
  YYSYMBOL_FOR_SYM = 48,                   /* FOR_SYM  */
  YYSYMBOL_ENUM_SYM = 49,                  /* ENUM_SYM  */
  YYSYMBOL_ELSE_SYM = 50,                  /* ELSE_SYM  */
  YYSYMBOL_DO_SYM = 51,                    /* DO_SYM  */
  YYSYMBOL_DEFAULT_SYM = 52,               /* DEFAULT_SYM  */
  YYSYMBOL_CONTINUE_SYM = 53,              /* CONTINUE_SYM  */
  YYSYMBOL_CASE_SYM = 54,                  /* CASE_SYM  */
  YYSYMBOL_BREAK_SYM = 55,                 /* BREAK_SYM  */
  YYSYMBOL_AUTO_SYM = 56,                  /* AUTO_SYM  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_translation_unit = 59,          /* translation_unit  */
  YYSYMBOL_external_declaration = 60,      /* external_declaration  */
  YYSYMBOL_function_definition = 61,       /* function_definition  */
  YYSYMBOL_62_1 = 62,                      /* @1  */
  YYSYMBOL_63_2 = 63,                      /* @2  */
  YYSYMBOL_declaration_list_opt = 64,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 65,          /* declaration_list  */
  YYSYMBOL_declaration = 66,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 67,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 68,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 69,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 70,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 71,           /* init_declarator  */
  YYSYMBOL_initializer = 72,               /* initializer  */
  YYSYMBOL_initializer_list = 73,          /* initializer_list  */
  YYSYMBOL_type_specifier = 74,            /* type_specifier  */
  YYSYMBOL_struct_type_specifier = 75,     /* struct_type_specifier  */
  YYSYMBOL_76_3 = 76,                      /* @3  */
  YYSYMBOL_77_4 = 77,                      /* @4  */
  YYSYMBOL_78_5 = 78,                      /* @5  */
  YYSYMBOL_79_6 = 79,                      /* @6  */
  YYSYMBOL_struct_or_union = 80,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 81,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 82,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 83,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 84,         /* struct_declarator  */
  YYSYMBOL_enum_type_specifier = 85,       /* enum_type_specifier  */
  YYSYMBOL_86_7 = 86,                      /* @7  */
  YYSYMBOL_87_8 = 87,                      /* @8  */
  YYSYMBOL_enumerator_list = 88,           /* enumerator_list  */
  YYSYMBOL_enumerator = 89,                /* enumerator  */
  YYSYMBOL_90_9 = 90,                      /* @9  */
  YYSYMBOL_declarator = 91,                /* declarator  */
  YYSYMBOL_pointer = 92,                   /* pointer  */
  YYSYMBOL_direct_declarator = 93,         /* direct_declarator  */
  YYSYMBOL_94_10 = 94,                     /* @10  */
  YYSYMBOL_parameter_type_list_opt = 95,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 96,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 97,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 98,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 99,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 100,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 101, /* direct_abstract_declarator  */
  YYSYMBOL_statement_list_opt = 102,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 103,           /* statement_list  */
  YYSYMBOL_statement = 104,                /* statement  */
  YYSYMBOL_labeled_statement = 105,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 106,       /* compound_statement  */
  YYSYMBOL_107_11 = 107,                   /* @11  */
  YYSYMBOL_expression_statement = 108,     /* expression_statement  */
  YYSYMBOL_selection_statement = 109,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 110,      /* iteration_statement  */
  YYSYMBOL_for_expression = 111,           /* for_expression  */
  YYSYMBOL_expression_opt = 112,           /* expression_opt  */
  YYSYMBOL_jump_statement = 113,           /* jump_statement  */
  YYSYMBOL_arg_expression_list_opt = 114,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 115,      /* arg_expression_list  */
  YYSYMBOL_constant_expression_opt = 116,  /* constant_expression_opt  */
  YYSYMBOL_constant_expression = 117,      /* constant_expression  */
  YYSYMBOL_expression = 118,               /* expression  */
  YYSYMBOL_comma_expression = 119,         /* comma_expression  */
  YYSYMBOL_assignment_expression = 120,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 121,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 122,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 123,   /* logical_and_expression  */
  YYSYMBOL_bitwise_or_expression = 124,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 125,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 126,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 127,      /* equality_expression  */
  YYSYMBOL_relational_expression = 128,    /* relational_expression  */
  YYSYMBOL_shift_expression = 129,         /* shift_expression  */
  YYSYMBOL_additive_expression = 130,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 131, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 132,          /* cast_expression  */
  YYSYMBOL_unary_expression = 133,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 134,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 135,       /* primary_expression  */
  YYSYMBOL_type_name = 136                 /* type_name  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int16 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   470

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    63,    64,    68,    69,    73,    73,    75,
      75,    80,    81,    85,    86,    90,    95,    96,    97,    98,
     103,   104,   105,   109,   110,   114,   115,   120,   121,   125,
     126,   130,   132,   136,   137,   138,   143,   144,   142,   147,
     147,   147,   150,   155,   156,   160,   161,   165,   170,   171,
     176,   181,   180,   183,   183,   185,   190,   191,   195,   198,
     197,   203,   204,   208,   209,   213,   214,   215,   217,   217,
     224,   225,   229,   230,   235,   236,   241,   243,   249,   250,
     254,   255,   256,   261,   262,   264,   266,   268,   273,   274,
     278,   280,   284,   285,   286,   287,   288,   289,   293,   295,
     300,   300,   307,   308,   312,   314,   316,   321,   323,   325,
     330,   335,   336,   340,   342,   344,   349,   350,   354,   356,
     361,   362,   366,   370,   374,   378,   379,   384,   388,   389,
     394,   395,   400,   404,   408,   412,   413,   415,   420,   421,
     423,   425,   427,   432,   436,   437,   439,   444,   445,   447,
     449,   454,   455,   460,   461,   463,   465,   466,   467,   468,
     469,   470,   472,   477,   478,   480,   482,   484,   486,   488,
     493,   495,   496,   497,   498,   499,   503
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPE_IDENTIFIER", "CHARACTER_CONSTANT", "STRING_LITERAL",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "ASSIGN", "MINUS", "PLUS",
  "SEMICOLON", "AMP", "PERCENT", "SLASH", "STAR", "EXCL", "COMMA",
  "PERIOD", "COLON", "RR", "LR", "RB", "LB", "RP", "LP", "DOTDOTDOT",
  "BARBAR", "AMPAMP", "NEQ", "EQL", "GEQ", "LEQ", "GTR", "LSS", "ARROW",
  "MINUSMINUS", "PLUSPLUS", "WHILE_SYM", "UNION_SYM", "TYPEDEF_SYM",
  "SWITCH_SYM", "STRUCT_SYM", "STATIC_SYM", "SIZEOF_SYM", "RETURN_SYM",
  "IF_SYM", "FOR_SYM", "ENUM_SYM", "ELSE_SYM", "DO_SYM", "DEFAULT_SYM",
  "CONTINUE_SYM", "CASE_SYM", "BREAK_SYM", "AUTO_SYM", "$accept",
  "program", "translation_unit", "external_declaration",
  "function_definition", "@1", "@2", "declaration_list_opt",
  "declaration_list", "declaration", "declaration_specifiers",
  "storage_class_specifier", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "initializer",
  "initializer_list", "type_specifier", "struct_type_specifier", "@3",
  "@4", "@5", "@6", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_type_specifier", "@7", "@8", "enumerator_list", "enumerator", "@9",
  "declarator", "pointer", "direct_declarator", "@10",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator",
  "statement_list_opt", "statement_list", "statement", "labeled_statement",
  "compound_statement", "@11", "expression_statement",
  "selection_statement", "iteration_statement", "for_expression",
  "expression_opt", "jump_statement", "arg_expression_list_opt",
  "arg_expression_list", "constant_expression_opt", "constant_expression",
  "expression", "comma_expression", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "bitwise_or_expression",
  "bitwise_xor_expression", "bitwise_and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "postfix_expression", "primary_expression",
  "type_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-165)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     225,  -165,  -165,    12,    27,  -165,  -165,  -165,  -165,    29,
    -165,    48,   225,  -165,  -165,  -165,    27,    85,    85,  -165,
      49,  -165,  -165,    30,    61,  -165,    32,    46,    58,  -165,
    -165,   104,   103,  -165,    22,  -165,  -165,   108,   117,   127,
      61,   372,  -165,  -165,   147,   170,  -165,    27,   336,   127,
     160,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,   372,
     372,   372,   372,   372,   205,   389,   389,   425,   153,  -165,
    -165,  -165,  -165,  -165,   157,   164,  -165,  -165,  -165,    77,
     200,  -165,   152,   209,  -165,   180,   234,  -165,    85,   170,
     190,    63,  -165,  -165,   191,   336,  -165,  -165,  -165,  -165,
      20,    85,  -165,  -165,  -165,  -165,  -165,  -165,    23,   179,
     182,   372,  -165,  -165,   205,  -165,  -165,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   211,   372,   372,   216,  -165,  -165,   107,   202,  -165,
     212,  -165,   126,   227,   170,  -165,  -165,   150,    20,    27,
     154,  -165,   272,    85,  -165,    27,   372,   289,   119,  -165,
    -165,   162,  -165,   372,   214,   164,  -165,   200,   200,  -165,
    -165,  -165,  -165,   209,   209,  -165,  -165,  -165,  -165,  -165,
     221,   230,   238,  -165,  -165,   116,  -165,    62,  -165,  -165,
      18,  -165,   372,  -165,   336,  -165,   177,    64,  -165,  -165,
    -165,  -165,  -165,   226,   231,   372,   233,   236,   272,   243,
     252,   372,   255,   265,   272,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,   261,  -165,   253,   262,   266,   162,   372,    85,
    -165,  -165,  -165,  -165,   372,  -165,  -165,  -165,  -165,  -165,
    -165,    27,   372,   372,   278,  -165,   372,   372,   256,   272,
    -165,   276,  -165,  -165,  -165,  -165,  -165,  -165,  -165,   269,
     279,  -165,  -165,   281,   282,  -165,   283,   287,   285,   277,
    -165,   272,  -165,  -165,   272,   272,   272,   272,   372,   372,
    -165,  -165,  -165,   271,  -165,   304,   297,   272,   372,   316,
    -165,  -165,  -165
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,    63,     0,    44,    22,    43,    21,    53,
      20,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,    64,     0,    55,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,   120,    68,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,   170,   173,   174,   172,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   127,   128,   130,   132,   133,   134,
     135,   138,   143,   144,   147,   151,   153,   163,    70,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,   159,   151,   160,   156,   157,   158,    78,     0,
       0,     0,   155,   154,     0,   161,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,   169,   168,    78,     0,    71,
      72,    74,     0,     0,     0,    54,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,   120,    70,    81,   176,
      79,    80,   175,     0,     0,   129,   131,   137,   136,   142,
     141,   140,   139,   146,   145,   150,   149,   148,   126,   166,
       0,     0,   117,   118,   167,    70,    76,    81,    77,    69,
       0,    52,     0,    57,     0,    30,     0,     0,    48,    50,
      41,    46,   102,     0,     0,   111,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,   120,    70,
     152,   162,   164,   165,     0,    73,    75,    60,    32,    38,
      47,     0,     0,     0,     0,   112,     0,   111,     0,     0,
     114,     0,   115,   101,    91,   103,    84,    86,    83,     0,
       0,   119,    49,     0,     0,   113,     0,     0,     0,     0,
      99,     0,    85,    87,     0,     0,     0,     0,   111,     0,
      98,   107,   106,   104,   109,     0,     0,     0,   111,     0,
     105,   110,   108
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,  -165,   319,  -165,  -165,  -165,  -165,  -165,   -82,
       8,  -165,  -165,  -165,   288,   -89,  -165,   -84,  -165,  -165,
    -165,  -165,  -165,  -165,   186,  -121,  -165,    95,  -165,  -165,
    -165,   248,   196,  -165,    -1,    -2,   -21,  -165,   -83,  -165,
    -165,   158,   213,  -130,  -137,  -165,  -165,   -97,  -165,    88,
    -165,  -165,  -165,  -165,  -165,  -164,  -165,  -165,  -165,  -138,
     -44,   -41,  -165,  -116,  -165,  -165,   237,   239,  -165,  -165,
    -165,    72,   178,  -165,    70,   -50,   -25,  -165,  -165,   241
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     137,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    44,
      28,    91,    92,   143,    22,    23,    24,    88,   225,   139,
     140,   141,   159,   160,   161,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   267,   244,   221,   181,   182,    68,
      69,   222,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,   110
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    25,    40,    26,    97,   138,   146,    70,    16,   102,
     104,   105,   106,   107,   178,    34,   149,   183,   224,   154,
      16,   227,     2,   109,     2,    35,    36,   226,     3,   201,
       1,    48,    27,     1,   103,   103,   103,   103,   103,     3,
     112,   113,   115,     3,    -7,   235,    94,   156,    29,   157,
     227,    97,    37,     4,    70,   226,     4,    43,     5,     6,
       5,     7,     8,     7,   149,     1,   149,     9,   -51,     9,
     109,   223,   108,   109,    10,   201,   240,   175,   176,   177,
      45,   144,   241,   268,   145,    41,   156,    42,   185,     2,
     259,   180,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   238,   158,   119,   120,   155,
       1,   248,   149,   230,   285,    70,    46,   254,   261,     1,
       2,    47,   108,     3,   291,     5,     6,    53,     7,     8,
     -36,   156,     3,   185,     9,   187,   186,    98,   103,    51,
     156,    10,   185,   156,   144,   157,   260,   191,   199,    52,
      97,   237,   270,    70,    94,   158,     5,     6,     2,     7,
       8,   155,   125,   126,   245,     9,    40,   251,   194,    89,
      70,   195,    10,    90,   280,   200,   116,   281,   282,   283,
     284,     2,    99,   187,    26,   117,   228,    70,   229,   130,
     290,   167,   168,   118,     5,   173,   174,     7,   239,   -59,
      48,   263,   264,     9,   162,   266,   245,   163,    54,     2,
      55,    56,    57,    58,   179,    59,    60,     5,    61,   184,
       7,    62,    63,   127,   128,   129,     9,   189,     1,     2,
     190,    64,   121,   122,   123,   124,   192,   245,   286,   231,
     199,     3,    65,    66,   232,     5,     6,   245,     7,     8,
      67,     4,   242,   131,     9,   233,   234,   243,   132,   246,
     133,    10,   247,   249,   250,     5,     6,   252,     7,     8,
     134,   135,   136,   255,     9,    54,   256,    55,    56,    57,
      58,    10,    59,    60,   202,    61,   253,   257,    62,    63,
     265,   258,   272,     2,    52,   269,   271,   278,    64,   169,
     170,   171,   172,   279,   273,     3,   274,   275,   276,    65,
      66,   203,   277,   156,   204,   157,   288,    67,   205,   206,
     207,   287,   289,   208,   209,   210,   211,   212,   292,     5,
       6,    30,     7,     8,   196,    93,   262,   142,     9,    54,
     193,    55,    56,    57,    58,    10,    59,    60,   236,    61,
     188,     0,    62,    63,   165,   164,     0,   166,    95,     0,
       0,     0,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    54,     0,    55,    56,    57,
      58,    67,    59,    60,     0,    61,     0,     0,    62,    63,
       0,     0,    54,     0,    55,    56,    57,    58,    64,    59,
      60,     0,    61,     0,     0,    62,    63,     0,     0,    65,
      66,     0,     0,     0,     0,   111,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,    54,     0,
      55,    56,    57,    58,    67,    59,    60,     0,    61,     0,
       0,    62,    63,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,     0,     0,     0,     0,
      67
};

static const yytype_int16 yycheck[] =
{
      41,     3,    23,     4,    48,    88,    95,    48,     0,    59,
      60,    61,    62,    63,   130,    16,   100,   133,   156,   101,
      12,   158,     4,    64,     4,    17,    18,   157,    16,   150,
       3,     9,     3,     3,    59,    60,    61,    62,    63,    16,
      65,    66,    67,    16,    22,    27,    47,    24,     0,    26,
     187,    95,     3,    26,    95,   185,    26,    25,    40,    41,
      40,    43,    44,    43,   148,     3,   150,    49,    22,    49,
     111,   153,    64,   114,    56,   196,    12,   127,   128,   129,
      22,    18,    18,   247,    21,    24,    24,    26,    26,     4,
     228,   132,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   194,   108,    30,    31,   101,
       3,   208,   196,   163,   278,   156,    12,   214,   234,     3,
       4,    18,   114,    16,   288,    40,    41,    39,    43,    44,
      22,    24,    16,    26,    49,   137,   137,    49,   163,    22,
      24,    56,    26,    24,    18,    26,   229,    21,   149,    22,
     194,   192,   249,   194,   155,   157,    40,    41,     4,    43,
      44,   153,    10,    11,   205,    49,   187,   211,    18,    22,
     211,    21,    56,     3,   271,    21,    23,   274,   275,   276,
     277,     4,    22,   185,   185,    28,    24,   228,    26,     9,
     287,   119,   120,    29,    40,   125,   126,    43,    21,     9,
       9,   242,   243,    49,    25,   246,   247,    25,     3,     4,
       5,     6,     7,     8,     3,    10,    11,    40,    13,     3,
      43,    16,    17,    14,    15,    16,    49,    25,     3,     4,
      18,    26,    32,    33,    34,    35,     9,   278,   279,    25,
     241,    16,    37,    38,    23,    40,    41,   288,    43,    44,
      45,    26,    26,    19,    49,    25,    18,    26,    24,    26,
      26,    56,    26,    20,    12,    40,    41,    12,    43,    44,
      36,    37,    38,    12,    49,     3,    23,     5,     6,     7,
       8,    56,    10,    11,    12,    13,    21,    25,    16,    17,
      12,    25,    23,     4,    22,    39,    20,    12,    26,   121,
     122,   123,   124,    26,    25,    16,    25,    25,    25,    37,
      38,    39,    25,    24,    42,    26,    12,    45,    46,    47,
      48,    50,    25,    51,    52,    53,    54,    55,    12,    40,
      41,    12,    43,    44,   148,    47,   241,    89,    49,     3,
     144,     5,     6,     7,     8,    56,    10,    11,   190,    13,
     137,    -1,    16,    17,   117,   114,    -1,   118,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,     3,    -1,     5,     6,     7,
       8,    45,    10,    11,    -1,    13,    -1,    -1,    16,    17,
      -1,    -1,     3,    -1,     5,     6,     7,     8,    26,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    -1,    -1,    37,
      38,    -1,    -1,    -1,    -1,    26,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,     3,    -1,
       5,     6,     7,     8,    45,    10,    11,    -1,    13,    -1,
      -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    16,    26,    40,    41,    43,    44,    49,
      56,    58,    59,    60,    61,    66,    67,    68,    74,    75,
      80,    85,    91,    92,    93,    92,    91,     3,    87,     0,
      60,    69,    70,    71,    91,    67,    67,     3,    78,    63,
      93,    24,    26,    25,    86,    22,    12,    18,     9,    62,
      76,    22,    22,   106,     3,     5,     6,     7,     8,    10,
      11,    13,    16,    17,    26,    37,    38,    45,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,    94,    22,
       3,    88,    89,    71,    91,    22,    72,   117,   106,    22,
      79,   107,   132,   133,   132,   132,   132,   132,    67,   118,
     136,    26,   133,   133,    26,   133,    23,    28,    29,    30,
      31,    32,    33,    34,    35,    10,    11,    14,    15,    16,
       9,    19,    24,    26,    36,    37,    38,    67,    95,    96,
      97,    98,    88,    90,    18,    21,    72,    73,    77,    74,
      81,    82,    64,    65,    66,    67,    24,    26,    92,    99,
     100,   101,    25,    25,   136,   123,   124,   128,   128,   129,
     129,   129,   129,   131,   131,   132,   132,   132,   120,     3,
     118,   114,   115,   120,     3,    26,    91,    92,    99,    25,
      18,    21,     9,    89,    18,    21,    81,    83,    84,    91,
      21,    82,    12,    39,    42,    46,    47,    48,    51,    52,
      53,    54,    55,   102,   103,   104,   105,   106,   108,   109,
     110,   113,   118,    66,   116,    95,   100,   101,    24,    26,
     132,    25,    23,    25,    18,    27,    98,   118,    72,    21,
      12,    18,    26,    26,   112,   118,    26,    26,   104,    20,
      12,   117,    12,    21,   104,    12,    23,    25,    25,   116,
      95,   120,    84,   118,   118,    12,   118,   111,   112,    39,
     104,    20,    23,    25,    25,    25,    25,    25,    12,    26,
     104,   104,   104,   104,   104,   112,   118,    50,    12,    25,
     104,   112,    12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    62,    61,    63,
      61,    64,    64,    65,    65,    66,    67,    67,    67,    67,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    76,    77,    75,    78,
      79,    75,    75,    80,    80,    81,    81,    82,    83,    83,
      84,    86,    85,    87,    85,    85,    88,    88,    89,    90,
      89,    91,    91,    92,    92,    93,    93,    93,    94,    93,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   101,   101,   101,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   105,   105,
     107,   106,   108,   108,   109,   109,   109,   110,   110,   110,
     111,   112,   112,   113,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   118,   119,   120,   120,   121,   122,   122,
     123,   123,   124,   125,   126,   127,   127,   127,   128,   128,
     128,   128,   128,   129,   130,   130,   130,   131,   131,   131,
     131,   132,   132,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   136
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: translation_unit  */
#line 59 "parser.y"
        {root=makeNode(N_PROGRAM,NIL,yyvsp[0],NIL); checkForwardReference();}
#line 1665 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 63 "parser.y"
                               {yyval=yyvsp[0];}
#line 1671 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 64 "parser.y"
                                                {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1677 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 68 "parser.y"
                              {yyval=yyvsp[0];}
#line 1683 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 69 "parser.y"
                      {yyval=yyvsp[0];}
#line 1689 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 73 "parser.y"
                                            {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 1695 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 74 "parser.y"
                          {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);current_id=yyvsp[-2];}
#line 1701 "y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 75 "parser.y"
                     {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],makeSpecifier(int_type,0));}
#line 1707 "y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 76 "parser.y"
                          {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);current_id=yyvsp[-2];}
#line 1713 "y.tab.c"
    break;

  case 11: /* declaration_list_opt: %empty  */
#line 80 "parser.y"
          {yyval=NIL;}
#line 1719 "y.tab.c"
    break;

  case 12: /* declaration_list_opt: declaration_list  */
#line 81 "parser.y"
                           {yyval=yyvsp[0];}
#line 1725 "y.tab.c"
    break;

  case 13: /* declaration_list: declaration  */
#line 85 "parser.y"
                      {yyval=yyvsp[0];}
#line 1731 "y.tab.c"
    break;

  case 14: /* declaration_list: declaration_list declaration  */
#line 86 "parser.y"
                                       {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1737 "y.tab.c"
    break;

  case 15: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 91 "parser.y"
        {yyval=setDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1743 "y.tab.c"
    break;

  case 16: /* declaration_specifiers: type_specifier  */
#line 95 "parser.y"
                         {yyval=makeSpecifier(yyvsp[0],0);}
#line 1749 "y.tab.c"
    break;

  case 17: /* declaration_specifiers: storage_class_specifier  */
#line 96 "parser.y"
                                  {yyval=makeSpecifier(0,yyvsp[0]);}
#line 1755 "y.tab.c"
    break;

  case 18: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 97 "parser.y"
                                                {yyval=updateSpecifier(yyvsp[0],yyvsp[-1],0);}
#line 1761 "y.tab.c"
    break;

  case 19: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 99 "parser.y"
        {yyval=updateSpecifier(yyvsp[0],0,yyvsp[-1]);}
#line 1767 "y.tab.c"
    break;

  case 20: /* storage_class_specifier: AUTO_SYM  */
#line 103 "parser.y"
                   {yyval=S_AUTO;}
#line 1773 "y.tab.c"
    break;

  case 21: /* storage_class_specifier: STATIC_SYM  */
#line 104 "parser.y"
                     {yyval=S_STATIC;}
#line 1779 "y.tab.c"
    break;

  case 22: /* storage_class_specifier: TYPEDEF_SYM  */
#line 105 "parser.y"
                      {yyval=S_TYPEDEF;}
#line 1785 "y.tab.c"
    break;

  case 23: /* init_declarator_list_opt: %empty  */
#line 109 "parser.y"
          {yyval=makeDummyIdentifier();}
#line 1791 "y.tab.c"
    break;

  case 24: /* init_declarator_list_opt: init_declarator_list  */
#line 110 "parser.y"
                               {yyval=yyvsp[0];}
#line 1797 "y.tab.c"
    break;

  case 25: /* init_declarator_list: init_declarator  */
#line 114 "parser.y"
                          {yyval=yyvsp[0];}
#line 1803 "y.tab.c"
    break;

  case 26: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 116 "parser.y"
        {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1809 "y.tab.c"
    break;

  case 27: /* init_declarator: declarator  */
#line 120 "parser.y"
                     {yyval=yyvsp[0];}
#line 1815 "y.tab.c"
    break;

  case 28: /* init_declarator: declarator ASSIGN initializer  */
#line 121 "parser.y"
                                        {yyval=setDeclaratorInit((A_ID*)yyvsp[-2],(A_NODE*)yyvsp[0]);}
#line 1821 "y.tab.c"
    break;

  case 29: /* initializer: constant_expression  */
#line 125 "parser.y"
                              {yyval=(A_NODE*)makeNode(N_INIT_LIST_ONE,NIL,yyvsp[0],NIL);}
#line 1827 "y.tab.c"
    break;

  case 30: /* initializer: LR initializer_list RR  */
#line 126 "parser.y"
                                 {yyval=yyvsp[-1];}
#line 1833 "y.tab.c"
    break;

  case 31: /* initializer_list: initializer  */
#line 131 "parser.y"
        {yyval=makeNode(N_INIT_LIST,yyvsp[0],NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1839 "y.tab.c"
    break;

  case 32: /* initializer_list: initializer_list COMMA initializer  */
#line 132 "parser.y"
                                             {yyval=makeNodeList(N_INIT_LIST,yyvsp[-2],yyvsp[0]);}
#line 1845 "y.tab.c"
    break;

  case 33: /* type_specifier: struct_type_specifier  */
#line 136 "parser.y"
                                {yyval = yyvsp[0];}
#line 1851 "y.tab.c"
    break;

  case 34: /* type_specifier: enum_type_specifier  */
#line 137 "parser.y"
                              {yyval = yyvsp[0];}
#line 1857 "y.tab.c"
    break;

  case 35: /* type_specifier: TYPE_IDENTIFIER  */
#line 138 "parser.y"
                          {yyval = yyvsp[0];}
#line 1863 "y.tab.c"
    break;

  case 36: /* @3: %empty  */
#line 143 "parser.y"
        {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1869 "y.tab.c"
    break;

  case 37: /* @4: %empty  */
#line 144 "parser.y"
           { yyval=current_id;current_level++;}
#line 1875 "y.tab.c"
    break;

  case 38: /* struct_type_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 145 "parser.y"
        {checkForwardReference();yyval=setTypeField(yyvsp[-4],yyvsp[-1]);current_level--;
	current_id=yyvsp[-2];}
#line 1882 "y.tab.c"
    break;

  case 39: /* @5: %empty  */
#line 147 "parser.y"
                          {yyval=makeType(yyvsp[0]);}
#line 1888 "y.tab.c"
    break;

  case 40: /* @6: %empty  */
#line 147 "parser.y"
                                                {yyval=current_id;current_level++;}
#line 1894 "y.tab.c"
    break;

  case 41: /* struct_type_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 148 "parser.y"
                                   {checkForwardReference();yyval=setTypeField(yyvsp[-4],yyvsp[-1]);
	current_level--;current_id=yyvsp[-2];}
#line 1901 "y.tab.c"
    break;

  case 42: /* struct_type_specifier: struct_or_union IDENTIFIER  */
#line 151 "parser.y"
        {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1907 "y.tab.c"
    break;

  case 43: /* struct_or_union: STRUCT_SYM  */
#line 155 "parser.y"
                     {yyval=T_STRUCT;}
#line 1913 "y.tab.c"
    break;

  case 44: /* struct_or_union: UNION_SYM  */
#line 156 "parser.y"
                    {yyval=T_UNION;}
#line 1919 "y.tab.c"
    break;

  case 45: /* struct_declaration_list: struct_declaration  */
#line 160 "parser.y"
                             {yyval=yyvsp[0];}
#line 1925 "y.tab.c"
    break;

  case 46: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 161 "parser.y"
                                                     {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1931 "y.tab.c"
    break;

  case 47: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 166 "parser.y"
        {yyval=setStructDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1937 "y.tab.c"
    break;

  case 48: /* struct_declarator_list: struct_declarator  */
#line 170 "parser.y"
                            {yyval=yyvsp[0];}
#line 1943 "y.tab.c"
    break;

  case 49: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 172 "parser.y"
        {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1949 "y.tab.c"
    break;

  case 50: /* struct_declarator: declarator  */
#line 176 "parser.y"
                     {yyval=yyvsp[0];}
#line 1955 "y.tab.c"
    break;

  case 51: /* @7: %empty  */
#line 181 "parser.y"
        {yyval=setTypeStructOrEnumIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1961 "y.tab.c"
    break;

  case 52: /* enum_type_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 182 "parser.y"
                              {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1967 "y.tab.c"
    break;

  case 53: /* @8: %empty  */
#line 183 "parser.y"
                   {yyval=makeType(T_ENUM);}
#line 1973 "y.tab.c"
    break;

  case 54: /* enum_type_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 184 "parser.y"
                              {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1979 "y.tab.c"
    break;

  case 55: /* enum_type_specifier: ENUM_SYM IDENTIFIER  */
#line 186 "parser.y"
        {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1985 "y.tab.c"
    break;

  case 56: /* enumerator_list: enumerator  */
#line 190 "parser.y"
                     {yyval=yyvsp[0];}
#line 1991 "y.tab.c"
    break;

  case 57: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 191 "parser.y"
                                           {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1997 "y.tab.c"
    break;

  case 58: /* enumerator: IDENTIFIER  */
#line 196 "parser.y"
        {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 2003 "y.tab.c"
    break;

  case 59: /* @9: %empty  */
#line 198 "parser.y"
        {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 2009 "y.tab.c"
    break;

  case 60: /* enumerator: IDENTIFIER @9 ASSIGN expression  */
#line 199 "parser.y"
                          {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 2015 "y.tab.c"
    break;

  case 61: /* declarator: pointer direct_declarator  */
#line 203 "parser.y"
                                    {yyval=setDeclaratorElementType(yyvsp[0],yyvsp[-1]);}
#line 2021 "y.tab.c"
    break;

  case 62: /* declarator: direct_declarator  */
#line 204 "parser.y"
                            {yyval=yyvsp[0];}
#line 2027 "y.tab.c"
    break;

  case 63: /* pointer: STAR  */
#line 208 "parser.y"
               {yyval=makeType(T_POINTER);}
#line 2033 "y.tab.c"
    break;

  case 64: /* pointer: STAR pointer  */
#line 209 "parser.y"
                       {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2039 "y.tab.c"
    break;

  case 65: /* direct_declarator: IDENTIFIER  */
#line 213 "parser.y"
                     {yyval=makeIdentifier(yyvsp[0]);}
#line 2045 "y.tab.c"
    break;

  case 66: /* direct_declarator: LP declarator RP  */
#line 214 "parser.y"
                           {yyval=yyvsp[-1];}
#line 2051 "y.tab.c"
    break;

  case 67: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 216 "parser.y"
        {yyval=setDeclaratorElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2057 "y.tab.c"
    break;

  case 68: /* @10: %empty  */
#line 217 "parser.y"
                               {yyval=current_id;current_level++;}
#line 2063 "y.tab.c"
    break;

  case 69: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 219 "parser.y"
        {checkForwardReference();current_id=yyvsp[-2];current_level--;
	yyval=setDeclaratorElementType(yyvsp[-4],setTypeField(makeType(T_FUNC),yyvsp[-1]));}
#line 2070 "y.tab.c"
    break;

  case 70: /* parameter_type_list_opt: %empty  */
#line 224 "parser.y"
          {yyval=NIL;}
#line 2076 "y.tab.c"
    break;

  case 71: /* parameter_type_list_opt: parameter_type_list  */
#line 225 "parser.y"
                              {yyval=yyvsp[0];}
#line 2082 "y.tab.c"
    break;

  case 72: /* parameter_type_list: parameter_list  */
#line 229 "parser.y"
                         {yyval=yyvsp[0];}
#line 2088 "y.tab.c"
    break;

  case 73: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 230 "parser.y"
                                         {yyval=linkDeclaratorList(
	yyvsp[-2],setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2095 "y.tab.c"
    break;

  case 74: /* parameter_list: parameter_declaration  */
#line 235 "parser.y"
                                {yyval=yyvsp[0];}
#line 2101 "y.tab.c"
    break;

  case 75: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 237 "parser.y"
        {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 2107 "y.tab.c"
    break;

  case 76: /* parameter_declaration: declaration_specifiers declarator  */
#line 242 "parser.y"
        {yyval=setParameterDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2113 "y.tab.c"
    break;

  case 77: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 244 "parser.y"
        {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(
	makeDummyIdentifier(),yyvsp[0]),yyvsp[-1]);}
#line 2120 "y.tab.c"
    break;

  case 78: /* abstract_declarator_opt: %empty  */
#line 249 "parser.y"
          {yyval=NIL;}
#line 2126 "y.tab.c"
    break;

  case 79: /* abstract_declarator_opt: abstract_declarator  */
#line 250 "parser.y"
                              {yyval=yyvsp[0];}
#line 2132 "y.tab.c"
    break;

  case 80: /* abstract_declarator: direct_abstract_declarator  */
#line 254 "parser.y"
                                     {yyval=yyvsp[0];}
#line 2138 "y.tab.c"
    break;

  case 81: /* abstract_declarator: pointer  */
#line 255 "parser.y"
                  {yyval=makeType(T_POINTER);}
#line 2144 "y.tab.c"
    break;

  case 82: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 257 "parser.y"
        {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2150 "y.tab.c"
    break;

  case 83: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 261 "parser.y"
                                    {yyval=yyvsp[-1];}
#line 2156 "y.tab.c"
    break;

  case 84: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 263 "parser.y"
        {yyval=setTypeExpr(makeType(T_ARRAY),yyvsp[-1]);}
#line 2162 "y.tab.c"
    break;

  case 85: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 265 "parser.y"
        {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2168 "y.tab.c"
    break;

  case 86: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 267 "parser.y"
        {yyval=setTypeExpr(makeType(T_FUNC),yyvsp[-1]);}
#line 2174 "y.tab.c"
    break;

  case 87: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 269 "parser.y"
        {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_FUNC),yyvsp[-1]));}
#line 2180 "y.tab.c"
    break;

  case 88: /* statement_list_opt: %empty  */
#line 273 "parser.y"
          {yyval=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2186 "y.tab.c"
    break;

  case 89: /* statement_list_opt: statement_list  */
#line 274 "parser.y"
                         {yyval=yyvsp[0];}
#line 2192 "y.tab.c"
    break;

  case 90: /* statement_list: statement  */
#line 278 "parser.y"
                    {yyval=makeNode(N_STMT_LIST,yyvsp[0],NIL,
	makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2199 "y.tab.c"
    break;

  case 91: /* statement_list: statement_list statement  */
#line 280 "parser.y"
                                   {yyval=makeNodeList(N_STMT_LIST,yyvsp[-1],yyvsp[0]);}
#line 2205 "y.tab.c"
    break;

  case 92: /* statement: labeled_statement  */
#line 284 "parser.y"
                            {yyval=yyvsp[0];}
#line 2211 "y.tab.c"
    break;

  case 93: /* statement: compound_statement  */
#line 285 "parser.y"
                             {yyval=yyvsp[0];}
#line 2217 "y.tab.c"
    break;

  case 94: /* statement: expression_statement  */
#line 286 "parser.y"
                               {yyval=yyvsp[0];}
#line 2223 "y.tab.c"
    break;

  case 95: /* statement: selection_statement  */
#line 287 "parser.y"
                              {yyval=yyvsp[0];}
#line 2229 "y.tab.c"
    break;

  case 96: /* statement: iteration_statement  */
#line 288 "parser.y"
                              {yyval=yyvsp[0];}
#line 2235 "y.tab.c"
    break;

  case 97: /* statement: jump_statement  */
#line 289 "parser.y"
                         {yyval=yyvsp[0];}
#line 2241 "y.tab.c"
    break;

  case 98: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 294 "parser.y"
        {yyval=makeNode(N_STMT_LABEL_CASE, yyvsp[-2],NIL,yyvsp[0]);}
#line 2247 "y.tab.c"
    break;

  case 99: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 296 "parser.y"
        {yyval=makeNode(N_STMT_LABEL_DEFAULT,NIL,yyvsp[0],NIL);}
#line 2253 "y.tab.c"
    break;

  case 100: /* @11: %empty  */
#line 300 "parser.y"
             {yyval=current_id;current_level++;}
#line 2259 "y.tab.c"
    break;

  case 101: /* compound_statement: LR @11 declaration_list_opt statement_list_opt RR  */
#line 301 "parser.y"
                              {checkForwardReference();
	yyval=makeNode(N_STMT_COMPOUND,yyvsp[-2],NIL,yyvsp[-1]); current_id=yyvsp[-3];
	current_level--;}
#line 2267 "y.tab.c"
    break;

  case 102: /* expression_statement: SEMICOLON  */
#line 307 "parser.y"
                    {yyval=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2273 "y.tab.c"
    break;

  case 103: /* expression_statement: expression SEMICOLON  */
#line 308 "parser.y"
                               {yyval=makeNode(N_STMT_EXPRESSION,NIL,yyvsp[-1],NIL);}
#line 2279 "y.tab.c"
    break;

  case 104: /* selection_statement: IF_SYM LP expression RP statement  */
#line 313 "parser.y"
        {yyval=makeNode(N_STMT_IF,yyvsp[-2],NIL,yyvsp[0]);}
#line 2285 "y.tab.c"
    break;

  case 105: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 315 "parser.y"
        {yyval=makeNode(N_STMT_IF_ELSE,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2291 "y.tab.c"
    break;

  case 106: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 317 "parser.y"
        {yyval=makeNode(N_STMT_SWITCH,yyvsp[-2],NIL,yyvsp[0]);}
#line 2297 "y.tab.c"
    break;

  case 107: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 322 "parser.y"
        {yyval=makeNode(N_STMT_WHILE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2303 "y.tab.c"
    break;

  case 108: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 324 "parser.y"
        {yyval=makeNode(N_STMT_DO,yyvsp[-5],NIL,yyvsp[-2]);}
#line 2309 "y.tab.c"
    break;

  case 109: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 326 "parser.y"
        {yyval=makeNode(N_STMT_FOR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2315 "y.tab.c"
    break;

  case 110: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 331 "parser.y"
        {yyval=makeNode(N_FOR_EXP,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2321 "y.tab.c"
    break;

  case 111: /* expression_opt: %empty  */
#line 335 "parser.y"
                      {yyval=NIL;}
#line 2327 "y.tab.c"
    break;

  case 112: /* expression_opt: expression  */
#line 336 "parser.y"
                     {yyval=yyvsp[0];}
#line 2333 "y.tab.c"
    break;

  case 113: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 341 "parser.y"
        {yyval=makeNode(N_STMT_RETURN,NIL,yyvsp[-1],NIL);}
#line 2339 "y.tab.c"
    break;

  case 114: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 343 "parser.y"
        {yyval=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2345 "y.tab.c"
    break;

  case 115: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 345 "parser.y"
        {yyval=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2351 "y.tab.c"
    break;

  case 116: /* arg_expression_list_opt: %empty  */
#line 349 "parser.y"
          {yyval=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2357 "y.tab.c"
    break;

  case 117: /* arg_expression_list_opt: arg_expression_list  */
#line 350 "parser.y"
                              {yyval=yyvsp[0];}
#line 2363 "y.tab.c"
    break;

  case 118: /* arg_expression_list: assignment_expression  */
#line 355 "parser.y"
        {yyval=makeNode(N_ARG_LIST,yyvsp[0],NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2369 "y.tab.c"
    break;

  case 119: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 357 "parser.y"
        {yyval=makeNodeList(N_ARG_LIST,yyvsp[-2],yyvsp[0]);}
#line 2375 "y.tab.c"
    break;

  case 120: /* constant_expression_opt: %empty  */
#line 361 "parser.y"
          {yyval=NIL;}
#line 2381 "y.tab.c"
    break;

  case 121: /* constant_expression_opt: constant_expression  */
#line 362 "parser.y"
                              {yyval=yyvsp[0];}
#line 2387 "y.tab.c"
    break;

  case 122: /* constant_expression: expression  */
#line 366 "parser.y"
                     {yyval=yyvsp[0];}
#line 2393 "y.tab.c"
    break;

  case 123: /* expression: comma_expression  */
#line 370 "parser.y"
                           {yyval=yyvsp[0];}
#line 2399 "y.tab.c"
    break;

  case 124: /* comma_expression: assignment_expression  */
#line 374 "parser.y"
                                {yyval=yyvsp[0];}
#line 2405 "y.tab.c"
    break;

  case 125: /* assignment_expression: conditional_expression  */
#line 378 "parser.y"
                                 {yyval=yyvsp[0];}
#line 2411 "y.tab.c"
    break;

  case 126: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 380 "parser.y"
        {yyval=makeNode(N_EXP_ASSIGN,yyvsp[-2],NIL,yyvsp[0]);}
#line 2417 "y.tab.c"
    break;

  case 127: /* conditional_expression: logical_or_expression  */
#line 384 "parser.y"
                                {yyval=yyvsp[0];}
#line 2423 "y.tab.c"
    break;

  case 128: /* logical_or_expression: logical_and_expression  */
#line 388 "parser.y"
                                 {yyval=yyvsp[0];}
#line 2429 "y.tab.c"
    break;

  case 129: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 390 "parser.y"
        {yyval=makeNode(N_EXP_OR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2435 "y.tab.c"
    break;

  case 130: /* logical_and_expression: bitwise_or_expression  */
#line 394 "parser.y"
                                {yyval=yyvsp[0];}
#line 2441 "y.tab.c"
    break;

  case 131: /* logical_and_expression: logical_and_expression AMPAMP bitwise_or_expression  */
#line 396 "parser.y"
        {yyval=makeNode(N_EXP_AND,yyvsp[-2],NIL,yyvsp[0]);}
#line 2447 "y.tab.c"
    break;

  case 132: /* bitwise_or_expression: bitwise_xor_expression  */
#line 400 "parser.y"
                                 {yyval=yyvsp[0];}
#line 2453 "y.tab.c"
    break;

  case 133: /* bitwise_xor_expression: bitwise_and_expression  */
#line 404 "parser.y"
                                 {yyval=yyvsp[0];}
#line 2459 "y.tab.c"
    break;

  case 134: /* bitwise_and_expression: equality_expression  */
#line 408 "parser.y"
                              {yyval=yyvsp[0];}
#line 2465 "y.tab.c"
    break;

  case 135: /* equality_expression: relational_expression  */
#line 412 "parser.y"
                                {yyval=yyvsp[0];}
#line 2471 "y.tab.c"
    break;

  case 136: /* equality_expression: equality_expression EQL relational_expression  */
#line 414 "parser.y"
        {yyval=makeNode(N_EXP_EQL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2477 "y.tab.c"
    break;

  case 137: /* equality_expression: equality_expression NEQ relational_expression  */
#line 416 "parser.y"
        {yyval=makeNode(N_EXP_NEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2483 "y.tab.c"
    break;

  case 138: /* relational_expression: shift_expression  */
#line 420 "parser.y"
                           {yyval=yyvsp[0];}
#line 2489 "y.tab.c"
    break;

  case 139: /* relational_expression: relational_expression LSS shift_expression  */
#line 422 "parser.y"
        {yyval=makeNode(N_EXP_LSS,yyvsp[-2],NIL,yyvsp[0]);}
#line 2495 "y.tab.c"
    break;

  case 140: /* relational_expression: relational_expression GTR shift_expression  */
#line 424 "parser.y"
        {yyval=makeNode(N_EXP_GTR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2501 "y.tab.c"
    break;

  case 141: /* relational_expression: relational_expression LEQ shift_expression  */
#line 426 "parser.y"
        {yyval=makeNode(N_EXP_LEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2507 "y.tab.c"
    break;

  case 142: /* relational_expression: relational_expression GEQ shift_expression  */
#line 428 "parser.y"
        {yyval=makeNode(N_EXP_GEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2513 "y.tab.c"
    break;

  case 143: /* shift_expression: additive_expression  */
#line 432 "parser.y"
                              {yyval=yyvsp[0];}
#line 2519 "y.tab.c"
    break;

  case 144: /* additive_expression: multiplicative_expression  */
#line 436 "parser.y"
                                    {yyval=yyvsp[0];}
#line 2525 "y.tab.c"
    break;

  case 145: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 438 "parser.y"
        {yyval=makeNode(N_EXP_ADD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2531 "y.tab.c"
    break;

  case 146: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 440 "parser.y"
        {yyval=makeNode(N_EXP_SUB,yyvsp[-2],NIL,yyvsp[0]);}
#line 2537 "y.tab.c"
    break;

  case 147: /* multiplicative_expression: cast_expression  */
#line 444 "parser.y"
                          {yyval=yyvsp[0];}
#line 2543 "y.tab.c"
    break;

  case 148: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 446 "parser.y"
        {yyval=makeNode(N_EXP_MUL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2549 "y.tab.c"
    break;

  case 149: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 448 "parser.y"
        {yyval= makeNode(N_EXP_DIV,yyvsp[-2],NIL,yyvsp[0]);}
#line 2555 "y.tab.c"
    break;

  case 150: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 450 "parser.y"
        {yyval= makeNode(N_EXP_MOD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2561 "y.tab.c"
    break;

  case 151: /* cast_expression: unary_expression  */
#line 454 "parser.y"
                           {yyval=yyvsp[0];}
#line 2567 "y.tab.c"
    break;

  case 152: /* cast_expression: LP type_name RP cast_expression  */
#line 456 "parser.y"
        {yyval=makeNode(N_EXP_CAST,yyvsp[-2],NIL,yyvsp[0]);}
#line 2573 "y.tab.c"
    break;

  case 153: /* unary_expression: postfix_expression  */
#line 460 "parser.y"
                             {yyval=yyvsp[0];}
#line 2579 "y.tab.c"
    break;

  case 154: /* unary_expression: PLUSPLUS unary_expression  */
#line 462 "parser.y"
        {yyval=makeNode(N_EXP_PRE_INC,NIL,yyvsp[0],NIL);}
#line 2585 "y.tab.c"
    break;

  case 155: /* unary_expression: MINUSMINUS unary_expression  */
#line 464 "parser.y"
        {yyval=makeNode(N_EXP_PRE_DEC,NIL,yyvsp[0],NIL);}
#line 2591 "y.tab.c"
    break;

  case 156: /* unary_expression: AMP cast_expression  */
#line 465 "parser.y"
                              {yyval=makeNode(N_EXP_AMP,NIL,yyvsp[0],NIL);}
#line 2597 "y.tab.c"
    break;

  case 157: /* unary_expression: STAR cast_expression  */
#line 466 "parser.y"
                               {yyval=makeNode(N_EXP_STAR,NIL,yyvsp[0],NIL);}
#line 2603 "y.tab.c"
    break;

  case 158: /* unary_expression: EXCL cast_expression  */
#line 467 "parser.y"
                               {yyval=makeNode(N_EXP_NOT,NIL,yyvsp[0],NIL);}
#line 2609 "y.tab.c"
    break;

  case 159: /* unary_expression: MINUS cast_expression  */
#line 468 "parser.y"
                                {yyval=makeNode(N_EXP_MINUS,NIL,yyvsp[0],NIL);}
#line 2615 "y.tab.c"
    break;

  case 160: /* unary_expression: PLUS cast_expression  */
#line 469 "parser.y"
                               {yyval=makeNode(N_EXP_PLUS,NIL,yyvsp[0],NIL);}
#line 2621 "y.tab.c"
    break;

  case 161: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 471 "parser.y"
        {yyval=makeNode(N_EXP_SIZE_EXP,NIL,yyvsp[0],NIL);}
#line 2627 "y.tab.c"
    break;

  case 162: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 473 "parser.y"
        {yyval=makeNode(N_EXP_SIZE_TYPE,NIL,yyvsp[-1],NIL);}
#line 2633 "y.tab.c"
    break;

  case 163: /* postfix_expression: primary_expression  */
#line 477 "parser.y"
                             {yyval=yyvsp[0];}
#line 2639 "y.tab.c"
    break;

  case 164: /* postfix_expression: postfix_expression LB expression RB  */
#line 479 "parser.y"
        {yyval=makeNode(N_EXP_ARRAY,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2645 "y.tab.c"
    break;

  case 165: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 481 "parser.y"
        {yyval=makeNode(N_EXP_FUNCTION_CALL,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2651 "y.tab.c"
    break;

  case 166: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 483 "parser.y"
        {yyval=makeNode(N_EXP_STRUCT,yyvsp[-2],NIL,yyvsp[0]);}
#line 2657 "y.tab.c"
    break;

  case 167: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 485 "parser.y"
        {yyval=makeNode(N_EXP_ARROW,yyvsp[-2],NIL,yyvsp[0]);}
#line 2663 "y.tab.c"
    break;

  case 168: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 487 "parser.y"
        {yyval=makeNode(N_EXP_POST_INC,NIL,yyvsp[-1],NIL);}
#line 2669 "y.tab.c"
    break;

  case 169: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 489 "parser.y"
        {yyval=makeNode(N_EXP_POST_DEC,NIL,yyvsp[-1],NIL);}
#line 2675 "y.tab.c"
    break;

  case 170: /* primary_expression: IDENTIFIER  */
#line 494 "parser.y"
        {yyval=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared(yyvsp[0]),NIL);}
#line 2681 "y.tab.c"
    break;

  case 171: /* primary_expression: INTEGER_CONSTANT  */
#line 495 "parser.y"
                           {yyval=makeNode(N_EXP_INT_CONST,NIL,yyvsp[0],NIL);}
#line 2687 "y.tab.c"
    break;

  case 172: /* primary_expression: FLOAT_CONSTANT  */
#line 496 "parser.y"
                         {yyval=makeNode(N_EXP_FLOAT_CONST,NIL,yyvsp[0],NIL);}
#line 2693 "y.tab.c"
    break;

  case 173: /* primary_expression: CHARACTER_CONSTANT  */
#line 497 "parser.y"
                            {yyval=makeNode(N_EXP_CHAR_CONST,NIL,yyvsp[0],NIL);}
#line 2699 "y.tab.c"
    break;

  case 174: /* primary_expression: STRING_LITERAL  */
#line 498 "parser.y"
                         {yyval=makeNode(N_EXP_STRING_LITERAL,NIL,yyvsp[0],NIL);}
#line 2705 "y.tab.c"
    break;

  case 175: /* primary_expression: LP expression RP  */
#line 499 "parser.y"
                           {yyval=yyvsp[-1];}
#line 2711 "y.tab.c"
    break;

  case 176: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 504 "parser.y"
        {yyval=setTypeNameSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2717 "y.tab.c"
    break;


#line 2721 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 507 "parser.y"

extern char *yytext;

int yyerror(char *s) 
{
	printf("line %d: %s near %s \n", line_no, s, yytext);
	exit(1);
}

int yywrap()
{
	return(1);
}
