#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, num, cnt, lag, arr[500010];

    cnt = 0;
    lag = 0;
    arr[1] = 1;
    k = 2;

    for(i = 1; i <= 500005; i=2*i)
    {
        for(j = 2; j <= 2*i; j+=2)
        {
            arr[k++] = j;
            if(k == 500005)
            {
                lag = 1;
                break;
            }
        }

        if(lag == 1)
        {
            break;
        }
    }

    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        printf("%d\n", arr[n]);
    }

    return 0;
}
