#include<stdio.h>
int main()
{
    int n;
    long long int i, s, d, sum, ans1, ans2;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%lli%lli", &s, &d);

        sum = s+d;

        if((sum%2 != 0) || (s < d))
        {
            printf("impossible\n");
        }
        else if((sum%2 == 0) && (s >= d))
        {
            ans1 = sum/2;
            ans2 = ans1 - d;

            printf("%lli %lli\n", ans1, ans2);
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
