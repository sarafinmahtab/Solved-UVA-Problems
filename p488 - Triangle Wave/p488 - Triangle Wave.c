#include<stdio.h>
int main()
{
    int h, k, i, j, n, m, t;

    scanf("%d", &t);

    for(h = 1; h <= t; h++)
    {
        scanf("%d", &n);
        scanf("%d", &m);

        for(k = 1; k <= m; k++)
        {
            for(i = 1; i <= n; i++)
            {
                for(j = 1; j <= i; j++)
                {
                    printf("%d", i);
                }
                printf("\n");
            }

            for(i = (n-1); i >= 1; i--)
            {
                for(j = 1; j <= i; j++)
                {
                    printf("%d", i);
                }
                printf("\n");
            }
            if((k == m) && (h == t))
            {
                break;
            }
            else
            {
                printf("\n");
            }
        }
    }
    return 0;
}
