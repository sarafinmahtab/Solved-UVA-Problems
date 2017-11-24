#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num, n1, n2, temp, i;

    while(scanf("%lld", &num) == 1)
    {
        if(num == 0)
        {
            break;
        }

        n1 = 0;
        n2 = 1;
        temp = num;
        for(i = 0; i < num; i++)
        {
            temp = n1 + n2;
            n1 = n2;
            n2 = temp;
        }

        printf("%lld\n", n2);
    }

    return 0;
}
