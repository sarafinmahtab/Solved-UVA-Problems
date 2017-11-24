#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, sum[30], ma, mi, space, len;
    char arr[100];

    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;

        memset(sum, 0, sizeof(sum));
        ma = -1;
        mi = 100;
        space = 0;

        getchar();
        for(i = 0; i < n; i++)
        {
            gets(arr);

            for(j = 0; j < 25; j++)
            {
                if(arr[j] == ' ')
                {
                    sum[i]++;
                }
            }
        }

        for(i = 0; i < n; i++)
        {
            if(sum[i] <= mi)
                mi = sum[i];
        }

        for(i = 0; i < n; i++)
        {
            space = space + sum[i] - mi;
        }

        printf("%d\n", space);
    }

    return 0;
}
