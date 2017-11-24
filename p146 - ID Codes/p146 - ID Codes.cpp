#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str, str2, str3;
    int i, len, lag;

    while(cin >> str)
    {
        lag = 0;
        str3 = str;

        if(str[0] == '#')
            break;

        len = str.size();

        for(i = 0; i < len-1; i++)
        {
            if(str[i] < str[i+1])
            {
                lag = 1;
            }
        }

        if(lag == 1)
        {
            next_permutation(str.begin(), str.end());
            cout << str << endl;
        }
        else
        {
            cout << "No Successor" << endl;
        }
    }

    return 0;
}
