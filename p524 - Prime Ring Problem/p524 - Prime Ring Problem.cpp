#include<bits/stdc++.h>
using namespace std;
bool prime [42] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0,1};
int arr[20], n;
bool available[20];
bool valid(int num, int ind)
{
    if(ind == n-1)
    {
        if(prime[arr[ind-1]+num] && prime[num+1])
        {
            return true;
        }
        return false;
    }
    return prime[arr[ind-1]+num];
}

void back_track(int index)
{
    if(index == n)
    {
        printf("%d", arr[0]);
        for(int i = 1; i < n; i++)
        {
            printf(" %d", arr[i]);
        }
        printf("\n");
        return;
    }

    for(int j = 2; j <= n; j++)
    {
        if(available[j])
        {
            if(valid(j, index))
            {
                available[j] = false;
                arr[index] = j;
                back_track(index+1);
                available[j] = true;
            }
        }
    }
}

int main()
{
    int cases = 0;
    while(scanf("%d", &n) == 1)
    {
        arr[0] = 1;
        if(cases++)
        {
            printf ("\n");
        }
        printf ("Case %d:\n", cases);
        memset(available, true, sizeof(available));
        back_track(1);
    }

    return 0;
}
