#include<stdio.h>
int main()
{
    unsigned long int a, b;
    int rem1, rem2, count, z, total;

    while(scanf("%lu%lu", &a, &b) != EOF)
    {
        count = 0;
        z = 0;

        if((a == 0) && (b == 0))
        {
            break;
        }
        else
        {
            while((a != 0) || (b != 0))
            {
                rem1 = 0;
                rem2 = 0;

                rem1 = a%10;
                rem2 = b%10;

                total = (rem1+rem2+z);

                if(total > 9)
                {
                    count++;
                    z = 1;
                }
                else
                {
                    z = 0;
                }

                a = a / 10;
                b = b / 10;

            }

            if(count == 0)
            {
                printf("No carry operation.\n");
            }
            else if(count == 1)
            {
                printf("%d carry operation.\n", count);
            }
            else
            {
                printf("%d carry operations.\n", count);
            }
        }
    }
    return 0;
}
