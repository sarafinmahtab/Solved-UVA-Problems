#include<stdio.h>
int main()
{
    int c, n, j, num[1000], sum, count;
    float average, above;

    scanf("%d", &c);

    while(c--)
    {
        sum = 0;
        count = 0;

        scanf("%d", &n);

        for(j = 0; j < n; j++)
        {
            scanf("%d", &num[j]);
            sum += num[j];
        }

        average = sum / n;

        for(j = 0; j < n; j++)
            if(num[j] > average)
                count = count + 1;

        above = ((float) count / (float) n);

        printf("%.3f%%\n", above*100);
    }

    return 0;
}
