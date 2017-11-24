#include<bits/stdc++.h>
using namespace std;
vector<int>vtr[105];
stack<int>st;
int visited[105];

void dfs(int u)
{
    int i, v;
    visited[u] = 1;

    for(i = 0; i < vtr[u].size(); i++)
    {
        v = vtr[u][i];
        if(visited[v] == 0)
        {
            dfs(v);
        }
    }

    st.push(u);
}

int main()
{
    int i, n, e, x, y;

    while(scanf("%d %d", &n, &e) == 2)
    {
        if(n == 0 && e == 0)
        {
            break;
        }

        for(i = 0; i < e; i++)
        {
            scanf("%d %d", &x, &y);

            vtr[x].push_back(y);
        }

        memset(visited, 0, sizeof(visited));

        for(i = 1; i <= n; i++)
        {
            if(visited[i] == 0)
            {
                dfs(i);
            }
        }

        cout << st.top();
        st.pop();
        while(!st.empty())
        {
            cout << " " << st.top();
            st.pop();
        }
        cout << endl;

        for(i = 1; i <= n; i++)
        {
            vtr[i].clear();
        }
    }

    return 0;
}
