#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len1, len2, len, d, i, j, k, l, m, carry, sum;
    string str1, str3, str4;
    string add = "0";

    while(cin>>str1)
    {
        if(str1 == "0")
            break;

        len1 = str1.size();
        len2 = add.size();
        carry = 0;

        if(len1 < len2)
        {
            k = 0;
            d = len2 - len1;
            len = len2;
            for(i = 0; i < d; i++)
            {
                str4[i] = 48;
            }
            k = d;
            for(i = 0; i < len1; i++)
            {
                str4[k++] = str1[i];
            }
        }
        else if(len1 > len2)
        {
            l = 0;
            d = len1 - len2;
            len = len1;
            for(j = 0; j < d; j++)
            {
                str4[j] = 48;
            }
            l = d;
            for(j = 0; j < len2; j++)
            {
                str4[l++] = add[j];
            }
        }
        else
        {
            len = len1;
            str4 = add;
        }

        m = 0;

        for(i = len-1; i >= 0; i--)
        {
            sum = str1[i] + str4[i] + carry - 96;
            str3[m++] = sum + 48;
            carry = sum / 10;
        }
        add = str3;
    }

    for(m = len-1; m >= 0; m--)
    {
        printf("%c", add[m]);
    }
    printf("\n");

    return 0;
}
