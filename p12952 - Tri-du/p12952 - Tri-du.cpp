#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;

    while(scanf("%d %d", &a, &b) == 2)
    {
        if(a >= b)
        {
            c = a;
        }
        else
        {
            c = b;
        }

        printf("%d\n", c);
    }

    return 0;
}
