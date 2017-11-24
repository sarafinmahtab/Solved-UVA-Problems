#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    double n, k, m;

    while(scanf("%lf%lf", &n, &k) != EOF)
    {
        m = 0;
        while(n != 0)
        {
            m = m + n;
            n = round(n/k);
        }

        printf("%.0lf\n", m);
    }

    return 0;
}
