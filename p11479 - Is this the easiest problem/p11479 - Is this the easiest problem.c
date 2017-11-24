#include<stdio.h>
int main()
{
    long int a, b, c;
    int x, t;

    scanf("%d", &t);

    for(x = 1; x <= t; x++)
    {
        scanf("%ld %ld %ld", &a, &b, &c);

        if((a+b <= c) || (b+c <= a) || (c+a <= b))
        {
            printf("Case %d: Invalid\n", x);
        }
        else if(a <= 0 || b <= 0 || c <= 0)
        {
            printf("Case %d: Invalid\n", x);
        }
        else if((a == b) && (b == c))
        {
            printf("Case %d: Equilateral\n", x);
        }
        else if((a == b) || (b == c) || (c == a))
        {
            printf("Case %d: Isosceles\n", x);
        }
        else if((a+b > c) || (b+c > a) || (c+a > b))
        {
            printf("Case %d: Scalene\n", x);
        }
    }
}
