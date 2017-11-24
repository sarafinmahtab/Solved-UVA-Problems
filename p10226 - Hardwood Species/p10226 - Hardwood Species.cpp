#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, m, total;
    double p;
    map <string, int> mp;
    map <string, int> :: iterator it;
    char str[35];

    scanf("%d\n\n", &n);
    while(n--)
    {
        total = 0;
        while(gets(str))
        {
            if(strlen(str) == 0)
            {
                break;
            }

            if(mp.count(string(str)) == 0)
            {
                mp[string(str)] = 1;
            }
            else
            {
                mp[string(str)] = mp[string(str)] + 1;
            }

            total++;
        }

        for(it = mp.begin(); it != mp.end(); it++)
        {
            p = (double)it->second;
            p = (double) p*100 / total;
            cout << it->first << " ";
            printf("%.4lf\n", p);
        }

        if(n > 0)
        {
            printf("\n");
            mp.clear();
        }
    }

    return 0;
}
