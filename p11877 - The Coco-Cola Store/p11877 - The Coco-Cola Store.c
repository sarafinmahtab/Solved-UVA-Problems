#include<stdio.h>
int main()
{
    int num, max;

    while(scanf("%d", &num) != EOF)
    {
        if(num == 0)
        {
            break;
        }
        else
        {
            max = (num / 2);

            printf("%d\n", max);
        }
    }

    return 0;
}
