#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, m, test, n, digit[10], temp, rev;
    char str[40000];

    scanf("%d", &test);

    for(m = 0; m < test; m++)
    {
        memset(digit, 0, sizeof(digit));
        k = 0;
        scanf("%d", &n);

        for(j = 1; j <= n; j++)
        {
            if(j <= 9 && j >= 0)
            {
                str[k++] = j+48;
            }
            else
            {
                temp = j;
                while(temp > 0)
                {
                    rev = temp%10;
                    str[k++] = rev+48;
                    temp = temp / 10;
                }
            }
        }
        str[k] = '\0';

        //puts(str);

        for(i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == '0')
                digit[0]++;
            else if(str[i] == '1')
                digit[1]++;
            else if(str[i] == '2')
                digit[2]++;
            else if(str[i] == '3')
                digit[3]++;
            else if(str[i] == '4')
                digit[4]++;
            else if(str[i] == '5')
                digit[5]++;
            else if(str[i] == '6')
                digit[6]++;
            else if(str[i] == '7')
                digit[7]++;
            else if(str[i] == '8')
                digit[8]++;
            else if(str[i] == '9')
                digit[9]++;
        }

        for(i = 0; i < 10; i++)
        {
            if(i != 0)
                printf(" %d", digit[i]);
            else
                printf("%d", digit[i]);
        }
        printf("\n");
    }
    return 0;
}
