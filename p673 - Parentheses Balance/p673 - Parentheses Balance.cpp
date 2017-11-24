#include<bits/stdc++.h>
using namespace std;
bool two(char open, char close)
{
    if(open == '(' && close == ')') return true;
    else if(open == '[' && close == ']') return true;
    else return false;
}
bool balance(string a)
{
    stack < char > st;
    for(int j = 0; j < a.size(); j++)
    {
        if(a[j] == '(' || a[j] == '[')
        {
            st.push(a[j]);
        }
        else if(a[j] == ')' || a[j] == ']')
        {
            if(st.empty() || !two(st.top(), a[j]))
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    return st.empty() ? true : false;
}
int main()
{
    char str[200];
    int i, j, n;

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        gets(str);

        if(balance(str))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
