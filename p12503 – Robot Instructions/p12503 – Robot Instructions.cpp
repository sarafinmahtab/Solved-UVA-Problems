#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, pos, test, p, k, num[105];
    char str[1000];

    scanf("%d", &test);

    while(test--)
    {
        k = 0;
        pos = 0;
        scanf("%d", &n);

        getchar();
        for(i = 0; i < n; i++)
        {
            gets(str);
            if(str[0] == 'L' && str[1] == 'E' && str[2] == 'F' && str[3] == 'T')
            {
                num[k++] = 2;
                pos = pos - 1;
            }
            else if(str[0] == 'R' && str[1] == 'I' && str[2] == 'G' && str[3] == 'H' && str[4] == 'T')
            {
                num[k++] = 1;
                pos = pos + 1;
            }
            else
            {
                p = str[8] - 48;
                if(str[9] <= '9' && str[9] >= '0')
                {
                    p = p*10 + str[9] - 48;
                }

                if(str[10] <= '9' && str[10] >= '0')
                {
                    p = p*10 + str[10] - 48;
                }

                if(num[p-1] == 2)
                {
                    num[k++] = 2;
                    pos = pos - 1;
                }
                else if(num[p-1] == 1)
                {
                    num[k++] = 1;
                    pos = pos + 1;
                }
            }
        }
        cout << pos << endl;
    }
    return 0;
}
