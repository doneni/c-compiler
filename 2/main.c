#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUMBER 256
#define PLUS 257
#define STAR 258
#define LPAREN 259
#define RPAREN 260
#define END 261
#define EXPRESSION 0
#define TERM 1
#define FACTOR 2
#define ACC 1000

typedef struct {
    enum {
        INT,
        FLT
    } type;
    union {
        int i;
        double f;
    } value;
} number;

int action[12][6] = {
	{5, 0, 0, 4, 0, 0},
    {0, 6, 0, 0, 0, ACC},
    {0, -2, 7, 0, -2, -2},
	{0, -4, -4, 0, -4, -4},
    {5, 0, 0, 4, 0, 0},
    {0, -6, -6, 0, -6, -6},
	{5, 0, 0, 4, 0, 0},
    {5, 0, 0, 4, 0, 0},
    {0, 6, 0, 0, 11, 0},
	{0, -1, 7, 0, -1, -1},
    {0, -3, -3, 0, -3, -3},
    {0, -5, -5, 0, -5, -5}
};

int go_to[12][3] = {
	{1, 2, 3},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    {8, 2, 3},
    {0, 0, 0},
	{0, 9, 3},
    {0, 0, 10},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}
};

int prod_left[7] = {0, EXPRESSION, EXPRESSION, TERM, TERM, FACTOR, FACTOR};
int prod_length[7] = {0, 3, 1, 3, 1, 3, 1};

int stack[1000];
int top = -1;
int sym;

char yytext[32];
static number value[1000];
static number yylval;

void yyparse();
int yylex();
void push(int);
void reduce(int);
void shift(int);
void yyerror(int i);

int main(void) {
	yyparse();

	printf("result: ");
	if(value[top].type == INT)
		printf("%d\n", value[top].value.i);
	else
		printf("%f\n", value[top].value.f);
	return 0;
}

void yyparse() {
	int i;
	stack[++top] = 0;
	sym = yylex();
	
	do {
		i = action[stack[top]][sym - 256];
		if(i == ACC)
			printf("success!\n");
		else if(i > 0)
			shift(i);
		else if(i < 0)
			reduce(-i);
		else
			yyerror(1);
	} while(i != ACC);
}

int yylex() {
	static char ch = ' ';
	int i = 0;
	
	while(ch == ' ' || ch == '\t')
		ch = getchar();
	
	if(isdigit(ch)) {
		yylval.type = INT;
		yylval.value.i = 0;
		do {
			yylval.value.i = yylval.value.i * 10 + (ch - '0');
			ch = getchar();
		} while(isdigit(ch));
		if( ch == '.') {
			yylval.type = FLT;
			yylval.value.f = yylval.value.i;
			double digit = 1;
			ch = getchar();
			while(isdigit(ch)) {
				digit *= 10;
				yylval.value.f += (ch - '0') / digit;
				ch = getchar();
			}
		}
		return NUMBER;
	}
	else if(ch == '+') {
		ch = getchar();
		return PLUS;
	}
	else if(ch == '*') {
		ch = getchar();
		return STAR;
	}
	else if(ch == '(') {
		ch = getchar();
		return LPAREN;
	}
	else if(ch == ')') {
		ch = getchar();
		return RPAREN;
	}
	else if(ch == EOF || ch == '\n') {
		ch = getchar();
		return END;
	}
	else {
		if(ch != '\n')
			yyerror(2);
	}

	return -1;
}

void push(int i) {
	top++;
	stack[top] = i;
}

void shift(int i) {
	push(i);
	value[top] = yylval;
	sym = yylex();
}

void reduce(int i) {
	int old_top;
	top -= prod_length[i];
	old_top = top;
	push(go_to[stack[old_top]][prod_left[i]]);

	switch(i) {
		case 1:
			if(value[old_top + 1].type == FLT || value[old_top + 3].type == FLT) {
				value[top].type = FLT;
				value[top].value.f = ((value[old_top + 1].type == FLT) ? value[old_top + 1].value.f : value[old_top + 1].value.i)
										+ ((value[old_top + 3].type == FLT) ? value[old_top + 3].value.f : value[old_top + 3].value.i);
			}
			else {
				value[top].type = INT;
				value[top].value.i = value[old_top + 1].value.i + value[old_top + 3].value.i; 
			}
			break;
		case 2:
			value[top] = value[old_top + 1];
			break;
		case 3:
			if(value[old_top + 1].type == FLT || value[old_top + 3].type == FLT) {
				value[top].type = FLT;
				value[top].value.f = ((value[old_top + 1].type == FLT) ? value[old_top + 1].value.f : value[old_top + 1].value.i)
										* ((value[old_top + 3].type == FLT) ? value[old_top + 3].value.f : value[old_top + 3].value.i);
			}
			else {
				value[top].type = INT;
				value[top].value.i = value[old_top + 1].value.i * value[old_top + 3].value.i; 
			}			break;
		case 4:
			value[top] = value[old_top + 1];
			break;
		case 5:
			value[top] = value[old_top + 2];
			break;
		case 6:
			value[top] = value[old_top + 1];
			break;
		default:
			yyerror(3);
			break;
	}
}

void yyerror(int i){
	switch(i){
		case 1 :
			printf("error %d: syntax error.\n", i);
			break;
		case 2 : 
			printf("error %d: token error.\n", i);
			break;
        case 3 :
            printf("error %d: parsing table error.\n", i);
            break;
		default : 
			printf("error %d: unknown error. \n", i);
			break;
	}
	exit(1);
}