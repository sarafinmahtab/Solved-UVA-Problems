#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1, num2, count = 0;
    char sign, ans[1000];

    while(scanf("%d%c%d=%s", &num1, &sign, &num2, ans) != EOF)
    {
        if((sign == '+') && ((num1+num2) == atoi(ans)))
        {
            count++;
        }
        else if((sign == '-') && ((num1-num2) == atoi(ans)))
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
