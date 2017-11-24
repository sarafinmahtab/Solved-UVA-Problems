#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    char num[1000];
    long long i, num1, t, rem, len;

    scanf("%lli", &t);

    while(t--)
    {
        scanf("%s", num);
        num1 = 0;
        len = strlen(num);

        for(i = 0; i < len; i++)
        {
            rem = num[i] - 48;
            num1 = num1*10 + rem;
        }

        for(i = len-1; i >= 0; i--)
        {
            rem = num[i] - 48;
            num1 = num1 - pow(rem, len);
        }


        if(num1 == 0)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
