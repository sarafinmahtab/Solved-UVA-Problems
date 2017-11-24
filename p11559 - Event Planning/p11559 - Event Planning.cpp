#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, h, w, p[20], a[15], amnt, m, lag, i, j;

    while(scanf("%d %d %d %d", &n, &b, &h, &w) == 4)
    {
        m = b;
        lag = 0;
        for(i = 0; i < h; i++)
        {
            scanf("%d", &p[i]);
            for(j = 0; j < w; j++)
            {
                scanf("%d", &a[j]);
                if(a[j] >= n)
                {
                    amnt = n*p[i];
                    if(amnt <= m)
                    {
                        m = amnt;
                        lag = 1;
                    }
                }
            }
        }

        if(lag == 0)
        {
            printf("stay home\n");
        }
        else
        {
            printf("%d\n", m);
        }
    }

    return 0;
}
