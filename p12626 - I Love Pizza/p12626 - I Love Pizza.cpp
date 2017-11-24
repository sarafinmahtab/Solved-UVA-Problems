#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, j, len, m, a, r, g, i, t, cnt;
    string str;

    cin >> test;
    while(test--)
    {
        m = a = r = g = i = t = cnt = 0;
        cin >> str;
        len= str.size();

        for(j = 0; j < len; j++)
        {
            if(str[j] == 'M')
            {
                m++;
            }

            if(str[j] == 'A')
            {
                a++;
            }

            if(str[j] == 'R')
            {
                r++;
            }

            if(str[j] == 'G')
            {
                g++;
            }

            if(str[j] == 'I')
            {
                i++;
            }

            if(str[j] == 'T')
            {
                t++;
            }

            if(m >= 1 && a >= 3 && r >= 2 && g >= 1 && i >= 1 && t >= 1)
            {
                cnt++;
                m = m - 1;
                a = a - 3;
                r = r - 2;
                g = g - 1;
                i = i - 1;
                t = t - 1;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}
