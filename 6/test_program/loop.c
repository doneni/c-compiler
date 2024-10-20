int main(void) {
    int a;
    int b;
    int i;
    a = 10;
    b = 0;
    while(a-- > 0) {
        b++;
    }
    for(i = 0; i < a; i++)
    {
        b--;
    }
    return 0;
}