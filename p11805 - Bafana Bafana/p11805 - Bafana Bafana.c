#include<stdio.h>
int main()
{
    int i, T, N, K, P, C;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        C = 0;
        scanf("%d%d%d", &N, &K, &P);

        if((N == P) || (P%N == 0))
        {
            C = K;
            printf("Case %d: %d\n", i, C);
        }
        else if(((K+P) == N) || ((P%N+K)%N == 0))
        {
            C = N;
            printf("Case %d: %d\n", i, C);
        }
        else if(((K+P) < 2*N) && ((K+P) > N))
        {
            C = (K+P) - N;
            printf("Case %d: %d\n", i, C);
        }
        else if((K+P) > 2*N)
        {
            C = (K+P)%N;
            printf("Case %d: %d\n", i, C);
        }
        else if(N > (K+P))
        {
            C = K+P;
            printf("Case %d: %d\n", i, C);
        }
        else
        {
            C = ((K+P) - N);
            printf("Case %d: %d\n", i, C);
        }
    }
    return 0;
}
