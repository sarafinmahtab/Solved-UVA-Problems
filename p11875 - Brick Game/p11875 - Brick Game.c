#include<stdio.h>
int main()
{
    int T, N, i, j, num[10];

    scanf("%d", &T);

    for(i = 0; i < T; i++)
    {
        scanf("%d", &N);

        for(j = 1; j <= N; j++)
        {
            scanf("%d", &num[j]);
        }

        printf("Case %d: %d\n", i+1, num[(j+1)/2]);
    }

    return 0;
}
