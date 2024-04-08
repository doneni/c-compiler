GCC = cc
LEX = lex
YACC = yacc

all: my_parser

my_parser: y.tab.c lex.yy.c
	$(GCC) -o my_parser y.tab.c lex.yy.c

lex.yy.c: 
	$(LEX) lex.l

y.tab.c: 
	$(YACC) -d yacc.y

clean:
	rm *.o my_parser lex.yy.c y.tab.h y.tab.c