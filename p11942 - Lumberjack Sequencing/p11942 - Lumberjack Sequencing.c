#include<stdio.h>
int main()
{
    int k, i, j, num[10], n, temp, count;

    printf("Lumberjacks:\n");

    scanf("%d", &n);

    for(k = 0; k < n; k++)
    {
        count = 0;

        for(i = 0; i < 10; i++)
        {
            scanf("%d", &num[i]);
        }

        for(i = 0; i < 9; i++)
        {
            for(j = 0; j < (9-i); j++)
            {
                if(num[j] < num[j+1])
                {
                    temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;

                    count++;
                }
            }
        }

        if((count == 0) || (count == 45))
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
    }

    return 0;
}
