#include<stdio.h>
#include<math.h>
int main()
{
    int T, N, rem, orgN, count;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &N);
        orgN = N;
        count = 0;

        while(N > 0)
        {
            N /= 10;
            count++;
        }

        N = orgN;

        while(N > 0)
        {
            rem = N % 10;
            orgN = orgN - pow(rem, count);
            N = N / 10;
        }

        if(orgN == 0)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
