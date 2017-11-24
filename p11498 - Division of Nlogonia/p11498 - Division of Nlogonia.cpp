#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, i, n, m, x, y;

    while(scanf("%d", &k) == 1)
    {
        if(k == 0)
            break;

        scanf("%d%d", &n, &m);
        for(i = 0; i < k; i++)
        {
            scanf("%d%d", &x, &y);

            if((n == x) || (m == y))
            {
                printf("divisa\n");
            }
            else
            {
                if(m > y)
                {
                    printf("S");
                }
                else
                {
                    printf("N");
                }

                if(n > x)
                {
                    printf("O\n");
                }
                else
                {
                    printf("E\n");
                }
            }
        }
    }
    return 0;
}
