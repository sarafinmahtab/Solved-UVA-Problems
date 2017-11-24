#include<bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    int i, lag = 0;
    for(i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            lag = 1;
            break;
        }
    }
    return lag;
}
int main()
{
    int num, rev, temp, mod, flag, revflag;

    while(scanf("%d", &num) == 1)
    {
        temp = num;
        rev = 0;
        while(temp != 0)
        {
            mod = temp % 10;
            rev = rev*10 + mod;
            temp = temp / 10;
        }

        flag = isPrime(num);

        if(num == rev)
        {
            revflag = 1;
        }
        else if(flag == 0)
        {
            revflag = isPrime(rev);
        }
        else
        {
            revflag = 1;
        }

        if((flag == 0) && (revflag == 0))
        {
            printf("%d is emirp.\n", num);
        }
        else if(flag == 0)
        {
            printf("%d is prime.\n", num);
        }
        else
        {
            printf("%d is not prime.\n", num);
        }
    }
    return 0;
}
