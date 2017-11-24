#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long j, test, num, row;

    scanf("%lld", &test);
    for(j = 0; j < test; j++)
    {
        scanf("%lld", &num);

        row = (long long)(-1 + (double)sqrt(1+8*num))/2;

        printf("%lld\n", row);
    }
    return 0;
}
