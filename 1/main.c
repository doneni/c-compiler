#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ch = ' ';
double num;
enum {NULL_, NUMBER, PLUS, STAR, LP, RP, END} token;

void get_token();
double expression();
double term();
double factor();
void error(int i);

int main(void)
{
    double result = 0;
    get_token();
    result = expression();
    if(token != END)
        error(3);
    else
        if(result == floor(result))
            printf("%d\n", (int)result);
        else
            printf("%f\n", result);
}

void get_token()
{
    do {
        ch = getchar();
    } while(ch == ' ' || ch == '\t');
    
    if('0' <= ch && ch <= '9')
    {
        token = NUMBER;
        char* p = (char*)calloc(100, sizeof(char));
        int idx = 0;
        while('0' <= ch && ch <= '9')
        {
            p[idx++] = ch;
            ch = getchar();
        }
        num = atoi(p);
        free(p);
        if(ch == '.')
        {
            char* q = (char*)calloc(100, sizeof(char));
            int idx = 0;
            ch = getchar();
            while('0' <= ch && ch <= '9')
            {
                q[idx++] = ch;
                ch = getchar();
            }
            num += atoi(q) * pow(0.1, idx);
        }
        ungetc(ch, stdin);
    }
    else if(ch == '\0')
        token = NULL_;
    else if(ch == '+')
        token = PLUS;
    else if(ch == '*')
        token = STAR;
    else if(ch == '(')
        token = LP;
    else if(ch == ')')
        token = RP;
    else if(ch == '\n')
        token = END;
    else
        error(4);
}

double expression()
{
    double result = 0;
    result = term();

    while(token == PLUS)
    {
        get_token();
        result += term();
    }
    return result;
}

double term()
{
    double result = 0;
    result = factor();
    while(token == STAR)
    {
        get_token();
        result *= factor();
    }
    
    return result;
}

double factor()
{
    double result = 0;
    if(token == NUMBER)
    {
        result = num;
        get_token();
    }
    else if(token == LP)
    {
        get_token();
        result = expression();
        if(token == RP)
        {
            get_token();
        }

        else
            error(2);
    }
    else
        error(1);
    
    return result;
}

void error(int i)
{
    switch(i)
    {
        case 1:
            printf("error %d: wrong expression \n", i);
            break;
        case 2:
            printf("error %d: parenthesis not closed \n", i);
            break;
        case 3:
            printf("error %d: expression not terminated \n", i);
            break;
        case 4:
            printf("error %d: wrong input\n", i);
            break;
    }
    exit(1);
}

