#include<stdio.h>
int main()
{
    int a, b, c;
    long long int a2, b2, c2;

    while(scanf("%d%d%d", &a, &b, &c) != EOF)
    {
        a2 = a * a;
        b2 = b * b;
        c2 = c * c;
        if((a == 0) && (b == 0) && (c == 0))
        {
            break;
        }
        else if((a2 == (b2 + c2)) || (b2 == (a2 + c2)) || (c2 == (a2 + b2)))
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
