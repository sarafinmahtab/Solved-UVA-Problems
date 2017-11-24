#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b, p, m, mod;

    while(scanf("%d\n%d\n%d", &b, &p, &m) != EOF)
    {
        mod = 1;
        b = b%m;

        while(p)
        {
            if(p & 1)
            {
                mod = (b*mod)%m;
            }

            b = (b*b)%m;
            p >>= 1;
        }

        printf("%d\n", mod);
    }

    return 0;
}
