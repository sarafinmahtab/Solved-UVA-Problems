#include<bits/stdc++.h>
using namespace std;
vector<int>graph[10010];
int i, n, e;
int visited[10010];
int bfs(int src, int cnt)
{
    int u, v;

    visited[src] = 1;

    queue<int>bq;
    bq.push(src);

    while(!bq.empty())
    {
        u = bq.front();
        bq.pop();

        for(i = 0; i < graph[u].size(); i++)
        {
            v = graph[u][i];

            while(visited[v] == 0)
            {
                visited[v] = 1;
                bq.push(v);
                cnt++;
            }
        }
    }

    return cnt;
}
int main()
{
    int x, y, v, test, l, arr[10010];

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d", &n);
        scanf("%d", &e);
        scanf("%d", &l);

        for(i = 0; i < e; i++)
        {
            scanf("%d %d", &x, &y);
            graph[x].push_back(y);
        }

        memset(visited, 0, sizeof(visited));

        for(int j = 0; j < l; j++)
        {
            scanf("%d", &arr[j]);
        }

        int p = 0;
        for(int j = 0; j < l; j++)
        {
            if(visited[arr[j]] == 0)
            {
                p += bfs(arr[j], 1);
            }
        }
        cout << p << endl;

        graph[0].clear();
        for(int j = 1; j <= n; j++)
        {
            graph[j].clear();
        }
    }

    return 0;
}
