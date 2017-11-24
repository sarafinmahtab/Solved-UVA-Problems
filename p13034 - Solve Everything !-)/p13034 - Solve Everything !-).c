#include<stdio.h>
int main()
{
    int num[15], i, j, n, count;

    scanf("%d", &n);

    for(j = 1; j <= n; j++)
    {
        for(i = 0; i < 13; i++)
        {
            scanf("%d", &num[i]);
        }

        count = 0;

        for(i = 0; i < 13; i++)
        {
            if(num[i] == 0)
            {
                count++;
            }
        }

        if(count == 0)
        {
            printf("Set #%d: Yes\n", j);
        }
        else
        {
            printf("Set #%d: No\n", j);
        }
    }
    return 0;
}
