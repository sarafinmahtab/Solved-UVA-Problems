#include<stdio.h>
int main()
{
    int num, i, num1, num2, next;

    while(scanf("%d", &num) == 1)
    {
        if(num == 0)
            break;

        num1 = 0, num2 = 1;
        for(i = 1; i <= num; i++)
        {
            next = num1 + num2;
            num1 = num2;
            num2 = next;
        }

        printf("%d\n", next);
    }

    return 0;
}
