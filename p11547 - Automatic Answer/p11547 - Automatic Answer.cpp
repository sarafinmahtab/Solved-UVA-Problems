#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test, num, mod, cnt, temp;

    scanf("%lld", &test);

    while(test--)
    {
        scanf("%lld", &num);

        num = num * 567;
        num = num / 9;
        num = num + 7492;
        num = num * 235;
        num = num / 47;
        num = num - 498;

        temp = num;
        cnt = 0;

        while(cnt != 2)
        {
            mod = temp % 10;
            temp = temp / 10;
            cnt++;
        }

        printf("%lld\n", abs(mod));
    }
    return 0;
}
