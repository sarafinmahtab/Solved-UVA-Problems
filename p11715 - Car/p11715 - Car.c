#include<stdio.h>
#include<math.h>
int main()
{
    int i = 0;
    double n, u, v, s, t, a, pv, pu;

    while(scanf("%lf", &n) != EOF)
    {
        i++;

        if(n == 0)
        {
            break;
        }
        else if(n == 1)
        {
            scanf("%lf%lf%lf", &u, &v, &t);

            a = (v - u) / t;
            s = u * t + 0.5 * a * t * t;

            printf("Case %d: %.3lf %.3lf\n", i, s, a);
        }
        else if(n == 2)
        {
            scanf("%lf%lf%lf", &u, &v, &a);

            t = (v - u) / a;
            s = u * t + 0.5 * a * t * t;

            printf("Case %d: %.3lf %.3lf\n", i, s, t);
        }
        else if(n == 3)
        {
            scanf("%lf%lf%lf", &u, &a, &s);

            pv = u * u + 2 * a * s;
            v = pow(pv, 0.5);
            t = (v - u) / a;

            printf("Case %d: %.3lf %.3lf\n", i, v, t);
        }
        else if(n == 4)
        {
            scanf("%lf%lf%lf", &v, &a, &s);

            pu = v * v - 2 * a * s;
            u = pow(pu, 0.5);
            t = (v - u) / a;

            printf("Case %d: %.3lf %.3lf\n", i, u, t);
        }
    }
    return 0;
}
