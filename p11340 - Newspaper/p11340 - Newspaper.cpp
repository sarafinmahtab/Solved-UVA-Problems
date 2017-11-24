#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, k, m, i, j, price;
    double payment;
    char ch, str[10010];
    map <char, int> mp;
    map <char, int> :: iterator it;

    cin >> test;
    while(test--)
    {
        cin >> k;

        for(j = 0; j < k; j++)
        {
            cin >> ch >> price;

            mp[ch] = price;
        }

        int cnt, sum = 0;
        cin >> m;
        getchar();
        while(m--)
        {
            gets(str);

            for(it = mp.begin(); it != mp.end(); it++)
            {
                cnt = 0;
                for(i = 0; i < strlen(str); i++)
                {
                    if(str[i] == it->first)
                    {
                        cnt++;
                    }
                }
                sum = sum + it->second*cnt;
            }
        }

        payment = (double)sum / 100;
        printf("%.2lf$\n", payment);
        mp.clear();
    }

    return 0;
}
