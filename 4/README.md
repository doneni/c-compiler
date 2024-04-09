과제-4 : C 언어 파서 제작
제2장의 문법과 제3장의 어휘분석 프로그램을 가지고 C언어의 파서를 제작하고 실험하시오

* unix 환경에서 yacc 과 lex 를 이용하여 제작하고 실험해야 합니다

* 가능한 많은 형태의 선언문,명령문 및 함수를 포함하는 여러가지 프로그램을 입력으로 다양한 실험을 하기 바랍니다

* 파서를 호출하기 위한 main 함수, 파서 실행시 문법적 오류가 있을때 자동적으로 호출되는 yyerror 함수, EOF 처리를 위한 yywrap 함수를 다음과 같은 예로 작성하여 사용하여야 합니다. 교재뒤 부록의 프로그램을 참고하세요

   void main() { yyparse(); printf("success\n");}

   extern char *yytext;    yyerror(char*s) {printf("%s near %s\n",s,yytext); exit(1);} 

   int yywrap() {return(1);}

* 2장의 문법에 문제가 있어서 yacc 수행시 곤란한 "shift/reduce conflicts" 발생할거 같습니다. 콤마(COMMA) 가 함수호출, 변수초기화, enumerator 초기화 등에서는 수식과수식의 구분기호로 사용되고 일반수식에서는 연산기호로도 사용되어 혼란이 일어나는 것입니다. 수식에서 콤마 연산자를 아주 없애버리든지 아니면 함수호출 파라미터, 변수초기화수식, enumerator 초기화 수식에서는 COMMA 를 사용할수 없도록 다음과 같이 문법에서 두 줄을 고치면 될것 같습니다

   constant_expression : assignment_expression
   initializer : assignment_expression
