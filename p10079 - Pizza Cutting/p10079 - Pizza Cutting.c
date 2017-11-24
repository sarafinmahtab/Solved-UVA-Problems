#include<stdio.h>
int main()
{
    long long int n, i, sum;

    while(scanf("%lli", &n) != EOF)
    {
        sum = 1;

        if(n < 0)
        {
            break;
        }
        else
        {
            for(i = 1; i <= n; i++)
            {
                sum += i;
            }

            printf("%lli\n", sum);
        }
    }

    return 0;
}
