#include<stdio.h>
int main()
{
    int i, T, x, y, z, amount;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%d%d%d", &x, &y, &z);

        amount = (x + (x - y)) * z / (x + y);

        printf("%d\n", amount);
    }

    return 0;
}
