#include<stdio.h>
int main()
{
    int n, i, j, num[1000], count, temp;

    while(scanf("%d", &n) != EOF)
    {
        count = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }

        for(i = 0; i < (n-1); i++)
        {
            for(j = 0; j < (n - i - 1); j++)
            {
                if(num[j] > num[j+1])
                {
                    temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;

                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", count);
    }
    return 0;
}
