#include<bits/stdc++.h>
using namespace std;
string sub[100000];
string str;
int k;
bool isPalindrome(string p)
{
    int i, j = 0;

    str = p;
    reverse(p.begin(), p.end());

    if(str == p)
        return true;
    else
        return false;
}
int main()
{
    string s, temp;
    int i, j, len, cnt, sum;

    while(getline(cin, s, '\n'))
    {
        k = 0;
        len = s.size();
        for(i = 1; i <= len; i++)
        {
            for(j = 0; j < len; j++)
            {
                temp = s.substr(j, i);
                if(temp.size() != i)
                {
                    break;
                }
                else if(isPalindrome(temp))
                {
                    sub[k++] = temp;
                    cnt++;
                }
            }
        }

        cnt = 0;
        sum = 0;
        for(i = 0; i < k; i++)
        {
            for(j = i; j < k; j++)
            {
                if(sub[i] == sub[j])
                {
                    cnt++;
                }

            }
            if(cnt == 1)
            {
                sum++;
            }
            cnt = 0;
        }

        cout << "The string '" << str << "' contains " << sum << " palindromes." << endl;
    }

    return 0;
}
