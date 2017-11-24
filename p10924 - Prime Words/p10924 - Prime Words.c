#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, count, sum;
    char word[100];

    while(gets(word))
    {
        sum = 0;
        count = 0;
        for(i = 0; i < strlen(word); i++)
        {
            if((word[i] >= 'A') && (word[i] <='Z'))
            {
                sum = sum + word[i] - 38;
            }
            else if((word[i] >= 'a') && (word[i] <='z'))
            {
                sum = sum + word[i] - 96;
            }
        }

        for(i = 2; i <= sum/2; i++)
        {
            if(sum % i == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
