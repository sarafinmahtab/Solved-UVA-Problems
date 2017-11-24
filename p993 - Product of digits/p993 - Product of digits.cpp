#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, num, k, p, lag;
    stack <int> st;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> num;
        lag = 0;
        for(j = num/2; j >= 2; j--)
        {
            if(num%j == 0 && j <= 9 && num/j <= 9)
            {
                lag = 1;
                st.push(j);
                st.push(num/j);
                break;
            }
        }

        if(num < 10)
        {
            cout << num << endl;
        }
        else if(lag == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            while(!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            cout << endl;
        }
        while(!st.empty())
        {
            st.pop();
        }
    }

    return 0;
}
