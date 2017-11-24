#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum, temp, rem;

    while(scanf("%d", &num) == 1)
    {
        if(num == 0)
        {
            break;
        }

        temp = num;
        sum = 0;

        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
            if((sum > 9) && (temp == 0))
            {
                temp = sum;
                sum = 0;
            }
        }

        printf("%d\n", sum);
    }
    return 0;
}
