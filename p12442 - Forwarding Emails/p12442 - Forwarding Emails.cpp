#include<bits/stdc++.h>
using namespace std;
vector<int>vtr, sum;
vector<bool>visit;
int dfs(int n)
{
    visit[n] = true;
    int total = 0;
    if(vtr[n] != -1 && !visit[vtr[n]])
    {
        total += 1 + dfs(vtr[n]);
    }

    visit[n] = false;
    return sum[n] = total;
}
int main()
{
    int cs, test, m, node, x, y, i, j, max_len;

    scanf("%d", &test);
    for(cs = 1; cs <= test; cs++)
    {
        scanf("%d", &node);

        visit.assign(node+1, false);
        vtr.assign(node+1, -1);
        sum.assign(node+1, -1);

        for(i = 0; i < node; i++)
        {
            scanf("%d %d", &x, &y);
            vtr[x] = y;
        }

        max_len = 0;
        m = 0;
        for(i = 1; i <= node; i++)
        {
            if(sum[i] == -1)
            {
                dfs(i);
            }

            if(max_len < sum[i])
            {
                max_len = sum[i];
                m = i;
            }
        }

        printf("Case %d: %d %d\n", cs, m, sum[m]);
    }

    return 0;
}
