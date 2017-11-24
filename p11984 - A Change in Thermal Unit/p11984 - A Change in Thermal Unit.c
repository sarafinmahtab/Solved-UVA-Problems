#include<stdio.h>
int main()
{
    int i, T;
    float C, F, d;

    scanf("%d", &T);

    for(i = 0; i < T; i++)
    {
        F = 0;
        scanf("%f %f", &C, &d);

        F = 1.8 * C + 32;
        F = F +d;
        C = 5 * (F - 32) / 9;

        printf("Case %d: %.2f\n", i+1, C);
    }

    return 0;
}
