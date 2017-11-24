#define pii pair<int, int>
#include<bits/stdc++.h>
using namespace std;
int fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
int fy[] = {1, -1, 0, 0, 1, -1, 1, -1};
int visit[101][101], check[101][101];
int r, c;
char grid[101][101];

void bfs(int x, int y)
{
    queue<pii>q;
    memset(visit, 0, sizeof(visit));
    visit[x][y] = 1;
    q.push(pii(x, y));
    grid[x][y] = '*';

    while(!q.empty())
    {
        pii top = q.front();
        q.pop();

        for(int i = 0; i < 8; i++)
        {
            x = top.first + fx[i];
            y = top.second + fy[i];

            if((x >= 0 && x < r && y >= 0 && y < c) && grid[x][y] == '@' && visit[x][y] == 0)
            {
                visit[x][y] = 1;
                grid[x][y] = '*';
                q.push(pii(x, y));
            }
        }
    }
}

int main()
{
    int p, q;

    while(scanf("%d %d", &r, &c) == 2)
    {
        if(r == 0 && c == 0)
        {
            break;
        }

        int cnt = 0;

        getchar();
        for(int i = 0; i < r; i++)
        {
            gets(grid[i]);
        }

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(grid[i][j] == '@')
                {
                    bfs(i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
