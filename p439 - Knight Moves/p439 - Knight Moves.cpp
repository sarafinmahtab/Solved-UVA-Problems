#define pii pair<int, int>
#include<bits/stdc++.h>
using namespace std;
int fx[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int fy[] = {2, 2, 1, 1, -1, -1, -2, -2};
char m1[5], m2[5];
void bfs()
{
    int x = m1[0]-97, y = m1[1]-49, p = m2[0]-97, q = m2[1]-49;
    char ch1 = m1[0], ch2 = m1[1];
    int visited[50][50], level[50][50];

    memset(visited, 0, sizeof(visited));
    visited[x][y] = 1;
    level[x][y] = 0;

    queue< pii > bq;
    bq.push(pii(x, y));

    while(!bq.empty())
    {
        pii top = bq.front();
        bq.pop();

        if(top.first == p && top.second == q)
        {
            break;
        }

        for(int i = 0; i < 8; i++)
        {
            x = top.first + fx[i];
            y = top.second + fy[i];

            if(visited[x][y] == 0 && x >= 0 && x < 8 && y >= 0 && y < 8)
            {
                visited[x][y] = 1;
                level[x][y] = level[top.first][top.second] + 1;
                bq.push(pii(x, y));
            }
        }
    }

    printf("To get from %c%c to %s takes %d knight moves.\n", ch1, ch2, m2, level[p][q]);
}

int main()
{
    while(scanf("%s %s", m1, m2) == 2)
    {
        getchar();
        bfs();
    }

    return 0;
}
