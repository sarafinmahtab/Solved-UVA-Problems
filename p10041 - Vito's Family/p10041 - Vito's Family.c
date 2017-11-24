#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i, j, k, n, m, num[30000], near, sum, temp;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        sum = 0;

        scanf("%d", &m);
        for(j = 0; j < m; j++)
        {
            scanf("%d", &num[j]);
        }

        for(j = 0; j < (m-1); j++)
        {
            for(k = 0; k < (m - j - 1); k++)
            {
                if(num[k] < num[k+1])
                {
                    temp = num[k];
                    num[k] = num[k+1];
                    num[k+1] = temp;
                }
            }
        }

        for(j = 0; j < m; j++)
        {
            sum = sum + abs(num[m/2] - num[j]);
        }

        printf("%d\n", sum);
    }

    return 0;
}
