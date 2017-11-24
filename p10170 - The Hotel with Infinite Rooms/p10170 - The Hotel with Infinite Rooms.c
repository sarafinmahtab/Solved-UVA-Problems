#include<stdio.h>
int main()
{
    long long n, m, i, sum;

    while(scanf("%lli %lli", &n, &m) == 2)
    {
        sum = 0;
        for(i = n; i < m; i++)
        {
            sum = sum + i;
            if(sum >= m)
            {
                break;
            }
        }

        printf("%lli\n", i);
    }

    return 0;
}
