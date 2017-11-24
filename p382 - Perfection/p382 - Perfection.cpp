#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, num, sum, temp, digit;

    printf("PERFECTION OUTPUT\n");

    while(scanf("%d", &num) == 1)
    {
        if(num == 0)
        {
            printf("END OF OUTPUT\n");
            break;
        }

        sum = 0;
        digit = 0;
        temp = num;
        while(temp > 0)
        {
            digit++;
            temp = temp / 10;
        }

        for(i = 1; i < num; i++)
        {
            if(num%i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum < num)
        {
            if(digit == 1)
            {
                printf("    %d  DEFICIENT\n", num);
            }
            else if(digit == 2)
            {
                printf("   %d  DEFICIENT\n", num);
            }
            else if(digit == 3)
            {
                printf("  %d  DEFICIENT\n", num);
            }
            else if(digit == 4)
            {
                printf(" %d  DEFICIENT\n", num);
            }
            else
            {
                printf("%d  DEFICIENT\n", num);
            }
        }
        else if(sum > num)
        {
            if(digit == 1)
            {
                printf("    %d  ABUNDANT\n", num);
            }
            else if(digit == 2)
            {
                printf("   %d  ABUNDANT\n", num);
            }
            else if(digit == 3)
            {
                printf("  %d  ABUNDANT\n", num);
            }
            else if(digit == 4)
            {
                printf(" %d  ABUNDANT\n", num);
            }
            else
            {
                printf("%d  ABUNDANT\n", num);
            }
        }
        else
        {
            if(digit == 1)
            {
                printf("    %d  PERFECT\n", num);
            }
            else if(digit == 2)
            {
                printf("   %d  PERFECT\n", num);
            }
            else if(digit == 3)
            {
                printf("  %d  PERFECT\n", num);
            }
            else if(digit == 4)
            {
                printf(" %d  PERFECT\n", num);
            }
            else
            {
                printf("%d  PERFECT\n", num);
            }
        }
    }

    return 0;
}
