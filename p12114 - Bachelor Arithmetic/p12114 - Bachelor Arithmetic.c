#include<stdio.h>
int main()
{
    double B, S, p;
    int j = 1;

    while(scanf("%lf %lf", &S, &B) == 2)
    {
        p = (S-1) / (B-1);

        if((S == 0) && (B == 0))
        {
            break;
        }
        else if(((S == 1) && (B == 1)) || (S == 1))
        {
            printf("Case %d: :-\\", j);
            printf("\n");
        }
        else if(S < 0)
        {
            printf("Case %d: :-)", j);
            printf("\n");
        }
        else if(p <= 1)
        {
            printf("Case %d: :-|", j);
            printf("\n");
        }
        else if((p > 1) || (B <= 1))
        {
            printf("Case %d: :-(", j);
            printf("\n");
        }

        j++;
    }
    return 0;
}
