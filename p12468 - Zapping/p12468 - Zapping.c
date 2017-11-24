#include<stdio.h>
#include<math.h>
int main()
{
    int i, up, down, count, min_count;

    while(scanf("%d%d", &up, &down) == 2)
    {
        if((up == -1) && (down == -1))
            break;

        count = 0;
        min_count = 0;
        count = abs(up - down);
        min_count = 100 - count;

        if(min_count < count)
        {
            printf("%d\n", min_count);
        }
        else
        {
            printf("%d\n", count);
        }
    }
    return 0;
}
