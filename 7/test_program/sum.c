int sum(int a, int b){
    return a+b;
}

int main()
{
    int num1;
    int num2;
    int num3;

    num1 = 1234;
    num2 = 5678;

    num3 = sum(num1, num2);
    printf("%d\n", num3);
    return 0;
}