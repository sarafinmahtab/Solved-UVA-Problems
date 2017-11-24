#include<bits/stdc++.h>
using namespace std;
int arr[1000100];
int main()
{
    int i, j, n;
    char ch;
    map <int, int> mp;
    map <int, int> :: iterator it;
    j = 0;
    while(scanf("%d%c", &n, &ch) == 2)
    {
        if(mp.count(n) == 0)
        {
            mp[n] = 1;
            arr[j++] = n;
        }
        else
        {
            mp[n] = mp[n] + 1;
        }

        if(ch == '\n')
            break;
    }

    for(i = 0; i < j; i++)
    {
        cout << arr[i] << " " << mp[arr[i]] << endl;
    }

    return 0;
}
