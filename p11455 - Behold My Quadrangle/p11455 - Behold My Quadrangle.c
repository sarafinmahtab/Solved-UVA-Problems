#include<stdio.h>
int main()
{
    long int i, t, a, b, c, d;

    scanf("%li", &t);

    for(i = 0; i < t; i++)
    {
        scanf("%li%li%li%li", &a, &b, &c, &d);

        if((a == b) && (b == c) && (c == d) && (d == a))
        {
            printf("square\n");
        }
        else if(((a == c) && (b == d)) || ((a == b) && (c == d)) || ((a == d) && (b == c)))
        {
            printf("rectangle\n");
        }
        else if(((b+c+d) <= a) || ((a+c+d) <= b) || ((a+b+d) <= c) || ((a+b+c) <= d))
        {
            printf("banana\n");
        }
        else if(((b+c+d) > a) || ((a+c+d) > b) || ((a+b+d) > c) || ((a+b+c) > d))
        {
            printf("quadrangle\n");
        }
    }

    return 0;
}
