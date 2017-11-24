#include<stdio.h>
int main()
{
    int i, t, n, m, num;

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d%d", &n, &m);

        num = ((n/3)*(m/3));

        printf("%d\n", num);
    }

    return 0;
}
