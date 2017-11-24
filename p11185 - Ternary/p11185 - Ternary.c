#include<stdio.h>
int main()
{
    long long int N, quotient, ternal[10000], i, j;

    while(scanf("%lli", &N) != EOF)
    {
        i = 1;

        if(N < 0)
        {
            break;
        }
        else if(N == 0)
        {
            printf("0\n");
        }
        else
        {
            while(N != 0)
            {
                ternal[i++] = N % 3;
                N = N / 3;
            }

            for(j = i-1; j > 0; j--)
            {
                printf("%lli", ternal[j]);
            }
            printf("\n");
        }
    }

    return 0;
}
