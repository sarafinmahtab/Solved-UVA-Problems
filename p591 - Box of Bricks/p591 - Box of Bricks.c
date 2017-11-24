#include<stdio.h>
int main()
{
    int n, i, j, l = 0, sum, div, k;
    int h[100];

    while(scanf("%d", &n) != EOF)
    {
        l++;
        k = 0;
        sum = 0;
        if(n == 0)
        {
            break;
        }
        else
        {
            for(i = 0; i < n; i++)
            {
                scanf("%d", &h[i]);
                sum = sum + h[i];
                div = sum / n;
            }
            for(j = 0; j < n; j++)
            {
                if(div < h[j])
                {
                    k = k + (h[j] - div);
                }
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n\n", l, k);
        }
    }

    return 0;
}
