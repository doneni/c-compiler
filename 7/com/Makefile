all : lex.yy.c y.tab.c
	gcc -g -w -o com lex.yy.c y.tab.c print.c supporting_func.c print_sem.c semantic.c generate_code.c main.c

lex.yy.c : lex.l
	lex lex.l
y.tab.c : yacc.y
	yacc -d yacc.y

clean : 
	rm com lex.yy.c y.tab.c y.tab.h a.asm