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
