#include<bits/stdc++.h>
using namespace std;
int r = 1000000;
int main()
{
    bool arr[r];
    int i, j, sq, n;

    sq = sqrt(r);
    memset(arr, true, sizeof(arr));

    for(i = 4; i < r; i += 2)
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

    int cnt;
    while(scanf("%d", &n) == 1 && n != 0)
    {
        cnt = 0;

        if(arr[2] && arr[n-2])
        {
            cnt++;
        }

        for(i = 3; i < n; i += 2)
        {
            if(arr[i] && arr[n-i])
            {
                cnt++;
            }
        }

        if(cnt%2 == 0)
        {
            cnt = cnt / 2;
            printf("%d\n", cnt);
        }
        else
        {
            cnt = cnt + 1;
            cnt = cnt / 2;
            printf("%d\n", cnt);
        }
    }

    return 0;
}
