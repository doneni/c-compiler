typedef struct S{
    int s_i;
    float s_f;
}s;
union T{
    int t_i;
    float t_f;
};
int main(void) {
    s s1;
    t t1;
    return 0;
}