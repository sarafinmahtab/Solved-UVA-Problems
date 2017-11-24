#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, k, sum1, sum2, rem1, rem2, digit1, digit2;
    float temp1, temp2, percent;
    char boy[40], girl[40];

    while(scanf("%s%s", boy, girl) == 2)
    {
        strupr(boy);
        strupr(girl);
        digit1 = 0;
        sum1 = 0;
        digit2 = 0;
        sum2 = 0;

        for(j = 0; j < strlen(boy); j++)
        {
            sum1 = sum1 + boy[j] - 64;
        }

        for(k = 0; k < strlen(girl); k++)
        {
            sum2 = sum2 + girl[k] - 64;
        }

        while(sum1 > 0)
        {
            rem1 = sum1 % 10;
            digit1 = digit1 + rem1;
            sum1 = sum1 / 10;

            if((digit1 > 9) && (sum1 == 0))
            {
                sum1 = digit1;
                digit1 = 0;
            }
        }

        while(sum2 > 0)
        {
            rem2 = sum2 % 10;
            digit2 = digit2 + rem2;
            sum2 = sum2 / 10;

            if((digit2 > 9) && (sum2 == 0))
            {
                sum2 = digit2;
                digit2 = 0;
            }
        }

        temp1 = (float)digit1;
        temp2 = (float)digit2;

        if(temp1 < temp2)
        {
            percent = (temp1/temp2)*100;
            printf("%.2f %%\n", percent);
        }
        else
        {
            percent = (temp2/temp1)*100;
            printf("%.2f %%\n", percent);
        }
    }
    return 0;
}
