#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >graph;
int vertex;
bool visited[105];
void bfs(int src)
{
    int u, v, i;
    fill(visited, visited+vertex, false);

    queue<int>bq;
    bq.push(src);

    while(!bq.empty())
    {
        u = bq.front();
        bq.pop();

        for(i = 0; i < graph[u].size(); i++)
        {
            v = graph[u][i];
            if(!visited[v])
            {
                visited[v] = true;
                bq.push(v);
            }
        }
    }

    int cnt = 0;
    for(i = 0; i < vertex; i++)
    {
        if(!visited[i])
        {
            cnt++;
        }
    }

    printf("%d", cnt);
    for(i = 0; i < vertex; i++)
    {
        if(!visited[i])
        {
            printf(" %d", i+1);
        }
    }
    printf("\n");
}
int main()
{
    int x, y, i, j, test, a;

    while(scanf("%d", &vertex) && vertex != 0)
    {
        graph.clear();
        graph.resize(vertex);

        while(scanf("%d", &x) && x != 0)
        {
            while(scanf("%d", &y) && y != 0)
            {
                graph[x-1].push_back(y-1);
            }
        }

        scanf("%d", &test);
        while(test--)
        {
            int cnt = 0;
            scanf("%d", &a);

            bfs(a-1);
        }
    }

    return 0;
}
