#include<stdio.h>
int main()
{
    long long i, n, count, n3, ans;

    while(scanf("%lli", &n) == 1)
    {
        count = 1;
        for(i = 1; i <= n; i++)
        {
            i = i + 2;
            count++;
        }

        for(i = 1; i <= n; i++)
        {
            n3 = count * i + count - 1;
        }

        ans = n3 * 3 - 6;

        printf("%lli\n", ans);
    }

    return 0;
}
