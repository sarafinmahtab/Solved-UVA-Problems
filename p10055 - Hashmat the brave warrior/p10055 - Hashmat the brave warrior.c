#include<stdio.h>
int main()
{
    long int a, b;

    while(scanf("%li%li", &a, &b) != EOF)
    {
        if(a > b)
        {
            printf("%li\n", a-b);
        }
        else
        {
            printf("%li\n", b-a);
        }
    }

    return 0;
}
