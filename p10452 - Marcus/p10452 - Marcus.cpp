#include<bits/stdc++.h>
using namespace std;
char grid[10][10];
int m, n, arr[20];
char str[] = {'I', 'E', 'H', 'O', 'V', 'A', '#'};
vector <string> v;

bool valid(int x, int y)
{
    if(x >= 0 && x < m && y >= 0 && y < n)
    {
        return true;
    }
    return false;
}

void dfs(int i, int j, int k)
{
    if(valid(i, j+1) && (grid[i][j+1] == str[k]))
    {
        v.push_back("right");
        dfs(i, j+1, k+1);
    }

    if(valid(i, j-1) && (grid[i][j-1] == str[k]))
    {
        v.push_back("left");
        dfs(i, j-1, k+1);
    }

    if(valid(i-1, j) && (grid[i-1][j] == str[k]))
    {
        v.push_back("forth");
        dfs(i-1, j, k+1);
    }

}

int main()
{
    int test, p, q;

    cin >> test;

    for(p = 0; p < test; p++)
    {
        cin >> m >> n;

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
            }
        }

        for(int q = 0; q < n; q++)
        {
            if(grid[m-1][q] == '@')
            {
                dfs(m-1, q, 0);
                break;
            }
        }

        for(int q =0; q < v.size()-1; q++)
        {
            cout << v[q] << " ";
        }
        cout << v[v.size()-1] << endl;

        v.clear();
    }

    return 0;
}
