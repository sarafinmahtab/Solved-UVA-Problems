#include<bits/stdc++.h>
using namespace std;
vector < vector < int > > vt;
queue<int>q;
void bfs(int src)
{
    int i, j, u, v, lag = 0;
    int visited[201], level[201];

    memset(visited, 0, sizeof(visited));
    visited[src] = 1;
    level[src] = 0;
    q.push(src);

    while(!q.empty())
    {
        u = q.front();
        q.pop();

        for(i = 0; i < vt[u].size(); i++)
        {
            v= vt[u][i];

            if(visited[v] == 0)
            {
                visited[v] = 1;
                level[v] = level[u] + 1;
                q.push(v);
            }
            else if(visited[v] == 1 && level[v] == level[u])
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
}
int main()
{
    int n, e, x, y;

    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
        {
            break;
        }

        vt.clear();
        vt.resize(n);

        scanf("%d", &e);

        for(int i = 0; i < e; i++)
        {
            scanf("%d %d", &x, &y);

            vt[x].push_back(y);
            vt[y].push_back(x);
        }

        bfs(vt[0][0]);

        if(!q.empty())
        {
            while(!q.empty())
            {
                q.pop();
            }

            printf("NOT BICOLORABLE.\n");
        }
        else
        {
            printf("BICOLORABLE.\n");
        }
    }

    return 0;
}
