#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool arr[65000];
    int p;

    memset(arr, false, sizeof(arr));

    arr[561] = true;
    arr[1105] = true;
    arr[1729] = true;
    arr[2465] = true;
    arr[2821] = true;
    arr[6601] = true;
    arr[8911] = true;
    arr[10585] = true;
    arr[15841] = true;
    arr[29341] = true;
    arr[41041] = true;
    arr[46657] = true;
    arr[52633] = true;
    arr[62745] = true;
    arr[63973] = true;

    while(scanf("%d", &p) == 1)
    {
        if(p == 0)
            break;

        if(arr[p])
        {
            printf("The number %d is a Carmichael number.\n", p);
        }
        else
        {
            printf("%d is normal.\n", p);
        }
    }

}

/*
#include<bits/stdc++.h>
using namespace std;
bool arr[65000];
int prime_fact(int a)
{
    int k, cnt = 0;
    for(k = 3; k < a/2; k++)
    {
        if((a%k == 0) && (arr[k] == true))
        {
            printf("%d ", k);
            cnt++;
        }
    }

    return cnt;
}
int main()
{
    int i, j, sq, n = 65000, p, q;

    memset(arr, true, sizeof(arr));
    sq = sqrt(n);

    for(i = 4; i < n; i+=2)
    {
        arr[i] = false;
    }

    for(i = 3; i <= sq; i+=2)
    {
        if(arr[i])
        {
            for(j = i+i; j < n; j+=i)
            {
                arr[j] = false;
            }
        }
    }

    arr[0] = false;
    arr[1] = false;

    while(scanf("%d", &p) == 1)
    {
        if(p == 0)
            break;

        q = prime_fact(p);

        if(q >= 3)
        {
            printf("The number %d is a Carmichael number.\n", p);
        }
        else
        {
            printf("%d is normal.\n", p);
        }
    }

    return 0;
}
*/
