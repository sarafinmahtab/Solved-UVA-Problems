#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int i, len, k;
    char num[1000];

    while(gets(num))
    {
        if(num[0] == '0')
        {
            break;
        }

        len = strlen(num);

        k = num[0] - '0';

        for(i = 1; i < len; i++)
        {
            k = k * 10 + num[i] - '0';
            k = k % 17;
        }

        if(k == 0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
