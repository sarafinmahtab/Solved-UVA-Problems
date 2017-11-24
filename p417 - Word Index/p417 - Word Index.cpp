#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string, int> mp;
    string str;
    char a, b, i, j, k, l, m;
    int n = 1;

    for(i = 'a'; i <= 'z'; i++)
    {
        str += i;
        mp[str] = n++;
        str.clear();
    }

    for(i = 'a'; i <= 'z'; i++)
    {
        for(j = i+1; j <= 'z'; j++)
        {
            if(i < j)
            {
                str += i;
                str += j;
                mp[str] = n++;
                str.clear();
            }
        }
    }

    for(i = 'a'; i <= 'z'; i++)
    {
        for(j = i+1; j <= 'z' ; j++)
        {
            for(k = i+2; k <= 'z'; k++)
            {
                if(i < j && j < k)
                {
                    str += i;
                    str += j;
                    str += k;
                    mp[str] = n++;
                    str.clear();
                }
            }
        }
    }

    for(i = 'a'; i <= 'z'; i++)
    {
        for(j = i+1; j <= 'z' ; j++)
        {
            for(k = i+2; k <= 'z'; k++)
            {
                for(l = i+3; l <= 'z'; l++)
                {
                    if(i < j && j < k && k < l)
                    {
                        str += i;
                        str += j;
                        str += k;
                        str += l;
                        mp[str] = n++;
                        str.clear();
                    }
                }
            }
        }
    }

    for(i = 'a'; i <= 'z'; i++)
    {
        for(j = i+1; j <= 'z' ; j++)
        {
            for(k = i+2; k <= 'z'; k++)
            {
                for(l = i+3; l <= 'z'; l++)
                {
                    for(m = i+4; m <= 'z'; m++)
                    {
                        if(i < j && j < k && k < l && l < m)
                        {
                            str += i;
                            str += j;
                            str += k;
                            str += l;
                            str += m;
                            mp[str] = n++;
                            str.clear();
                        }
                    }
                }
            }
        }
    }

    while(cin >> str)
    {
        if(mp[str] > 0)
        {
            cout << mp[str] << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}
