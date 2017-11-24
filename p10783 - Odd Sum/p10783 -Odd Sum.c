#include<stdio.h>
int main()
{
    int j, t, a, b, i, sum;

    scanf("%d", &t);

    for(j = 1; j <= t; j++)
    {
        sum = 0;
        scanf("%d", &a);
        scanf("%d", &b);

        for(i = a; i <= b; i=i+1)
        {
            if(i%2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("Case %d: %d\n", j, sum);
    }
}
