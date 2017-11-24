#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(a == 0)
        return b;
    else
        return gcd(b%a, a);
}
int main()
{
    int i, j, test, n, arr[100], m, hcf, k;
    string str;

    scanf("%d", &test);

    getchar();
    while(test--)
    {
        j = 0;
        getline(cin, str);
        istringstream iss(str);
        j = 0;
        while(iss >> arr[j])
        {
            j++;
        }

        sort(arr, arr+j);
        m = 0;
        for(i = 0; i < j-1; i++)
        {
            for(k = i+1; k < j; k++)
            {
                hcf = gcd(arr[i], arr[k]);

                if(hcf >= m)
                {
                    m = hcf;
                }
            }
        }

        printf("%d\n", m);
    }

    return 0;
}
