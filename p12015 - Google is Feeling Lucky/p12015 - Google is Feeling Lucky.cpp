#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int>mp;
    map<string, int>::iterator it;
    int i, j, k, test, r, ma;
    string str, sub[15];

    cin >> test;
    for(i = 1; i <= test; i++)
    {
        ma = -1;
        k = 0;
        for(j = 0; j < 10; j++)
        {
            cin >> str >> r;

            if(r > ma)
            {
                ma = r;
            }
            mp[str] = r;
            sub[k++] = str;
        }

        printf("Case #%d:\n", i);
        for(j = 0; j < 10; j++)
        {
            if(mp[sub[j]] == ma)
            {
                cout << sub[j] << endl;
            }
        }
    }

    return 0;
}
