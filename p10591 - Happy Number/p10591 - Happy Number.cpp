#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, i, n, mod, sum, temp;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);

        sum = 0;
        temp = num;
        while(temp > 0)
        {
            mod = temp % 10;
            sum = sum + mod * mod;
            temp = temp / 10;
            if((sum > 9) && (temp == 0))
            {
                temp = sum;
                sum = 0;
            }
        }

        if(sum == 1)
        {
            printf("Case #%d: %d is a Happy number.\n", i+1, num);
        }
        else
        {
            printf("Case #%d: %d is an Unhappy number.\n", i+1, num);
        }
    }
    return 0;
}
