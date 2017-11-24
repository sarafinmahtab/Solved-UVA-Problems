#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, m;
    char s[205];
    string str;
    map <char, int> mp;
    map <char, int> :: iterator it;

    cin >> n;

    getchar();
    while(gets(s))
    {
        for(i = 0; i < strlen(s); i++)
        {
            if((s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a'))
            {
                str += s[i];
            }
        }

        for(i = 0; i < str.size(); i++)
        {
            if(mp.count(str[i]) == 0)
            {
                mp[str[i]] = 1;
            }
            else
            {
                mp[str[i]]++;
            }
        }

        m = -1;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second > m)
            {
                m = it->second;
            }
        }

        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second == m)
            {
                cout << it->first;
            }
        }
        cout << " " << m << endl;
        str.clear();
        mp.clear();
    }

    return 0;
}
