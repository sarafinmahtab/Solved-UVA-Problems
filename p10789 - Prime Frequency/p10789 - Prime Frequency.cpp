#include<bits/stdc++.h>
using namespace std;
int i;
bool isPrime(int a)
{
    int i, lag = 0;
    for(i = 2; i <= a/2; i++)
    {
        if(a%i == 0)
        {
            lag = 1;
            break;
        }
    }

    if(lag == 1)
        return false;
    else
        return true;
}
int main()
{
    int n, k, c, cnt[62], add;
    char str[3000];

    scanf("%d", &n);
    for(k = 0; k < n; k++)
    {
        memset(cnt, 0, sizeof(cnt));
        c = 0;
        scanf("%s", str);

        printf("Case %d: ", k+1);

       while (str[c] != '\0')
       {
            if(str[c] >= '0' && str[c] <= '9')
            {
                cnt[str[c] - '0']++;
            }

            if (str[c] >= 'A' && str[c] <= 'Z')
            {
                cnt[str[c] - 'A' + 10]++;
            }

            if (str[c] >= 'a' && str[c] <= 'z')
            {
                cnt[str[c] - 'a' + 36]++;
            }

            c++;
        }

        add = 0;

        for (c = 0; c < 62; c++)
        {
            if(cnt[c] != 0 && cnt[c] != 1)
            {
                if(c >= 0 && c <= 9 && isPrime(cnt[c]))
                {
                    printf("%c", c+48);
                    add++;
                }
                else if(c >= 10 && c <= 35 && isPrime(cnt[c]))
                {
                    printf("%c", c+55);
                    add++;
                }
                else if(c >= 36 && c <= 61 && isPrime(cnt[c]))
                {
                    printf("%c", c+61);
                    add++;
                }
            }
        }

        if(add == 0)
        {
            printf("empty");
        }
        printf("\n");
    }
    return 0;
}
