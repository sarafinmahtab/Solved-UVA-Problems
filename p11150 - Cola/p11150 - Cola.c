#include<stdio.h>
int main()
{
    int num, max;

    while(scanf("%d", &num) != EOF)
    {
        max = num + (num / 2);

        printf("%d\n", max);
    }

    return 0;
}
