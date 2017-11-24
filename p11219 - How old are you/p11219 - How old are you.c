#include<stdio.h>
int main()
{
    int i, test, dayp, dayb, day, monp, monb, mon, yearp, yearb, year, count;

    scanf("%d", &test);
    for(i = 0; i < test; i++)
    {
        scanf("%d/%d/%d", &dayp, &monp, &yearp);
        scanf("%d/%d/%d", &dayb, &monb, &yearb);

        if(yearb > yearp)
        {
            printf("Case #%d: Invalid birth date\n", i+1);
        }
        else
        {
            mon = monp - monb;
            day = dayp - dayb;
            if(mon < 0)
            {
                count = -1;
            }
            else if((mon == 0) && (day < 0))
            {
                count = -1;
            }
            else
            {
                count = 0;
            }

            year = yearp - yearb + count;

            if(year < 0)
            {
                printf("Case #%d: Invalid birth date\n", i+1);
            }
            else if(year > 130)
            {
                printf("Case #%d: Check birth date\n", i+1);
            }
            else
            {
                printf("Case #%d: %d\n", i+1, year);
            }
        }
    }

    return 0;
}
