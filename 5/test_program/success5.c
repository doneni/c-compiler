int main(void) {
    int a = 10;
    int b = 1;
    int i = 0;
    while(a-- > 0) {
        b++;
    }
    for(i = 0; i < a; i++)
    {
        b--;
    }
    return 0;
}