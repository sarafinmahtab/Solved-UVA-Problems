#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, s, area2, area;

    while(scanf("%lf%lf%lf", &a, &b, &c) != EOF)
    {
        area = 0;

        s = (a+b+c) / 2;

        area2 = s * (s - a) * (s - b) * (s - c);

        if((area2 <= 0) || (a <= 0) || (b <= 0) || (c <= 0))
        {
            area = -1;
            printf("%.3lf\n", area);
        }
        else
        {
            area = pow(area2, 0.5);
            area = 4 * area / 3;

            printf("%.3lf\n", area);
        }
    }
    return 0;
}
