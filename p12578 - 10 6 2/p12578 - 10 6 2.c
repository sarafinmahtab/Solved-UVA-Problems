#include<stdio.h>
int main()
{
    int i, T;
    double length, width, radius, red, green, pi = 3.141592654;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%lf", &length);

        width = length * 0.6;
        radius = length * 0.2;

        red = pi * radius * radius;
        green = (length * width) - red;

        printf("%.2lf %.2lf\n", red, green);
    }

    return 0;
}
