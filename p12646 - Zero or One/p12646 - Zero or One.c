#include<stdio.h>
int main()
{
    int a, b, c;

    while(scanf("%d%d%d", &a, &b, &c) != EOF)
    {
        if((a == b) && (a != c))
        {
            printf("C\n");
        }
        else if((b == c) && (b != a))
        {
            printf("A\n");
        }
        else if((a == c) && (a != b))
        {
            printf("B\n");
        }
        else
        {
            printf("*\n");
        }
    }
    return 0;
}
