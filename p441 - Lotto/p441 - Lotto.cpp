#include<bits/stdc++.h>
using namespace std;
int arr[15], n, temp;
vector<int>v;
int taken[50] = {0};
void call()
{
    if(v.size() == 6)
    {
        int lag = 0;
        for(int k = 0; k < 5; k++)
        {
            if(v[k] > v[k+1])
            {
                lag = 1;
                return;
            }
        }

        if(lag == 0)
        {
            for(int k = 0; k < 5; k++)
            {
                printf("%d ", v[k]);
            }
            printf("%d\n", v[5]);
        }
        return;
    }

    for(int i = 0; i < n; i++)
    {
        if(taken[i] == 0)
        {
            taken[i] = 1;
            v.push_back(arr[i]);
            call();
            taken[i] = 0;
            v.pop_back();
        }
    }
}
int main()
{
    int j, cnt = 0;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
        {
            break;
        }

		if (cnt++)
        {
			printf("\n");
        }

        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        call();
    }

    return 0;
}
