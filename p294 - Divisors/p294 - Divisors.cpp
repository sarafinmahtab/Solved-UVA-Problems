#include<bits/stdc++.h>
using namespace std;
long countfact(long n)
{
    long i, cnt = 1, pow, sq;

    sq = (long)sqrt(n);

    for(i = 2; i <= sq; i = (i == 2 ? 3 : i+2))
    {
        pow = 0;
        while(n%i == 0)
        {
            pow++;
            n = n / i;
        }

        if(pow != 0)
        {
            cnt *= pow + 1;
            sq = (long)sqrt(n);
        }
    }

    if(n != 1)
    {
        cnt *= 1 + 1;
    }

    return cnt;
}
int main()
{
    long i, j, k, n, num1, num2, m, mini, maxi, arr[100000], num;

    scanf("%ld", &n);
    for(k = 0; k < n; k++)
    {
        j = 0;
        mini = -1;
        scanf("%ld %ld", &num1, &num2);

        for(i = num1; i <= num2; i++)
        {
            m = countfact(i);

            arr[j++] = m;
        }

        maxi = 0;
        for(i = 0; i < j; i++)
        {
            if(arr[i] > maxi)
            {
                maxi = arr[i];
                num = i+num1;
            }
        }

        printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n", num1, num2, num, maxi);
    }

    return 0;
}
