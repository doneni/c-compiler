my_parser : lex.yy.c y.tab.c
	gcc -w -o my_parser lex.yy.c y.tab.c print.c supporting_func.c main.c

lex.yy.c : lex.l
	lex lex.l
y.tab.c : yacc.y
	yacc -d yacc.y

clean : 
	rm my_parser lex.yy.c y.tab.c y.tab.h