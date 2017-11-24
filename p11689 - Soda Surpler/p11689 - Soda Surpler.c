#include<stdio.h>
int main()
{
    int i, N, e, f, c, m;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d%d%d", &e, &f, &c);

        if((e+f) == 0)
        {
            m = 0;
        }
        else if(c == 2)
        {
            m = e + f -1;
        }
        else if((e+f)%(c-1) == 0)
        {
            m = ((e+f)/(c-1)) - 1;
        }
        else
        {
            m = (e+f) / (c-1);
        }

        printf("%d\n", m);
    }

    return 0;
}
