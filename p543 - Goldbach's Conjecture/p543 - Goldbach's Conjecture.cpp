#include<bits/stdc++.h>
using namespace std;
int r = 1000000;
int main()
{
    bool arr[r];
    int i, j, sq, n;

    sq = sqrt(r);
    memset(arr, true, sizeof(arr));

    for(i = 2; i < r; i += 2)
    {
        arr[i] = false;
    }

    for(i = 3; i <= sq; i += 2)
    {
        if(arr[i])
        {
            for(j = i+i; j < r; j += i)
            {
                arr[j] = false;
            }
        }
    }

    arr[0] = false;
    arr[1] = false;

    int lag = 0;
    while(scanf("%d", &n) == 1 && n != 0)
    {
        for(i = 3; i < n; i+=2)
        {
            if(arr[i] && arr[n-i])
            {
                printf("%d = %d + %d\n", n, i, n-i);
                lag = 1;
                break;
            }
        }

        if(lag == 0)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }

    return 0;
}
