#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10005], temp[10005], i, j, n, t, num;

    j = 0;

    while(scanf("%d", &num) == 1)
    {
        arr[j++] = num;

        sort(arr, arr+j);

        if(j == 1)
        {
            n = arr[0];
        }
        else if(j == 2)
        {
            n = (arr[0] + arr[1])/2;
        }
        else if(j%2 == 1)
        {
            n = arr[j/2];
        }
        else
        {
            n = (int)(arr[j/2-1] + arr[j/2])/2;
        }

        cout << n << endl;
    }

    return 0;
}
