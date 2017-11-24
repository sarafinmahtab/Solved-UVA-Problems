#include<cstring>
#include<algorithm>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    long long i, j, len1, len2, m;
    string str1, str2;

    while(getline(cin, str1))
    {
        getline(cin, str2);

        len1 = str1.size();
        len2 = str2.size();

        long long grid[len1+2][len2+2];

        for(i = 0; i <= len1; i++)
        {
            for(j = 0; j <= len2; j++)
            {
                if(i == 0 || j == 0)
                {
                    grid[i][j] = 0;
                    continue;
                }

                if(str1[i-1] == str2[j-1])
                {
                    grid[i][j] = grid[i-1][j-1] + 1;
                }
                else
                {
                    grid[i][j] = max(grid[i-1][j], grid[i][j-1]);
                }
            }
        }

        cout << grid[len1][len2] << endl;
    }

    return 0;
}
