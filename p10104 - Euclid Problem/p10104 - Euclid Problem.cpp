#include<bits/stdc++.h>
using namespace std;
long x, y, d;
void extendedeuclid(long a, long b)
{
    long x1, y1;
    if(b == 0)
    {
        x = 1;
        y = 0;
        d = a;
        return;
    }
    extendedeuclid(b, a%b);

    x1 = y;
    y1 = x - (a / b) * y;

    x = x1;
    y = y1;
}
int main()
{
    long p, q;
    while(scanf("%ld %ld", &p, &q) == 2)
    {
        extendedeuclid(p, q);
        printf("%ld %ld %ld\n", x, y, d);
    }

    return 0;
}
