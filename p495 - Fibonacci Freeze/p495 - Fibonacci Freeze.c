#include<stdio.h>
#include<string.h>
char next(char x[1000])
{
    int i;

    x[0] = '0';
    x[1] = '1';

    for(i = 2; i <= 1000; i++)
        return (x[i-1] + x[i-2] - 96);
}
int main()
{
    int n, i = 0;
    char n[1000];

    while(scanf("%d", &n[i]) != EOF)
    {
        char n[i] = next();
        printf("The Fibonacci number for %c is %d\n", n, num2);
    }

    return 0;
}
