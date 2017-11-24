#include<cstdio>
using namespace std;
int main()
{
    long long num, num3, half, sum;

    while(scanf("%lld", &num) == 1)
    {
        if(num%2 == 1)
        {
            half = (num+1)/2;
        }
        else
        {
            half = num / 2;
        }

        num3 = num * half + half - 1;
        sum = 3 * num3 - 6;
        printf("%lld\n", sum);
    }

    return 0;
}
