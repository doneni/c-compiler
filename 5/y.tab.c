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
#line 2 "yacc.y"

#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;
#include <stdio.h>
#include "supporting_func.h"

extern int line_no, syntax_err;
extern A_NODE *root;

extern A_ID *current_id;
extern int current_level;

extern A_TYPE * int_type;

#line 86 "y.tab.c"

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
    FLOAT_CONSTANT = 260,          /* FLOAT_CONSTANT  */
    INTEGER_CONSTANT = 261,        /* INTEGER_CONSTANT  */
    CHARACTER_CONSTANT = 262,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 263,          /* STRING_LITERAL  */
    AUTO_SYM = 264,                /* AUTO_SYM  */
    STATIC_SYM = 265,              /* STATIC_SYM  */
    TYPEDEF_SYM = 266,             /* TYPEDEF_SYM  */
    STRUCT_SYM = 267,              /* STRUCT_SYM  */
    ENUM_SYM = 268,                /* ENUM_SYM  */
    SIZEOF_SYM = 269,              /* SIZEOF_SYM  */
    UNION_SYM = 270,               /* UNION_SYM  */
    IF_SYM = 271,                  /* IF_SYM  */
    ELSE_SYM = 272,                /* ELSE_SYM  */
    WHILE_SYM = 273,               /* WHILE_SYM  */
    DO_SYM = 274,                  /* DO_SYM  */
    FOR_SYM = 275,                 /* FOR_SYM  */
    CONTINUE_SYM = 276,            /* CONTINUE_SYM  */
    BREAK_SYM = 277,               /* BREAK_SYM  */
    RETURN_SYM = 278,              /* RETURN_SYM  */
    SWITCH_SYM = 279,              /* SWITCH_SYM  */
    CASE_SYM = 280,                /* CASE_SYM  */
    DEFAULT_SYM = 281,             /* DEFAULT_SYM  */
    PLUS = 282,                    /* PLUS  */
    MINUS = 283,                   /* MINUS  */
    PLUSPLUS = 284,                /* PLUSPLUS  */
    MINUSMINUS = 285,              /* MINUSMINUS  */
    BAR = 286,                     /* BAR  */
    AMP = 287,                     /* AMP  */
    BARBAR = 288,                  /* BARBAR  */
    AMPAMP = 289,                  /* AMPAMP  */
    STAR = 290,                    /* STAR  */
    SLASH = 291,                   /* SLASH  */
    PERCENT = 292,                 /* PERCENT  */
    ASSIGN = 293,                  /* ASSIGN  */
    ARROW = 294,                   /* ARROW  */
    COLON = 295,                   /* COLON  */
    SEMICOLON = 296,               /* SEMICOLON  */
    DOTDOTDOT = 297,               /* DOTDOTDOT  */
    PERIOD = 298,                  /* PERIOD  */
    COMMA = 299,                   /* COMMA  */
    EXCL = 300,                    /* EXCL  */
    LSS = 301,                     /* LSS  */
    GTR = 302,                     /* GTR  */
    LEQ = 303,                     /* LEQ  */
    GEQ = 304,                     /* GEQ  */
    EQL = 305,                     /* EQL  */
    NEQ = 306,                     /* NEQ  */
    LP = 307,                      /* LP  */
    RP = 308,                      /* RP  */
    LB = 309,                      /* LB  */
    RB = 310,                      /* RB  */
    LR = 311,                      /* LR  */
    RR = 312                       /* RR  */
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
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define AUTO_SYM 264
#define STATIC_SYM 265
#define TYPEDEF_SYM 266
#define STRUCT_SYM 267
#define ENUM_SYM 268
#define SIZEOF_SYM 269
#define UNION_SYM 270
#define IF_SYM 271
#define ELSE_SYM 272
#define WHILE_SYM 273
#define DO_SYM 274
#define FOR_SYM 275
#define CONTINUE_SYM 276
#define BREAK_SYM 277
#define RETURN_SYM 278
#define SWITCH_SYM 279
#define CASE_SYM 280
#define DEFAULT_SYM 281
#define PLUS 282
#define MINUS 283
#define PLUSPLUS 284
#define MINUSMINUS 285
#define BAR 286
#define AMP 287
#define BARBAR 288
#define AMPAMP 289
#define STAR 290
#define SLASH 291
#define PERCENT 292
#define ASSIGN 293
#define ARROW 294
#define COLON 295
#define SEMICOLON 296
#define DOTDOTDOT 297
#define PERIOD 298
#define COMMA 299
#define EXCL 300
#define LSS 301
#define GTR 302
#define LEQ 303
#define GEQ 304
#define EQL 305
#define NEQ 306
#define LP 307
#define RP 308
#define LB 309
#define RB 310
#define LR 311
#define RR 312

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
  YYSYMBOL_FLOAT_CONSTANT = 5,             /* FLOAT_CONSTANT  */
  YYSYMBOL_INTEGER_CONSTANT = 6,           /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 7,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 8,             /* STRING_LITERAL  */
  YYSYMBOL_AUTO_SYM = 9,                   /* AUTO_SYM  */
  YYSYMBOL_STATIC_SYM = 10,                /* STATIC_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 11,               /* TYPEDEF_SYM  */
  YYSYMBOL_STRUCT_SYM = 12,                /* STRUCT_SYM  */
  YYSYMBOL_ENUM_SYM = 13,                  /* ENUM_SYM  */
  YYSYMBOL_SIZEOF_SYM = 14,                /* SIZEOF_SYM  */
  YYSYMBOL_UNION_SYM = 15,                 /* UNION_SYM  */
  YYSYMBOL_IF_SYM = 16,                    /* IF_SYM  */
  YYSYMBOL_ELSE_SYM = 17,                  /* ELSE_SYM  */
  YYSYMBOL_WHILE_SYM = 18,                 /* WHILE_SYM  */
  YYSYMBOL_DO_SYM = 19,                    /* DO_SYM  */
  YYSYMBOL_FOR_SYM = 20,                   /* FOR_SYM  */
  YYSYMBOL_CONTINUE_SYM = 21,              /* CONTINUE_SYM  */
  YYSYMBOL_BREAK_SYM = 22,                 /* BREAK_SYM  */
  YYSYMBOL_RETURN_SYM = 23,                /* RETURN_SYM  */
  YYSYMBOL_SWITCH_SYM = 24,                /* SWITCH_SYM  */
  YYSYMBOL_CASE_SYM = 25,                  /* CASE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 26,               /* DEFAULT_SYM  */
  YYSYMBOL_PLUS = 27,                      /* PLUS  */
  YYSYMBOL_MINUS = 28,                     /* MINUS  */
  YYSYMBOL_PLUSPLUS = 29,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 30,                /* MINUSMINUS  */
  YYSYMBOL_BAR = 31,                       /* BAR  */
  YYSYMBOL_AMP = 32,                       /* AMP  */
  YYSYMBOL_BARBAR = 33,                    /* BARBAR  */
  YYSYMBOL_AMPAMP = 34,                    /* AMPAMP  */
  YYSYMBOL_STAR = 35,                      /* STAR  */
  YYSYMBOL_SLASH = 36,                     /* SLASH  */
  YYSYMBOL_PERCENT = 37,                   /* PERCENT  */
  YYSYMBOL_ASSIGN = 38,                    /* ASSIGN  */
  YYSYMBOL_ARROW = 39,                     /* ARROW  */
  YYSYMBOL_COLON = 40,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 41,                 /* SEMICOLON  */
  YYSYMBOL_DOTDOTDOT = 42,                 /* DOTDOTDOT  */
  YYSYMBOL_PERIOD = 43,                    /* PERIOD  */
  YYSYMBOL_COMMA = 44,                     /* COMMA  */
  YYSYMBOL_EXCL = 45,                      /* EXCL  */
  YYSYMBOL_LSS = 46,                       /* LSS  */
  YYSYMBOL_GTR = 47,                       /* GTR  */
  YYSYMBOL_LEQ = 48,                       /* LEQ  */
  YYSYMBOL_GEQ = 49,                       /* GEQ  */
  YYSYMBOL_EQL = 50,                       /* EQL  */
  YYSYMBOL_NEQ = 51,                       /* NEQ  */
  YYSYMBOL_LP = 52,                        /* LP  */
  YYSYMBOL_RP = 53,                        /* RP  */
  YYSYMBOL_LB = 54,                        /* LB  */
  YYSYMBOL_RB = 55,                        /* RB  */
  YYSYMBOL_LR = 56,                        /* LR  */
  YYSYMBOL_RR = 57,                        /* RR  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_program = 59,                   /* program  */
  YYSYMBOL_translation_unit = 60,          /* translation_unit  */
  YYSYMBOL_external_declaration = 61,      /* external_declaration  */
  YYSYMBOL_function_definition = 62,       /* function_definition  */
  YYSYMBOL_63_1 = 63,                      /* @1  */
  YYSYMBOL_64_2 = 64,                      /* @2  */
  YYSYMBOL_declaration_list_opt = 65,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 66,          /* declaration_list  */
  YYSYMBOL_declaration = 67,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 68,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 69,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 70,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 71,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 72,           /* init_declarator  */
  YYSYMBOL_initializer = 73,               /* initializer  */
  YYSYMBOL_initializer_list = 74,          /* initializer_list  */
  YYSYMBOL_type_specifier = 75,            /* type_specifier  */
  YYSYMBOL_struct_type_specifier = 76,     /* struct_type_specifier  */
  YYSYMBOL_77_3 = 77,                      /* @3  */
  YYSYMBOL_78_4 = 78,                      /* @4  */
  YYSYMBOL_79_5 = 79,                      /* @5  */
  YYSYMBOL_80_6 = 80,                      /* @6  */
  YYSYMBOL_struct_or_union = 81,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 82,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 83,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 84,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 85,         /* struct_declarator  */
  YYSYMBOL_enum_type_specifier = 86,       /* enum_type_specifier  */
  YYSYMBOL_87_7 = 87,                      /* @7  */
  YYSYMBOL_88_8 = 88,                      /* @8  */
  YYSYMBOL_enumerator_list = 89,           /* enumerator_list  */
  YYSYMBOL_enumerator = 90,                /* enumerator  */
  YYSYMBOL_91_9 = 91,                      /* @9  */
  YYSYMBOL_declarator = 92,                /* declarator  */
  YYSYMBOL_pointer = 93,                   /* pointer  */
  YYSYMBOL_direct_declarator = 94,         /* direct_declarator  */
  YYSYMBOL_95_10 = 95,                     /* @10  */
  YYSYMBOL_parameter_type_list_opt = 96,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 97,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 98,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 99,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 100,  /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 101,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 102, /* direct_abstract_declarator  */
  YYSYMBOL_statement_list_opt = 103,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 104,           /* statement_list  */
  YYSYMBOL_statement = 105,                /* statement  */
  YYSYMBOL_labeled_statement = 106,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 107,       /* compound_statement  */
  YYSYMBOL_108_11 = 108,                   /* @11  */
  YYSYMBOL_expression_statement = 109,     /* expression_statement  */
  YYSYMBOL_selection_statement = 110,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 111,      /* iteration_statement  */
  YYSYMBOL_for_expression = 112,           /* for_expression  */
  YYSYMBOL_expression_opt = 113,           /* expression_opt  */
  YYSYMBOL_jump_statement = 114,           /* jump_statement  */
  YYSYMBOL_arg_expression_list_opt = 115,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 116,      /* arg_expression_list  */
  YYSYMBOL_constant_expression_opt = 117,  /* constant_expression_opt  */
  YYSYMBOL_constant_expression = 118,      /* constant_expression  */
  YYSYMBOL_expression = 119,               /* expression  */
  YYSYMBOL_comma_expression = 120,         /* comma_expression  */
  YYSYMBOL_assignment_expression = 121,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 122,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 123,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 124,   /* logical_and_expression  */
  YYSYMBOL_bitwise_or_expression = 125,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 126,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 127,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 128,      /* equality_expression  */
  YYSYMBOL_relational_expression = 129,    /* relational_expression  */
  YYSYMBOL_shift_expression = 130,         /* shift_expression  */
  YYSYMBOL_additive_expression = 131,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 132, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 133,          /* cast_expression  */
  YYSYMBOL_unary_expression = 134,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 135,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 136,       /* primary_expression  */
  YYSYMBOL_type_name = 137                 /* type_name  */
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
#define YYLAST   453

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


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
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    34,    35,    39,    40,    44,    44,    45,
      45,    49,    50,    54,    55,    59,    63,    64,    65,    66,
      70,    71,    72,    76,    77,    81,    82,    86,    87,    91,
      92,    96,    97,   101,   102,   103,   107,   107,   107,   108,
     108,   108,   109,   113,   114,   118,   119,   123,   127,   128,
     132,   136,   136,   137,   137,   138,   142,   143,   147,   148,
     148,   152,   153,   157,   158,   162,   163,   164,   165,   165,
     169,   170,   174,   175,   179,   180,   184,   185,   189,   190,
     193,   194,   195,   199,   200,   201,   202,   203,   207,   208,
     212,   213,   217,   218,   219,   220,   221,   222,   226,   227,
     231,   231,   235,   236,   240,   241,   242,   246,   247,   248,
     252,   256,   257,   261,   262,   263,   267,   268,   272,   273,
     277,   278,   282,   286,   290,   294,   295,   299,   303,   304,
     308,   309,   313,   317,   321,   325,   326,   327,   331,   332,
     333,   334,   335,   339,   343,   344,   345,   349,   350,   351,
     352,   356,   357,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   374,   375,   376,   377,   378,   379,   380,
     384,   385,   386,   387,   388,   389,   393
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
  "TYPE_IDENTIFIER", "FLOAT_CONSTANT", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "AUTO_SYM", "STATIC_SYM",
  "TYPEDEF_SYM", "STRUCT_SYM", "ENUM_SYM", "SIZEOF_SYM", "UNION_SYM",
  "IF_SYM", "ELSE_SYM", "WHILE_SYM", "DO_SYM", "FOR_SYM", "CONTINUE_SYM",
  "BREAK_SYM", "RETURN_SYM", "SWITCH_SYM", "CASE_SYM", "DEFAULT_SYM",
  "PLUS", "MINUS", "PLUSPLUS", "MINUSMINUS", "BAR", "AMP", "BARBAR",
  "AMPAMP", "STAR", "SLASH", "PERCENT", "ASSIGN", "ARROW", "COLON",
  "SEMICOLON", "DOTDOTDOT", "PERIOD", "COMMA", "EXCL", "LSS", "GTR", "LEQ",
  "GEQ", "EQL", "NEQ", "LP", "RP", "LB", "RB", "LR", "RR", "$accept",
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

