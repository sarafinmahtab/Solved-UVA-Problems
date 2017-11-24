#include<stdio.h>
int main()
{
    int tea, i, num[5], count;

    while(scanf("%d", &tea) == 1)
    {
        count = 0;
        for(i = 0; i < 5; i++)
        {
            scanf("%d", &num[i]);
        }

        for(i = 0; i < 5; i++)
        {
            if(num[i] == tea)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
