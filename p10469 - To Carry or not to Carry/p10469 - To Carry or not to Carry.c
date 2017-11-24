#include<stdio.h>
int main()
{
    unsigned long a, b;

    while(scanf("%lu %lu", &a, &b) == 2)
    {
        a = a ^ b;
        printf("%lu\n", a);
    }

    return 0;
}
