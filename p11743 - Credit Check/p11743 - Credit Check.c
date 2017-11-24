#include<stdio.h>
#include<string.h>
int main()
{
    char num1[100], num2[100], num3[100], num4[100];
    int i, test, temp, sum, j, temp1, sum1;

    scanf("%d", &test);

    for(i = 0; i < test; i++)
    {
        sum = 0;
        sum1 = 0;
        scanf("%s %s %s %s", num1, num2, num3, num4);

        for(j = 0; j < strlen(num1); j++)
        {
            if(j%2 == 0)
            {
                temp = (num1[j] - 48);
                temp = 2 * temp;

                while(temp > 0)
                {
                    sum = sum + (temp%10);
                    temp = temp / 10;
                }
            }
            else
            {
                temp1 = (num1[j] - 48);
                sum1 = sum1 + temp1;
            }
        }

        for(j = 0; j < strlen(num2); j++)
        {
            if(j%2 == 0)
            {
                temp = (num2[j] - 48);
                temp = 2 * temp;

                while(temp > 0)
                {
                    sum = sum + (temp%10);
                    temp = temp / 10;
                }
            }
            else
            {
                temp1 = (num2[j] - 48);
                sum1 = sum1 + temp1;
            }
        }

        for(j = 0; j < strlen(num3); j++)
        {
            if(j%2 == 0)
            {
                temp = (num3[j] - 48);
                temp = 2 * temp;

                while(temp > 0)
                {
                    sum = sum + (temp%10);
                    temp = temp / 10;
                }
            }
            else
            {
                temp1 = (num3[j] - 48);
                sum1 = sum1 + temp1;
            }
        }

        for(j = 0; j < strlen(num4); j++)
        {
            if(j%2 == 0)
            {
                temp = (num4[j] - 48);
                temp = 2 * temp;

                while(temp > 0)
                {
                    sum = sum + (temp%10);
                    temp = temp / 10;
                }
            }
            else
            {
                temp1 = (num4[j] - 48);
                sum1 = sum1 + temp1;
            }
        }
        sum = sum + sum1;
        if(sum%10 == 0)
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    return 0;
}
