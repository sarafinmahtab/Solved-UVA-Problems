#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, cs, s, e, k, i, j, u = 0;
    string str;

    while(cin >> str)
    {
        printf("Case %d:\n", ++u);

        cin >> test;

        for(cs = 0; cs < test; cs++)
        {
            int lag = 0;
            cin >> i >> j;
            s = min(i, j);
            e = max(i, j);

            for(k = s; k < e; k++)
            {
                if((str[k] == '0' && str[k+1] == '1') || (str[k] == '1' && str[k+1] == '0'))
                {
                    lag = 1;
                    break;
                }
            }

            if(lag == 1)
            {
                cout << "No" << endl;
            }
            else if(lag == 0)
            {
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}
