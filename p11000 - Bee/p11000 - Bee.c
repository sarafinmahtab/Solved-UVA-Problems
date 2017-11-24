#include<stdio.h>
int main()
{
    long long int N, i, male[100], total[100], temp1, temp2;

    while(scanf("%lli", &N) != EOF)
    {
        male[0] = 0;
        total[0] = 1;

        if(N < 0)
        {
            break;
        }
        else if(N == 0)
        {
            printf("%lli %lli\n", male[0], total[0]);
        }
        else
        {
            for(i = 0; i < N; i++)
            {
                male[i+1] = total[i];
                total[i+1] = male[i] + total[i] + 1;

                temp1 = male[i+1];
                temp2 = total[i+1];
            }
            printf("%lli %lli\n", temp1, temp2);
        }
    }
    return 0;
}
