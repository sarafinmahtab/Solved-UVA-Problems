#include<cstdio>
using namespace std;
int GCD(int x, int y)
{
    int temp;

    while(x != 0)
    {
        temp = x;
        x = y % x;
        y = temp;
    }

    return y;
}
int main()
{
    int i, j, N;
    long long G;

    while(scanf("%d", &N) == 1)
    {
        if(N == 0)
            break;
        G = 0;
        for(i = 1; i < N; i++)
        {
            for(j = i+1; j <= N; j++)
            {
                G += GCD(i, j);
            }
        }
        printf("%lld\n", G);
    }
    return 0;
}
