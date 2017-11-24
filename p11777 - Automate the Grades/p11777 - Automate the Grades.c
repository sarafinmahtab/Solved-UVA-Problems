#include<stdio.h>
int main()
{
    int i, t ,Term1, Term2, Final, attendance;
    double test1, test2, test3, avg, sum;

    scanf("%d", &t);

    for(i = 0; i < t; i++)
    {
        scanf("%d %d %d %d %lf %lf %lf", &Term1, &Term2, &Final, &attendance, &test1, &test2, &test3);

        if(((test1 >= test3) && (test2 >= test3)))
        {
            avg = (test1 + test2) / 2;
        }
        else if(((test1 >= test2) && (test3 >= test2)))
        {
            avg = (test1 + test3) / 2;
        }
        else
        {
            avg = (test2 + test3) / 2;
        }

        sum = Term1 + Term2 + Final + attendance + avg;

        if(sum >= 90)
        {
            printf("Case %d: A\n", i+1);
        }
        else if((sum >= 80) && (sum < 90))
        {
            printf("Case %d: B\n", i+1);
        }
        else if((sum >= 70) && (sum < 80))
        {
            printf("Case %d: C\n", i+1);
        }
        else if((sum >= 60) && (sum < 70))
        {
            printf("Case %d: D\n", i+1);
        }
        else
        {
            printf("Case %d: F\n", i+1);
        }
    }
    return 0;
}
