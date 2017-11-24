#include<bits/stdc++.h>
using namespace std;
int bin(int n)
{
    int s, c = 0;
    while(n > 0)
    {
        s = n % 2;
        n = n / 2;

        if(s == 1)
            c++;
    }
    return c;
}
int hex(int n)
{
    int s, c = 0;
    while(n > 0)
    {
        s = n % 10;
        n = n / 10;

        if(s == 0)
            c += 0;
        else if((s == 1)|| (s == 2)||(s == 4)|| (s == 8))
            c += 1;
        else if((s == 3) || (s == 5)||(s == 6) ||(s == 9))
            c += 2;
        else if(s == 7)
            c += 3;
    }
    return c;
}
int main()
{
    int num, test, i;

    scanf("%d", &test);

    for(i = 0; i < test; i++)
    {
        scanf("%d", &num);

        int cnt1 = bin(num);
        int cnt2 = hex(num);

        printf("%d %d\n", cnt1, cnt2);
    }
    return 0;
}