#define YYPACT_NINF (-266)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     268,  -266,  -266,  -266,  -266,  -266,  -266,    13,  -266,     6,
      40,    46,   268,  -266,  -266,  -266,    40,   379,   379,  -266,
      45,  -266,  -266,    25,    91,     7,    23,  -266,    41,  -266,
    -266,    62,    63,  -266,   -19,  -266,  -266,    75,    92,    97,
      91,  -266,   335,   104,   139,  -266,  -266,    40,   127,    97,
     107,  -266,  -266,  -266,   379,  -266,  -266,  -266,  -266,  -266,
     368,   335,   335,   401,   401,   335,   335,   335,   302,   112,
    -266,  -266,  -266,  -266,  -266,   148,   168,  -266,  -266,  -266,
      86,   142,  -266,   143,   138,  -266,   161,   296,  -266,   139,
     167,    30,  -266,  -266,   183,   127,  -266,  -266,  -266,  -266,
     165,   379,    17,   177,  -266,   189,  -266,   302,  -266,  -266,
    -266,  -266,   335,  -266,  -266,  -266,  -266,  -266,    -3,   184,
     185,  -266,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,  -266,  -266,   236,   237,
     335,   335,    39,   203,   139,  -266,  -266,    47,   165,    40,
      27,  -266,   190,   379,  -266,    40,   240,   335,  -266,    24,
    -266,  -266,   130,  -266,   286,   192,   250,   140,  -266,  -266,
     335,   168,  -266,   142,   142,  -266,  -266,  -266,  -266,   138,
     138,  -266,  -266,  -266,  -266,  -266,  -266,   195,   212,  -266,
     202,  -266,   335,  -266,   127,  -266,    32,    67,  -266,  -266,
    -266,  -266,   206,   214,   190,   215,   223,   227,   335,   217,
     335,   230,  -266,   216,   190,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,   233,  -266,   229,   231,   221,   130,   379,   335,
    -266,  -266,  -266,  -266,  -266,   335,  -266,  -266,  -266,  -266,
    -266,    40,   335,   335,   269,   335,  -266,  -266,   245,   335,
     248,   190,  -266,  -266,  -266,  -266,  -266,  -266,   238,   234,
    -266,  -266,   247,   265,   241,   266,   280,  -266,  -266,   270,
     190,  -266,  -266,  -266,   190,   190,   335,   190,   335,   190,
    -266,   305,  -266,   271,  -266,   292,  -266,   190,   295,   335,
    -266,  -266,  -266
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,    20,    21,    22,    43,    53,    44,    63,
       0,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,    55,     0,    64,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,     0,     0,    66,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   172,   171,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,     0,   161,   160,
     151,   159,     0,   154,   155,   156,   157,   158,    78,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,     0,     0,
     116,     0,     0,     0,     0,    54,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,    70,   120,    76,    81,
      77,    79,    80,    69,     0,     0,    70,    81,   176,   175,
       0,   129,   131,   136,   137,   139,   140,   141,   142,   145,
     146,   148,   149,   150,   126,   167,   166,     0,   117,   118,
       0,    52,     0,    57,     0,    30,     0,     0,    48,    50,
      41,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,    70,   120,
      73,    75,   162,   152,   165,     0,   164,    60,    32,    38,
      47,     0,     0,     0,     0,   111,   114,   115,     0,     0,
       0,     0,   101,    91,   103,    86,    83,    84,     0,     0,
     119,    49,     0,     0,     0,     0,     0,   112,   113,     0,
       0,    99,    87,    85,     0,     0,     0,     0,   111,     0,
      98,   104,   107,     0,   109,     0,   106,     0,     0,   111,
     105,   108,   110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -266,  -266,  -266,   315,  -266,  -266,  -266,  -266,  -266,   -89,
       5,  -266,  -266,  -266,   297,   -84,  -266,   -82,  -266,  -266,
    -266,  -266,  -266,  -266,   197,  -129,  -266,   105,  -266,  -266,
    -266,   262,   208,  -266,    -9,    -5,   -15,  -266,   -52,  -266,
    -266,   191,   235,   -61,   -87,  -266,  -266,  -189,  -266,    90,
    -266,  -266,  -266,  -266,  -266,  -265,  -266,  -266,  -266,  -147,
     -45,   -42,  -266,  -126,  -266,  -266,   239,   243,  -266,  -266,
    -266,    61,   100,  -266,    93,   -32,    -6,  -266,  -266,   249
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    43,
      26,    91,    92,   143,    22,    23,    24,    54,   224,   104,
     105,   106,   160,   161,   162,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   265,   266,   221,   187,   188,    69,
      70,   222,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   120
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    28,   103,    97,    27,    16,    71,    34,    40,   184,
     226,   146,   154,   285,   189,   244,    25,    16,   149,    48,
       1,   201,    35,    36,   292,   253,   119,     1,     1,   109,
     111,     2,     9,   115,   116,   117,     2,    -7,    94,     6,
       7,     9,     8,     1,     6,     7,    29,     8,    37,   166,
      97,   157,     9,    71,   108,   110,   110,   113,   114,   110,
     110,   110,   271,   -51,   223,   119,   149,   201,   149,   156,
     119,   157,   227,   118,   144,     9,   156,    10,   157,    44,
     227,   280,   259,   144,   200,   281,   282,   145,   284,   239,
     286,   194,    10,   158,    45,   225,   191,   159,   290,   190,
     181,   182,   183,    46,   195,   225,   155,    47,   240,   260,
     238,   241,   118,   167,   149,    71,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,    53,
      55,   -36,    56,    57,    58,    59,   124,   125,   233,    98,
     199,    60,    90,    41,    40,    42,    94,    28,    51,    97,
     237,   159,    71,    52,    61,    62,    63,    64,   155,    65,
      89,   167,    66,    99,   110,   250,   248,   121,    71,     2,
     130,   131,    67,   132,   133,   134,   258,     6,     7,    68,
       8,   122,   228,    95,   229,   173,   174,    71,   126,   127,
     128,   129,   166,    55,   157,    56,    57,    58,    59,   135,
     262,   263,   123,   267,    60,   -59,   202,   269,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    61,    62,    63,
      64,    48,    65,   179,   180,    66,   175,   176,   177,   178,
     163,   212,   199,   164,   283,    67,   267,   169,   170,   185,
     186,   192,    68,     1,     2,   232,    52,   267,   234,     3,
       4,     5,     6,     7,     2,     8,   235,   236,   242,     3,
       4,     5,     6,     7,   246,     8,   243,   245,   247,   249,
     251,     1,     2,   252,   254,     9,   257,     3,     4,     5,
       6,     7,   255,     8,   256,     9,   268,   264,   270,   273,
       2,   272,   156,   276,   157,     3,     4,     5,     6,     7,
     274,     8,   166,     9,   157,    55,     2,    56,    57,    58,
      59,     3,     4,     5,     6,     7,    60,     8,   275,   277,
      10,   278,   287,   279,   288,   136,   137,    30,   230,    61,
      62,    63,    64,   289,    65,   138,   291,    66,    55,   139,
      56,    57,    58,    59,    93,   196,   261,    67,   140,    60,
     141,   142,   193,   168,    68,   231,   165,     0,     0,     0,
       0,   171,    61,    62,    63,    64,   172,    65,     0,     0,
      66,    55,     0,    56,    57,    58,    59,     0,     0,     0,
      67,     0,    60,     2,     0,     0,     0,    68,     3,     4,
       5,     6,     7,     0,     8,    61,    62,    63,    64,     0,
      65,     0,     0,    66,    55,     0,    56,    57,    58,    59,
       0,     0,     0,    67,     0,    60,     0,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,    65,     0,     0,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,     0,
       0,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
      42,    10,    54,    48,     9,     0,    48,    16,    23,   135,
     157,    95,   101,   278,   140,   204,     3,    12,   100,    38,
       3,   150,    17,    18,   289,   214,    68,     3,     3,    61,
      62,     4,    35,    65,    66,    67,     4,    56,    47,    12,
      13,    35,    15,     3,    12,    13,     0,    15,     3,    52,
      95,    54,    35,    95,    60,    61,    62,    63,    64,    65,
      66,    67,   251,    56,   153,   107,   148,   196,   150,    52,
     112,    54,   159,    68,    44,    35,    52,    52,    54,    56,
     167,   270,   229,    44,    57,   274,   275,    57,   277,    57,
     279,    44,    52,   102,    53,   156,    57,   102,   287,   141,
     132,   133,   134,    41,    57,   166,   101,    44,    41,   235,
     194,    44,   107,   118,   196,   157,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    39,
       3,    56,     5,     6,     7,     8,    50,    51,   170,    49,
     149,    14,     3,    52,   159,    54,   155,   156,    56,   194,
     192,   156,   194,    56,    27,    28,    29,    30,   153,    32,
      56,   166,    35,    56,   170,   210,   208,    55,   210,     4,
      27,    28,    45,    35,    36,    37,   228,    12,    13,    52,
      15,    33,    52,    56,    54,   124,   125,   229,    46,    47,
      48,    49,    52,     3,    54,     5,     6,     7,     8,    38,
     242,   243,    34,   245,    14,    38,    16,   249,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    38,    32,   130,   131,    35,   126,   127,   128,   129,
      53,    41,   241,    44,   276,    45,   278,    53,    53,     3,
       3,    38,    52,     3,     4,    53,    56,   289,    53,     9,
      10,    11,    12,    13,     4,    15,    44,    55,    52,     9,
      10,    11,    12,    13,    41,    15,    52,    52,    41,    52,
      40,     3,     4,    57,    41,    35,    55,     9,    10,    11,
      12,    13,    53,    15,    53,    35,    41,    18,    40,    55,
       4,    53,    52,    52,    54,     9,    10,    11,    12,    13,
      53,    15,    52,    35,    54,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    53,    53,
      52,    41,    17,    53,    53,    29,    30,    12,    42,    27,
      28,    29,    30,    41,    32,    39,    41,    35,     3,    43,
       5,     6,     7,     8,    47,   148,   241,    45,    52,    14,
      54,    89,   144,   118,    52,   164,   107,    -1,    -1,    -1,
      -1,   122,    27,    28,    29,    30,   123,    32,    -1,    -1,
      35,     3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      45,    -1,    14,     4,    -1,    -1,    -1,    52,     9,    10,
      11,    12,    13,    -1,    15,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    35,     3,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    45,    -1,    14,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     9,    10,    11,    12,    13,    15,    35,
      52,    59,    60,    61,    62,    67,    68,    69,    75,    76,
      81,    86,    92,    93,    94,     3,    88,    93,    92,     0,
      61,    70,    71,    72,    92,    68,    68,     3,    79,    64,
      94,    52,    54,    87,    56,    53,    41,    44,    38,    63,
      77,    56,    56,   107,    95,     3,     5,     6,     7,     8,
      14,    27,    28,    29,    30,    32,    35,    45,    52,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    56,
       3,    89,    90,    72,    92,    56,    73,   118,   107,    56,
      80,   108,    68,    96,    97,    98,    99,    52,   134,   133,
     134,   133,    52,   134,   134,   133,   133,   133,    68,   119,
     137,    55,    33,    34,    50,    51,    46,    47,    48,    49,
      27,    28,    35,    36,    37,    38,    29,    30,    39,    43,
      52,    54,    89,    91,    44,    57,    73,    74,    78,    75,
      82,    83,    65,    66,    67,    68,    52,    54,    92,    93,
     100,   101,   102,    53,    44,   137,    52,    93,   100,    53,
      53,   124,   125,   129,   129,   130,   130,   130,   130,   132,
     132,   133,   133,   133,   121,     3,     3,   115,   116,   121,
     119,    57,    38,    90,    44,    57,    82,    84,    85,    92,
      57,    83,    16,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    41,   103,   104,   105,   106,   107,   109,   110,
     111,   114,   119,    67,    96,   101,   117,   102,    52,    54,
      42,    99,    53,   133,    53,    44,    55,   119,    73,    57,
      41,    44,    52,    52,   105,    52,    41,    41,   119,    52,
     118,    40,    57,   105,    41,    53,    53,    55,    96,   117,
     121,    85,   119,   119,    18,   112,   113,   119,    41,   119,
      40,   105,    53,    55,    53,    53,    52,    53,    41,    53,
     105,   105,   105,   119,   105,   113,   105,    17,    53,    41,
     105,    41,   113
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    63,    62,    64,
      62,    65,    65,    66,    66,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    77,    78,    76,    79,
      80,    76,    76,    81,    81,    82,    82,    83,    84,    84,
      85,    87,    86,    88,    86,    86,    89,    89,    90,    91,
      90,    92,    92,    93,    93,    94,    94,    94,    95,    94,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     108,   107,   109,   109,   110,   110,   110,   111,   111,   111,
     112,   113,   113,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   119,   120,   121,   121,   122,   123,   123,
     124,   124,   125,   126,   127,   128,   128,   128,   129,   129,
     129,   129,   129,   130,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   137
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
#line 30 "yacc.y"
                     {root=makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkForwardReference();}
