#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n, m, i, j = 1, sum;

    while(scanf("%d", &n) == 1)
    {
        if(n < 0)
            break;

        sum = 1;
        for(i = 0; i < n; i++)
        {
            sum = sum + pow(2, i);
            if(sum >= n)
            {
                break;
            }
        }

        if((n == 0) || (n == 1))
            i = -1;

        printf("Case %d: %d\n", j, i+1);
        j++;
    }
    return 0;
}
