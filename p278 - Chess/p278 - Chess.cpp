#include<bits/stdc++.h>
using namespace std;
int total, row, colm;
int main()
{
    int test, i, j, k, ans;
    char ch;

    cin >> test;

    for(k = 0; k < test; k++)
    {
        cin >> ch >> row >> colm;

        total = 0;

        if(ch == 'r' || ch == 'Q')
        {
            cout << min(row, colm) << endl;
        }
        else if(ch == 'k')
        {
            cout << (row*colm)/2 + (row*colm)%2 << endl;
        }
        else if(ch == 'K')
        {
            cout << ((row+1)/2)*((colm+1)/2) << endl;
        }
    }

    return 0;
}
