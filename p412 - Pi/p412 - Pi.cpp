#include<bits/stdc++.h>
using namespace std;
bool gcd(int n1, int n2)
{
    int p;
    if(n1 == 0)
        p = n2;
    else
        p = gcd(n2%n1, n1);

    if(p == 1)
        return true;
    return false;
}
int main()
{
    double pi;
    int num, arr[1000], i, j, cnt, pr, temp;

    while(scanf("%d", &num) == 1)
    {
        if(num == 0)
            break;

        cnt = 0;
        for(i = 0; i < num; i++)
        {
            scanf("%d", &arr[i]);
        }

        cnt = 0;
        pr = 0;
        for(i = 0; i < num; i++)
        {
            for(j = i+1; j < num; j++)
            {
                pr++;
                if(gcd(arr[i], arr[j]))
                {
                    cnt++;
                }
            }
        }

        if(cnt == 0)
        {
            cout << "No estimate for this data set." << endl;
        }
        else
        {
            pi = (double)(6*pr) / cnt;
            pi = sqrt(pi);
            printf("%.6lf\n", pi);
        }
    }

    return 0;
}
