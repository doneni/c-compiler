int main(void)
{
    int cnt, i, target;
    int arr[5];
    cnt = 0;
    i = 0;
    target = 0;
    arr[0] = 1; arr[1] = 0; arr[2] = 0; arr[3] = 4; arr[5] = 0;
    for(i = 0; i < 5; i++)
    {
        if(arr[i] == target)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}