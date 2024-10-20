all : lex.yy.c y.tab.c
	gcc -g -w -o semantic lex.yy.c y.tab.c print.c supporting_func.c print_sem.c semantic.c main.c

lex.yy.c : lex.l
	lex lex.l
y.tab.c : yacc.y
	yacc -d yacc.y

clean : 
	rm semantic lex.yy.c y.tab.c y.tab.h