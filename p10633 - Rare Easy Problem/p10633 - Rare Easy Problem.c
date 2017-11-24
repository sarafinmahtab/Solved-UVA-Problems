#include<stdio.h>
int main()
{
    long long num, i, num1, num2, temp;

    while(scanf("%lld", &num) == 1 && num != 0)
    {
        num1 = num + (num / 9);
        num2 = num1 - 1;

        temp = num2 - (num2 / 10);

        if(temp == num)
        {
            printf("%lld %lld\n", num2, num1);
        }
        else
        {
            printf("%lld\n", num1);
        }
    }

    return 0;
}
