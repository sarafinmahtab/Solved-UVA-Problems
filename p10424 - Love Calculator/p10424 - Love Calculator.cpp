#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int j, k, sum1, sum2, rem1, rem2, digit1, digit2;
    float temp1, temp2, percent;
    char boy[100], girl[100];

    while(scanf("%[^\n]%*c %[^\n]%*c", boy, girl) == 2)
    {
        digit1 = 0;
        sum1 = 0;
        digit2 = 0;
        sum2 = 0;

        for(j = 0; j < strlen(boy); j++)
        {
            if((boy[j] <= 122) && (boy[j] >= 97))
            {
                boy[j] = boy[j] - 96;
                sum1 = sum1 + boy[j];
            }
            else if((boy[j] <= 90) && (boy[j] >= 65))
            {
                boy[j] = boy[j] - 64;
                sum1 = sum1 + boy[j];
            }
            else
            {
                boy[j] = 64;
                sum1 = sum1 + boy[j] - 64;
            }
        }

        for(k = 0; k < strlen(girl); k++)
        {
            if((girl[k] <= 122) && (girl[k] >= 97))
            {
                girl[k] = girl[k] - 96;
                sum2 = sum2 + girl[k];
            }
            else if((girl[k] <= 90) && (girl[k] >= 65))
            {
                girl[k] = girl[k] - 64;
                sum2 = sum2 + girl[k];
            }
            else
            {
                girl[k] = 64;
                sum2 = sum2 + girl[k] - 64;
            }
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

        temp1 = digit1;
        temp2 = digit2;

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
