#include<bits/stdc++.h>
using namespace std;
int m, n;
bool check(int x, int y)
{
    if((x >= 0 && x < n) && (y >= 0 && y < m)) return true;
    return false;
}
int main()
{
    int i, j, k;
    char p;
    char v[105][105];

    k = 0;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(n == 0 && m == 0)
            break;
        k++;
        if(k != 1)
            printf("\n");

        for(i = 0; i < n; i++)
        {
            getchar();
            for(j = 0; j < m; j++)
            {
                scanf("%c", &v[i][j]);

                if(v[i][j] == '.')
                    v[i][j] = '0';
            }
        }

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(v[i][j] == '*')
                {
                    if((v[i-1][j-1] != '*') && check(i-1, j-1))
                        v[i-1][j-1]++;
                    if((v[i-1][j] != '*') && check(i-1, j))
                        v[i-1][j]++;
                    if((v[i-1][j+1] != '*') && check(i-1, j+1))
                        v[i-1][j+1]++;
                    if((v[i][j-1] != '*') && check(i, j-1))
                        v[i][j-1]++;
                    if((v[i][j+1] != '*') && check(i, j+1))
                        v[i][j+1]++;
                    if((v[i+1][j-1] != '*') && check(i+1, j-1))
                        v[i+1][j-1]++;
                    if((v[i+1][j] != '*') && check(i+1, j))
                        v[i+1][j]++;
                    if((v[i+1][j+1] != '*') && check(i+1, j+1))
                        v[i+1][j+1]++;
                }
            }
        }

        printf("Field #%d:\n", k);

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                printf("%c", v[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
