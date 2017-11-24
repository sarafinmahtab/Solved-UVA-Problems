#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int T, N, i, j, num[100], high, low;

    scanf("%d", &T);

    for(i = 0; i < T; i++)
    {
        high = 0;
        low = 0;
        scanf("%d", &N);

        for(j = 0; j < N; j++)
        {
            scanf("%d", &num[j]);
        }

        for(j = 0; j < (N-1); j++)
        {
            if(num[j+1] > num[j])
            {
                high++;
            }
            else if(num[j+1] < num[j])
            {
                low++;
            }
        }

        printf("Case %d: %d %d\n", i+1, high, low);
    }

    return 0;
}
