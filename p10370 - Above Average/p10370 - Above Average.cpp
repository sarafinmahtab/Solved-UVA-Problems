#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int c, n, i, j, num[1000], sum, t;
    float average, above;

    scanf("%d", &c);

    for(i = 0; i < c; i++)
    {
        sum = 0;
        t = 0;

        scanf("%d", &n);

        for(j = 0; j < n; j++)
        {
            scanf("%d", &num[j]);
            sum += num[j];
        }

        average = sum / n;

        for(j = 0; j < n; j++)
        {
            if(num[j] > average)
            {
                t++;
            }
        }
        above = ((float) t / (float) n) * 100;

        printf("%.3f%%\n", above);
    }
    return 0;
}
