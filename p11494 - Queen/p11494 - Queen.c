#include<stdio.h>
int main()
{
    int X1, Y1, X2, Y2;

    while(scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2) != EOF)
    {
        if((X1 == 0) && (X2 == 0) && (Y1 == 0) && (Y2 == 0))
        {
            break;
        }
        else if((X1 == X2) && (Y1 == Y2))
        {
            printf("0\n");
        }
        else if((X1 - X2) == (Y1 - Y2))
        {
            printf("1\n");
        }
        else if((X1 + Y1) == (X2 + Y2))
        {
            printf("1\n");
        }
        else if((X1 == X2) || (Y1 == Y2))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }

    return 0;
}
