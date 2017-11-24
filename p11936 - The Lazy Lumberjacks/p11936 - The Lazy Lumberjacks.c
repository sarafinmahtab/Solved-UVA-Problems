#include<stdio.h>
int main()
{
    int a, b, c;
    int i, N;

    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        if((a+b <= c) || (b+c <= a) || (c+a <= b))
        {
            printf("Wrong!!\n");
        }
        else if(a <= 0 || b <= 0 || c <= 0)
        {
            printf("Wrong!!\n");
        }
        else if((a == b) && (b == c))
        {
            printf("OK\n");
        }
        else if((a+b > c) || (b+c > a) || (c+a > b))
        {
            printf("OK\n");
        }
    }
    return 0;
}
