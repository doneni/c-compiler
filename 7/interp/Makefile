all : lex.yy.c y.tab.c
	gcc -g -w -o interp lex.yy.c y.tab.c lib.c interp.c

lex.yy.c : interp.l
	lex interp.l
y.tab.c : interp.y
	yacc -d interp.y

clean : 
	rm interp lex.yy.c y.tab.c y.tab.h