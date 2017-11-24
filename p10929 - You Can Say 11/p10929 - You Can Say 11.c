#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, l, mod11, temp;
    char num[1000];

    while(scanf("%s", num) == 1)
    {
        mod11 = 0;
        l = strlen(num);
        for(i = 0; i < l; i++)
        {
            temp = num[i] - 48;
            mod11 = (mod11*10 + temp) %11;
        }

        if((mod11 == 0) && (l == 1))
        {
            break;
        }
        else if(mod11 == 0)
        {
            printf("%s is a multiple of 11.\n", num);
        }
        else
        {
            printf("%s is not a multiple of 11.\n", num);
        }
    }
    return 0;
}
