#include<stdio.h>
int main()
{
    int T, i;
    double R, wid, len, left, right, mid;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%lf", &R);

        len = R * 5;
        wid = len * 0.6;
        left = len * 0.45;
        right = len * 0.55;
        mid = wid * 0.5;

        printf("Case %d:\n-%.0lf %.0lf\n%.0lf %.0lf\n%.0lf -%.0lf\n-%.0lf -%.0lf\n", i, left, mid, right, mid, right, mid, left, mid);
    }

    return 0;
}
