# a.out: y.tab.o lex.yy.o print.o supporting_func.o main.o
# 	cc -w -g -o $@ $^

# clean:
# 	rm lex.yy.c
# 	rm y.tab.c
# 	rm y.tab.h
# 	rm a.out
# 	rm y.output
# 	rm *.o

# y.tab.c: yacc.y
# 	yacc -dv yacc.y

# lex.yy.c: lex.l
# 	lex lex.l

# print.o: print.c
# 	cc -g -c $^

# supporting_func.o: supporting_func.c
# 	cc -g -c $^

# y.tab.o: y.tab.c
# 	cc -g -c $^

# lex.yy.o: lex.yy.c
# 	cc -g -c $^

# main.o: main.c
# 	cc -g -c $^

example : lex.yy.c y.tab.c
	gcc -g -w -o com lex.yy.c y.tab.c print.c supporting_func.c main.c

lex.yy.c : lex.l
	lex lex.l
y.tab.c : yacc.y
	yacc -d yacc.y

clean : 
	rm lex.yy.c y.tab.c y.tab.h