#line 1632 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 34 "yacc.y"
                         {yyval=yyvsp[0];}
#line 1638 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 35 "yacc.y"
                                           {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1644 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 39 "yacc.y"
                        {yyval=yyvsp[0];}
#line 1650 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 40 "yacc.y"
                 {yyval=yyvsp[0];}
#line 1656 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 44 "yacc.y"
                                      {yyval=setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1662 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 44 "yacc.y"
                                                                                                      {yyval=setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1668 "y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 45 "yacc.y"
                {yyval=setFunctionDeclaratorSpecifier(yyvsp[0], makeSpecifier(int_type, 0));}
#line 1674 "y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 45 "yacc.y"
                                                                                                        {yyval=setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1680 "y.tab.c"
    break;

  case 11: /* declaration_list_opt: %empty  */
#line 49 "yacc.y"
    {yyval=NIL;}
#line 1686 "y.tab.c"
    break;

  case 12: /* declaration_list_opt: declaration_list  */
#line 50 "yacc.y"
                      {yyval=yyvsp[0];}
#line 1692 "y.tab.c"
    break;

  case 13: /* declaration_list: declaration  */
#line 54 "yacc.y"
                {yyval=yyvsp[0];}
#line 1698 "y.tab.c"
    break;

  case 14: /* declaration_list: declaration_list declaration  */
#line 55 "yacc.y"
                                  {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1704 "y.tab.c"
    break;

  case 15: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 59 "yacc.y"
                                                              {yyval=setDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1710 "y.tab.c"
    break;

  case 16: /* declaration_specifiers: type_specifier  */
#line 63 "yacc.y"
                   {yyval=makeSpecifier(yyvsp[0], 0);}
#line 1716 "y.tab.c"
    break;

  case 17: /* declaration_specifiers: storage_class_specifier  */
#line 64 "yacc.y"
                             {yyval=makeSpecifier(0, yyvsp[0]);}
#line 1722 "y.tab.c"
    break;

  case 18: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 65 "yacc.y"
                                           {yyval=updateSpecifier(yyvsp[0], yyvsp[-1], 0);}
#line 1728 "y.tab.c"
    break;

  case 19: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 66 "yacc.y"
                                                    {yyval=updateSpecifier(yyvsp[0], 0, yyvsp[-1]);}
#line 1734 "y.tab.c"
    break;

  case 20: /* storage_class_specifier: AUTO_SYM  */
#line 70 "yacc.y"
             {yyval=S_AUTO;}
#line 1740 "y.tab.c"
    break;

  case 21: /* storage_class_specifier: STATIC_SYM  */
#line 71 "yacc.y"
                {yyval=S_STATIC;}
#line 1746 "y.tab.c"
    break;

  case 22: /* storage_class_specifier: TYPEDEF_SYM  */
#line 72 "yacc.y"
                 {yyval=S_TYPEDEF;}
#line 1752 "y.tab.c"
    break;

  case 23: /* init_declarator_list_opt: %empty  */
#line 76 "yacc.y"
    {yyval=makeDummyIdentifier();}
#line 1758 "y.tab.c"
    break;

  case 24: /* init_declarator_list_opt: init_declarator_list  */
#line 77 "yacc.y"
                          {yyval=yyvsp[0];}
#line 1764 "y.tab.c"
    break;

  case 25: /* init_declarator_list: init_declarator  */
#line 81 "yacc.y"
                    {yyval=yyvsp[0];}
#line 1770 "y.tab.c"
    break;

  case 26: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 82 "yacc.y"
                                                {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1776 "y.tab.c"
    break;

  case 27: /* init_declarator: declarator  */
#line 86 "yacc.y"
               {yyval=yyvsp[0];}
#line 1782 "y.tab.c"
    break;

  case 28: /* init_declarator: declarator ASSIGN initializer  */
#line 87 "yacc.y"
                                   {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 1788 "y.tab.c"
    break;

  case 29: /* initializer: constant_expression  */
#line 91 "yacc.y"
                        {yyval=makeNode(N_INIT_LIST_ONE,NIL,yyvsp[0],NIL);}
#line 1794 "y.tab.c"
    break;

  case 30: /* initializer: LR initializer_list RR  */
#line 92 "yacc.y"
                            {yyval=yyvsp[-1];}
#line 1800 "y.tab.c"
    break;

  case 31: /* initializer_list: initializer  */
#line 96 "yacc.y"
                {yyval=makeNode(N_INIT_LIST, yyvsp[0], NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL, NIL));}
#line 1806 "y.tab.c"
    break;

  case 32: /* initializer_list: initializer_list COMMA initializer  */
#line 97 "yacc.y"
                                        {yyval=makeNodeList(N_INIT_LIST, yyvsp[-2], yyvsp[0]);}
#line 1812 "y.tab.c"
    break;

  case 33: /* type_specifier: struct_type_specifier  */
#line 101 "yacc.y"
                          {yyval=yyvsp[0];}
#line 1818 "y.tab.c"
    break;

  case 34: /* type_specifier: enum_type_specifier  */
#line 102 "yacc.y"
                         {yyval=yyvsp[0];}
#line 1824 "y.tab.c"
    break;

  case 35: /* type_specifier: TYPE_IDENTIFIER  */
#line 103 "yacc.y"
                     {yyval=yyvsp[0];}
#line 1830 "y.tab.c"
    break;

  case 36: /* @3: %empty  */
#line 107 "yacc.y"
                               {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1836 "y.tab.c"
    break;

  case 37: /* @4: %empty  */
#line 107 "yacc.y"
                                                                                       {yyval=current_id; current_level++;}
#line 1842 "y.tab.c"
    break;

  case 38: /* struct_type_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 107 "yacc.y"
                                                                                                                                                    {checkForwardReference(); yyval=setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1848 "y.tab.c"
    break;

  case 39: /* @5: %empty  */
#line 108 "yacc.y"
                     {yyval=makeType(yyvsp[0]);}
#line 1854 "y.tab.c"
    break;

  case 40: /* @6: %empty  */
#line 108 "yacc.y"
                                           {yyval=current_id;current_level++;}
#line 1860 "y.tab.c"
    break;

  case 41: /* struct_type_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 108 "yacc.y"
                                                                                                       {checkForwardReference(); yyval=setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id=yyvsp[-2];}
#line 1866 "y.tab.c"
    break;

  case 42: /* struct_type_specifier: struct_or_union IDENTIFIER  */
#line 109 "yacc.y"
                                {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1872 "y.tab.c"
    break;

  case 43: /* struct_or_union: STRUCT_SYM  */
#line 113 "yacc.y"
               {yyval=T_STRUCT;}
#line 1878 "y.tab.c"
    break;

  case 44: /* struct_or_union: UNION_SYM  */
#line 114 "yacc.y"
               {yyval=T_UNION;}
#line 1884 "y.tab.c"
    break;

  case 45: /* struct_declaration_list: struct_declaration  */
#line 118 "yacc.y"
                       {yyval=yyvsp[0];}
#line 1890 "y.tab.c"
    break;

  case 46: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 119 "yacc.y"
                                                {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1896 "y.tab.c"
    break;

  case 47: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 123 "yacc.y"
                                                    {yyval=setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1902 "y.tab.c"
    break;

  case 48: /* struct_declarator_list: struct_declarator  */
#line 127 "yacc.y"
                      {yyval=yyvsp[0];}
#line 1908 "y.tab.c"
    break;

  case 49: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 128 "yacc.y"
                                                    {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1914 "y.tab.c"
    break;

  case 50: /* struct_declarator: declarator  */
#line 132 "yacc.y"
               {yyval=yyvsp[0];}
#line 1920 "y.tab.c"
    break;

  case 51: /* @7: %empty  */
#line 136 "yacc.y"
                        {yyval=setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1926 "y.tab.c"
    break;

  case 52: /* enum_type_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 136 "yacc.y"
                                                                                                       {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1932 "y.tab.c"
    break;

  case 53: /* @8: %empty  */
#line 137 "yacc.y"
              {yyval=makeType(T_ENUM);}
#line 1938 "y.tab.c"
    break;

  case 54: /* enum_type_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 137 "yacc.y"
                                                           {yyval=setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1944 "y.tab.c"
    break;

  case 55: /* enum_type_specifier: ENUM_SYM IDENTIFIER  */
#line 138 "yacc.y"
                         {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1950 "y.tab.c"
    break;

  case 56: /* enumerator_list: enumerator  */
#line 142 "yacc.y"
               {yyval=yyvsp[0];}
#line 1956 "y.tab.c"
    break;

  case 57: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 143 "yacc.y"
                                      {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1962 "y.tab.c"
    break;

  case 58: /* enumerator: IDENTIFIER  */
#line 147 "yacc.y"
               {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1968 "y.tab.c"
    break;

  case 59: /* @9: %empty  */
#line 148 "yacc.y"
                {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1974 "y.tab.c"
    break;

  case 60: /* enumerator: IDENTIFIER @9 ASSIGN expression  */
#line 148 "yacc.y"
                                                                                               {yyval=setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1980 "y.tab.c"
    break;

  case 61: /* declarator: pointer direct_declarator  */
#line 152 "yacc.y"
                              {yyval=setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 1986 "y.tab.c"
    break;

  case 62: /* declarator: direct_declarator  */
#line 153 "yacc.y"
                       {yyval=yyvsp[0];}
#line 1992 "y.tab.c"
    break;

  case 63: /* pointer: STAR  */
#line 157 "yacc.y"
         {yyval=makeType(T_POINTER);}
#line 1998 "y.tab.c"
    break;

  case 64: /* pointer: STAR pointer  */
#line 158 "yacc.y"
                  {yyval=setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2004 "y.tab.c"
    break;

  case 65: /* direct_declarator: IDENTIFIER  */
#line 162 "yacc.y"
               {yyval=makeIdentifier(yyvsp[0]);}
#line 2010 "y.tab.c"
    break;

  case 66: /* direct_declarator: LP declarator RP  */
#line 163 "yacc.y"
                      {yyval=yyvsp[-1];}
#line 2016 "y.tab.c"
    break;

  case 67: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 164 "yacc.y"
                                                     {yyval=setDeclaratorElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2022 "y.tab.c"
    break;

  case 68: /* @10: %empty  */
#line 165 "yacc.y"
                          {yyval=current_id; current_level++;}
#line 2028 "y.tab.c"
    break;

  case 69: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 165 "yacc.y"
                                                                                       {checkForwardReference(); current_id=yyvsp[-2]; current_level--; yyval=setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 2034 "y.tab.c"
    break;

  case 70: /* parameter_type_list_opt: %empty  */
#line 169 "yacc.y"
    {yyval=NIL;}
#line 2040 "y.tab.c"
    break;

  case 71: /* parameter_type_list_opt: parameter_type_list  */
#line 170 "yacc.y"
                         {yyval=yyvsp[0];}
#line 2046 "y.tab.c"
    break;

  case 72: /* parameter_type_list: parameter_list  */
#line 174 "yacc.y"
                   {yyval=yyvsp[0];}
#line 2052 "y.tab.c"
    break;

  case 73: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 175 "yacc.y"
                                    {yyval=linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 2058 "y.tab.c"
    break;

  case 74: /* parameter_list: parameter_declaration  */
#line 179 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2064 "y.tab.c"
    break;

  case 75: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 180 "yacc.y"
                                                {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2070 "y.tab.c"
    break;

  case 76: /* parameter_declaration: declaration_specifiers declarator  */
#line 184 "yacc.y"
                                      {yyval=setParameterDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2076 "y.tab.c"
    break;

  case 77: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 185 "yacc.y"
                                                    {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 2082 "y.tab.c"
    break;

  case 78: /* abstract_declarator_opt: %empty  */
#line 189 "yacc.y"
    {yyval=NIL;}
#line 2088 "y.tab.c"
    break;

  case 79: /* abstract_declarator_opt: abstract_declarator  */
#line 190 "yacc.y"
                         {yyval=yyvsp[0];}
#line 2094 "y.tab.c"
    break;

  case 80: /* abstract_declarator: direct_abstract_declarator  */
#line 193 "yacc.y"
                               {yyval=yyvsp[0];}
#line 2100 "y.tab.c"
    break;

  case 81: /* abstract_declarator: pointer  */
#line 194 "yacc.y"
             {yyval=makeType(T_POINTER);}
#line 2106 "y.tab.c"
    break;

  case 82: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 195 "yacc.y"
                                        {yyval=setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2112 "y.tab.c"
    break;

  case 83: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 199 "yacc.y"
                              {yyval=yyvsp[-1];}
#line 2118 "y.tab.c"
    break;

  case 84: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 200 "yacc.y"
                                   {yyval=setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 2124 "y.tab.c"
    break;

  case 85: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 201 "yacc.y"
                                                              {yyval=setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2130 "y.tab.c"
    break;

  case 86: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 202 "yacc.y"
                                   {yyval=setTypeExpr(makeType(T_FUNC), yyvsp[-1]);}
#line 2136 "y.tab.c"
    break;

  case 87: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 203 "yacc.y"
                                                              {yyval=setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_FUNC), yyvsp[-1]));}
#line 2142 "y.tab.c"
    break;

  case 88: /* statement_list_opt: %empty  */
#line 207 "yacc.y"
    {yyval=makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
#line 2148 "y.tab.c"
    break;

  case 89: /* statement_list_opt: statement_list  */
#line 208 "yacc.y"
                    {yyval=yyvsp[0];}
#line 2154 "y.tab.c"
    break;

  case 90: /* statement_list: statement  */
#line 212 "yacc.y"
              {yyval=makeNode(N_STMT_LIST, yyvsp[0], NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
#line 2160 "y.tab.c"
    break;

  case 91: /* statement_list: statement_list statement  */
#line 213 "yacc.y"
                              {yyval=makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 2166 "y.tab.c"
    break;

  case 92: /* statement: labeled_statement  */
#line 217 "yacc.y"
                      {yyval=yyvsp[0];}
#line 2172 "y.tab.c"
    break;

  case 93: /* statement: compound_statement  */
#line 218 "yacc.y"
                        {yyval=yyvsp[0];}
#line 2178 "y.tab.c"
    break;

  case 94: /* statement: expression_statement  */
#line 219 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2184 "y.tab.c"
    break;

  case 95: /* statement: selection_statement  */
#line 220 "yacc.y"
                         {yyval=yyvsp[0];}
#line 2190 "y.tab.c"
    break;

  case 96: /* statement: iteration_statement  */
#line 221 "yacc.y"
                         {yyval=yyvsp[0];}
#line 2196 "y.tab.c"
    break;

  case 97: /* statement: jump_statement  */
#line 222 "yacc.y"
                    {yyval=yyvsp[0];}
#line 2202 "y.tab.c"
    break;

  case 98: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 226 "yacc.y"
                                                 {yyval=makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2208 "y.tab.c"
    break;

  case 99: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 227 "yacc.y"
                                 {yyval=makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2214 "y.tab.c"
    break;

  case 100: /* @11: %empty  */
#line 231 "yacc.y"
       {yyval=current_id; current_level++;}
#line 2220 "y.tab.c"
    break;

  case 101: /* compound_statement: LR @11 declaration_list_opt statement_list_opt RR  */
#line 231 "yacc.y"
                                                                                    {checkForwardReference(); yyval=makeNode(N_STMT_COMPOUND, yyvsp[-2], NIL, yyvsp[-1]); current_id=yyvsp[-3]; current_level--;}
#line 2226 "y.tab.c"
    break;

  case 102: /* expression_statement: SEMICOLON  */
#line 235 "yacc.y"
              {yyval=makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2232 "y.tab.c"
    break;

  case 103: /* expression_statement: expression SEMICOLON  */
#line 236 "yacc.y"
                          {yyval=makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2238 "y.tab.c"
    break;

  case 104: /* selection_statement: IF_SYM LP expression RP statement  */
#line 240 "yacc.y"
                                      {yyval=makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2244 "y.tab.c"
    break;

  case 105: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 241 "yacc.y"
                                                          {yyval=makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2250 "y.tab.c"
    break;

  case 106: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 242 "yacc.y"
                                           {yyval=makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2256 "y.tab.c"
    break;

  case 107: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 246 "yacc.y"
                                         {yyval=makeNode(N_STMT_WHILE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2262 "y.tab.c"
    break;

  case 108: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 247 "yacc.y"
                                                           {yyval=makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2268 "y.tab.c"
    break;

  case 109: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 248 "yacc.y"
                                            {yyval=makeNode(N_STMT_FOR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2274 "y.tab.c"
    break;

  case 110: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 252 "yacc.y"
                                                                     {yyval=makeNode(N_FOR_EXP, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2280 "y.tab.c"
    break;

  case 111: /* expression_opt: %empty  */
#line 256 "yacc.y"
    {yyval=NIL;}
#line 2286 "y.tab.c"
    break;

  case 112: /* expression_opt: expression  */
#line 257 "yacc.y"
                {yyval=yyvsp[0];}
#line 2292 "y.tab.c"
    break;

  case 113: /* jump_statement: RETURN_SYM expression SEMICOLON  */
#line 261 "yacc.y"
                                    {yyval=makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2298 "y.tab.c"
    break;

  case 114: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 262 "yacc.y"
                            {yyval=makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2304 "y.tab.c"
    break;

  case 115: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 263 "yacc.y"
                         {yyval=makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2310 "y.tab.c"
    break;

  case 116: /* arg_expression_list_opt: %empty  */
#line 267 "yacc.y"
    {yyval=makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2316 "y.tab.c"
    break;

  case 117: /* arg_expression_list_opt: arg_expression_list  */
#line 268 "yacc.y"
                         {yyval=yyvsp[0];}
#line 2322 "y.tab.c"
    break;

  case 118: /* arg_expression_list: assignment_expression  */
#line 272 "yacc.y"
                          {yyval=makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2328 "y.tab.c"
    break;

  case 119: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 273 "yacc.y"
                                                     {yyval=makeNodeList(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2334 "y.tab.c"
    break;

  case 120: /* constant_expression_opt: %empty  */
#line 277 "yacc.y"
    {yyval=NIL;}
#line 2340 "y.tab.c"
    break;

  case 121: /* constant_expression_opt: constant_expression  */
#line 278 "yacc.y"
                         {yyval=yyvsp[0];}
#line 2346 "y.tab.c"
    break;

  case 122: /* constant_expression: expression  */
#line 282 "yacc.y"
               {yyval=yyvsp[0];}
#line 2352 "y.tab.c"
    break;

  case 123: /* expression: comma_expression  */
#line 286 "yacc.y"
                     {yyval=yyvsp[0];}
#line 2358 "y.tab.c"
    break;

  case 124: /* comma_expression: assignment_expression  */
#line 290 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2364 "y.tab.c"
    break;

  case 125: /* assignment_expression: conditional_expression  */
#line 294 "yacc.y"
                           {yyval=yyvsp[0];}
#line 2370 "y.tab.c"
    break;

  case 126: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 295 "yacc.y"
                                                   {yyval=makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2376 "y.tab.c"
    break;

  case 127: /* conditional_expression: logical_or_expression  */
#line 299 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2382 "y.tab.c"
    break;

  case 128: /* logical_or_expression: logical_and_expression  */
#line 303 "yacc.y"
                           {yyval=yyvsp[0];}
#line 2388 "y.tab.c"
    break;

  case 129: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 304 "yacc.y"
                                                         {yyval=makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2394 "y.tab.c"
    break;

  case 130: /* logical_and_expression: bitwise_or_expression  */
#line 308 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2400 "y.tab.c"
    break;

  case 131: /* logical_and_expression: logical_and_expression AMPAMP bitwise_or_expression  */
#line 309 "yacc.y"
                                                         {yyval=makeNode(N_EXP_AND, yyvsp[-2], NIL, yyvsp[0]);}
#line 2406 "y.tab.c"
    break;

  case 132: /* bitwise_or_expression: bitwise_xor_expression  */
#line 313 "yacc.y"
                           {yyval=yyvsp[0];}
#line 2412 "y.tab.c"
    break;

  case 133: /* bitwise_xor_expression: bitwise_and_expression  */
#line 317 "yacc.y"
                           {yyval=yyvsp[0];}
#line 2418 "y.tab.c"
    break;

  case 134: /* bitwise_and_expression: equality_expression  */
#line 321 "yacc.y"
                        {yyval=yyvsp[0];}
#line 2424 "y.tab.c"
    break;

  case 135: /* equality_expression: relational_expression  */
#line 325 "yacc.y"
                          {yyval=yyvsp[0];}
#line 2430 "y.tab.c"
    break;

  case 136: /* equality_expression: equality_expression EQL relational_expression  */
#line 326 "yacc.y"
                                                   {yyval=makeNode(N_EXP_EQL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2436 "y.tab.c"
    break;

  case 137: /* equality_expression: equality_expression NEQ relational_expression  */
#line 327 "yacc.y"
                                                   {yyval=makeNode(N_EXP_NEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2442 "y.tab.c"
    break;

  case 138: /* relational_expression: shift_expression  */
#line 331 "yacc.y"
                     {yyval=yyvsp[0];}
#line 2448 "y.tab.c"
    break;

  case 139: /* relational_expression: relational_expression LSS shift_expression  */
#line 332 "yacc.y"
                                                {yyval=makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2454 "y.tab.c"
    break;

  case 140: /* relational_expression: relational_expression GTR shift_expression  */
#line 333 "yacc.y"
                                                {yyval=makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2460 "y.tab.c"
    break;

  case 141: /* relational_expression: relational_expression LEQ shift_expression  */
#line 334 "yacc.y"
                                                {yyval=makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2466 "y.tab.c"
    break;

  case 142: /* relational_expression: relational_expression GEQ shift_expression  */
#line 335 "yacc.y"
                                                {yyval=makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2472 "y.tab.c"
    break;

  case 143: /* shift_expression: additive_expression  */
#line 339 "yacc.y"
                        {yyval=yyvsp[0];}
#line 2478 "y.tab.c"
    break;

  case 144: /* additive_expression: multiplicative_expression  */
#line 343 "yacc.y"
                              {yyval=yyvsp[0];}
#line 2484 "y.tab.c"
    break;

  case 145: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 344 "yacc.y"
                                                        {yyval=makeNode(N_EXP_ADD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2490 "y.tab.c"
    break;

  case 146: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 345 "yacc.y"
                                                         {yyval=makeNode(N_EXP_SUB, yyvsp[-2], NIL, yyvsp[0]);}
#line 2496 "y.tab.c"
    break;

  case 147: /* multiplicative_expression: cast_expression  */
#line 349 "yacc.y"
                    {yyval=yyvsp[0];}
#line 2502 "y.tab.c"
    break;

  case 148: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 350 "yacc.y"
                                                    {yyval=makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2508 "y.tab.c"
    break;

  case 149: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 351 "yacc.y"
                                                     {yyval=makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2514 "y.tab.c"
    break;

  case 150: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 352 "yacc.y"
                                                       {yyval=makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2520 "y.tab.c"
    break;

  case 151: /* cast_expression: unary_expression  */
#line 356 "yacc.y"
                     {yyval=yyvsp[0];}
#line 2526 "y.tab.c"
    break;

  case 152: /* cast_expression: LP type_name RP cast_expression  */
#line 357 "yacc.y"
                                     {yyval=makeNode(N_EXP_CAST, yyvsp[-2], NIL, yyvsp[0]);}
#line 2532 "y.tab.c"
    break;

  case 153: /* unary_expression: postfix_expression  */
#line 361 "yacc.y"
                       {yyval=yyvsp[0];}
#line 2538 "y.tab.c"
    break;

  case 154: /* unary_expression: PLUSPLUS unary_expression  */
#line 362 "yacc.y"
                               {yyval=makeNode(N_EXP_PRE_INC, NIL, yyvsp[0], NIL);}
#line 2544 "y.tab.c"
    break;

  case 155: /* unary_expression: MINUSMINUS unary_expression  */
#line 363 "yacc.y"
                                 {yyval=makeNode(N_EXP_PRE_DEC, NIL, yyvsp[0], NIL);}
#line 2550 "y.tab.c"
    break;

  case 156: /* unary_expression: AMP cast_expression  */
#line 364 "yacc.y"
                         {yyval=makeNode(N_EXP_AMP, NIL, yyvsp[0], NIL);}
#line 2556 "y.tab.c"
    break;

  case 157: /* unary_expression: STAR cast_expression  */
#line 365 "yacc.y"
                          {yyval=makeNode(N_EXP_STAR, NIL, yyvsp[0], NIL);}
#line 2562 "y.tab.c"
    break;

  case 158: /* unary_expression: EXCL cast_expression  */
#line 366 "yacc.y"
                          {yyval=makeNode(N_EXP_NOT, NIL, yyvsp[0], NIL);}
#line 2568 "y.tab.c"
    break;

  case 159: /* unary_expression: MINUS cast_expression  */
#line 367 "yacc.y"
                           {yyval=makeNode(N_EXP_MINUS, NIL, yyvsp[0], NIL);}
#line 2574 "y.tab.c"
    break;

  case 160: /* unary_expression: PLUS cast_expression  */
#line 368 "yacc.y"
                          {yyval=makeNode(N_EXP_PLUS, NIL, yyvsp[0], NIL);}
#line 2580 "y.tab.c"
    break;

  case 161: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 369 "yacc.y"
                                 {yyval=makeNode(N_EXP_SIZE_EXP, NIL, yyvsp[0], NIL);}
#line 2586 "y.tab.c"
    break;

  case 162: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 370 "yacc.y"
                                {yyval=makeNode(N_EXP_SIZE_TYPE, NIL, yyvsp[-1], NIL);}
#line 2592 "y.tab.c"
    break;

  case 163: /* postfix_expression: primary_expression  */
#line 374 "yacc.y"
                       {yyval=yyvsp[0];}
#line 2598 "y.tab.c"
    break;

  case 164: /* postfix_expression: postfix_expression LB expression RB  */
#line 375 "yacc.y"
                                         {yyval=makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2604 "y.tab.c"
    break;

  case 165: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 376 "yacc.y"
                                                      {yyval=makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2610 "y.tab.c"
    break;

  case 166: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 377 "yacc.y"
                                          {yyval=makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2616 "y.tab.c"
    break;

  case 167: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 378 "yacc.y"
                                         {yyval=makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2622 "y.tab.c"
    break;

  case 168: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 379 "yacc.y"
                                 {yyval=makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2628 "y.tab.c"
    break;

  case 169: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 380 "yacc.y"
                                   {yyval=makeNode(N_EXP_POST_DEC, NIL, yyvsp[-1], NIL);}
#line 2634 "y.tab.c"
    break;

  case 170: /* primary_expression: IDENTIFIER  */
#line 384 "yacc.y"
               {yyval=makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2640 "y.tab.c"
    break;

  case 171: /* primary_expression: INTEGER_CONSTANT  */
#line 385 "yacc.y"
                      {yyval=makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2646 "y.tab.c"
    break;

  case 172: /* primary_expression: FLOAT_CONSTANT  */
#line 386 "yacc.y"
                    {yyval=makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2652 "y.tab.c"
    break;

  case 173: /* primary_expression: CHARACTER_CONSTANT  */
#line 387 "yacc.y"
                        {yyval=makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2658 "y.tab.c"
    break;

  case 174: /* primary_expression: STRING_LITERAL  */
#line 388 "yacc.y"
                    {yyval=makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2664 "y.tab.c"
    break;

  case 175: /* primary_expression: LP expression RP  */
#line 389 "yacc.y"
                      {yyval=yyvsp[-1];}
#line 2670 "y.tab.c"
    break;

  case 176: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 393 "yacc.y"
                                                   {yyval=setTypeNameSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2676 "y.tab.c"
    break;


#line 2680 "y.tab.c"

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

#line 396 "yacc.y"

extern char *yytext;
int yyerror(char *s){
    syntax_err++;
    printf("line %d: %s near %s\n", line_no, s, yytext);
	exit(1);
}
