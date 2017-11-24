#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, test, p, q, j, sum, add, lag, cnt, num[50];

    scanf("%d", &test);

    for(i = 0; i < test; i++)
    {
        sum = 0;
        scanf("%d%d%d", &n, &p, &q);

        for(j = 0; j < n; j++)
        {
            scanf("%d", &num[j]);

            sum = sum + num[j];
        }

        cnt = 0;
        add = 0;

        for(j = 0; j < n; j++)
        {
            add = add + num[j];
            if(add > q)
            {
                break;
            }
            cnt++;
        }

        if(cnt < p)
        {
            printf("Case %d: %d\n", i+1, cnt);
        }
        else
        {
            printf("Case %d: %d\n", i+1, p);
        }
    }
    return 0;
}
