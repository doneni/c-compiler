#include <stdio.h>
#include "type.h"
extern int syntax_err;
extern A_NODE * root;

void main() 
{
    initialize();
    printf("initializing...\n");
    yyparse();
    printf("parsing...\n");
    if(syntax_err) exit(1);
    print_ast(root);
    printf("done!\n");
    exit(0);
}