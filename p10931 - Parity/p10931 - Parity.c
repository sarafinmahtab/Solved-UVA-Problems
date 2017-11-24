#include<stdio.h>
int main()
{
    long long int decimal, i, j, count, binary[100000];

    while(scanf("%lli", &decimal) != EOF)
    {
        if(decimal == 0)
        {
            break;
        }
        else
        {
            i = 1;
            count = 0;
            while(decimal != 0)
            {
                binary[i++] = decimal % 2;
                decimal = decimal / 2;
            }

            printf("The parity of ");
            for(j = (i-1); j > 0; j--)
            {
                printf("%lli", binary[j]);
                if(binary[j] == 1)
                {
                    count++;
                }
            }
            printf(" is %lli (mod 2).\n", count);
        }
    }
    return 0;
}
