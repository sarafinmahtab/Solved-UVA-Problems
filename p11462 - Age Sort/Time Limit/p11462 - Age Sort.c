#include<stdio.h>
long int n, i, j, temp, num[2000000];
int main()
{
    while(scanf("%li", &n) != EOF)
    {
        if(n == 0)
        {
            break;
        }
        else
        {
            for(i = 0; i < n; i++)
            {
                scanf("%li", &num[i]);
            }

            for(i = 0; i < (n-1); i++)
            {
                for(j = 0; j < (n - i -1); j++)
                {
                    if(num[j] > num[j+1])
                    {
                        temp = num[j];
                        num[j] = num[j+1];
                        num[j+1] = temp;
                    }
                }
            }

            for(i = 0; i < n; i++)
            {
                printf("%li", num[i]);
                if(i < (n-1))
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
