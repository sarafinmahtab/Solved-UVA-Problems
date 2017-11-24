#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846

int main()
{
    double r, n, sinvalue, area, i, value;

    while(scanf("%lf%lf", &r, &n) != EOF)
    {
        i = 360 / n;

        value = M_PI / 180;

        sinvalue = sin(i * value);

        area = 0.5 * n * r * r * sinvalue;

        printf("%.3lf\n", area);
    }
    return 0;
}
