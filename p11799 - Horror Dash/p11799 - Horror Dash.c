#include<stdio.h>
int main()
{
    int s, T, n, i, c, num[100];

    scanf("%d", &T);

    for(i = 0; i < T; i++)
    {
        s = -1;
        scanf("%d", &n);
        for(c = 0; c < n; c++)
        {
            scanf("%d", &num[c]);

            if(num[c] > s)
            {
                s = num[c];
            }
        }
        printf("Case %d: %d\n", i+1, s);
    }
    return 0;
}
