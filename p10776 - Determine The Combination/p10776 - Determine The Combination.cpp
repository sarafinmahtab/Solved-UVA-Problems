#include<bits/stdc++.h>
using namespace std;
string str;
int taken[50] = {0};
vector<char>v;
int len, m;
void call(int pos)
{
    int i, j;

    if(v.size() == m)
    {
        for(j = 0; j < m; j++)
        {
            printf("%c", v[j]);
        }
        printf("\n");
        return;
    }

    for(i = pos; i < len; )
    {
        char ch = str[i];
        v.push_back(str[i]);
        call(i+1);
        v.pop_back();

        while(str[i] == ch)
        {
            i++;
        }
    }
}
int main()
{
    while(cin >> str >> m)
    {
        len = str.size();

        sort(str.begin(), str.end());
        call(0);
    }

    return 0;
}
