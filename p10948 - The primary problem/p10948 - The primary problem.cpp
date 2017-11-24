#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool arr[1000000];
    int i, sq, j, n = 1000000;

    memset(arr, true, sizeof(arr));
    sq = sqrt(n);

    for(i = 4; i <= n; i += 2)
    {
        arr[i] = false;
    }

    for(i = 3; i <= sq; i += 2)
    {
        if(arr[i])
        {
            for(j = i+i; j <= n; j += i)
            {
                arr[j] = false;
            }
        }
    }

    arr[0] = false;
    arr[1] = false;

    int num, temp, n1, n2;
    while(scanf("%d", &num) == 1)
    {
        if(num == 0)
        {
            break;
        }
        else
        {
            printf("%d:\n", num);
        }

        temp = num;

        while(temp > 0)
        {
            if(arr[temp])
            {
                if(arr[num-temp])
                {
                    n1 = num-temp;
                    n2 = temp;
                    break;
                }
            }
            temp--;
        }

        if(n1+n2 == num)
        {
            printf("%d+%d\n", n1, n2);
        }
        else
        {
            printf("NO WAY!\n");
        }
    }

    return 0;
}
