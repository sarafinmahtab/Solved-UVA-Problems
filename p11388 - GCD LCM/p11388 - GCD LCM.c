#include<stdio.h>
int main()
{
    int T, G, L, a, b, i;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%d %d", &G, &L);

        if(L%G == 0)
        {
            a = G;
            b = L;
            printf("%d %d\n", a, b);
        }
        else
        {
            a = -1;
            printf("%d\n", a);
        }
    }
    return 0;
}
