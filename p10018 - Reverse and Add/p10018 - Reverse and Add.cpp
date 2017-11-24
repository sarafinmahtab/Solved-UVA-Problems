#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i, num, temp, rev, mod, cnt, temp2, rev2, mod2;

    scanf("%lli", &n);
    for(i = 0; i < n; i++)
    {
        rev2 = 0;
        cnt = 0;
        scanf("%lli", &num);

        while(num != rev2)
        {
            temp = num;
            rev = 0;
            while(temp > 0)
            {
                mod = temp % 10;
                rev = rev*10 + mod;
                temp = temp / 10;
            }
            num = num + rev;
            temp2 = num;
            rev2 = 0;
            cnt++;
            while(temp2 > 0)
            {
                mod2 = temp2%10;
                rev2 = rev2*10 + mod2;
                temp2 = temp2 / 10;
            }
        }
        printf("%lli %lli\n", cnt, num);
    }
    return 0;
}
