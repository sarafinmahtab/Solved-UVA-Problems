#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()
{
    double a, b, c, m, s, A, circle, r, sun, vio, ros;

    while(scanf("%lf%lf%lf", &a, &b, &c) != EOF)
    {
        s = (a+b+c) / 2;
        A = sqrt(s * (s - a) * (s - b) * (s -c));
        r = A / s;

        m = (a*b*c)/sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));

        circle = pi * m * m;
        ros = pi * r * r;
        vio = A - ros;
        sun = circle - (ros + vio);

        printf("%.4lf %.4lf %.4lf\n", sun, vio, ros);
    }
    return 0;
}
