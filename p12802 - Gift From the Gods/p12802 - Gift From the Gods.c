#include<stdio.h>
#include <stdbool.h>
bool Palindrome(int m)
{
    int temp, rev, digit = 0;
    temp = m;
    while(temp != 0)
    {
        rev = temp % 10;
        digit  = digit*10 + rev;
        temp = temp / 10;
    }

    if(digit == m) return true;
    else return false;
}
bool Prime(int n)
{
    int i, lag = 0;
    for(i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            lag = 1;
        }
    }

    if(lag == 0) return true;
    else return false;
}
int main()
{
    int num;
    while(scanf("%d", &num) == 1)
    {
        if(Prime(num) && Palindrome(num))
        {
            printf("%d\n", num+num);
            break;
        }

        printf("%d\n", num+num);
    }
    return 0;
}
