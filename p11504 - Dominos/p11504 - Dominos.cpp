#include<bits/stdc++.h>
using namespace std;
vector<int>st;
vector<int>vtr[100100];
int visited[100100];
int visit[100100];
void top_sort(int u)
{
    int i, v;
    visit[u] = 1;

    for(i = 0; i < vtr[u].size(); i++)
    {
        v = vtr[u][i];
        if(visit[v] == 0)
        {
            top_sort(v);
        }
    }

    st.push_back(u);
}

void bfs(int src)
{
    int u, v, i;
    visited[src] = 1;

    queue<int>q;
    q.push(src);

    while(!q.empty())
    {
        u = q.front();
        q.pop();

        for(i = 0; i < vtr[u].size(); i++)
        {
            v = vtr[u][i];

            if(visited[v] == 0)
            {
                visited[v] = 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int test, n, e, x, y, i, j, cnt;

    cin >> test;
    for(i = 0; i < test; i++)
    {
        cnt = 0;
        cin >> n >> e;

        for(j = 0; j < e; j++)
        {
            cin >> x >> y;
            vtr[x].push_back(y);
        }

        memset(visit, 0, sizeof(visit));

        for(j = 1; j <= n; j++)
        {
            if(visit[j] == 0)
            {
                top_sort(j);
            }
        }

        memset(visited, 0, sizeof(visited));

        for(j = st.size()-1; j >= 0; j--)
        {
            if(visited[st[j]] == 0)
            {
                cnt++;
                bfs(st[j]);
            }
        }

        cout << cnt << endl;

        for(j = 1; j <= n; j++)
        {
            vtr[j].clear();
        }

        st.clear();
    }

    return 0;
}
