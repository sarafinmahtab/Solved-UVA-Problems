#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int t, hour, minu;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d:%d", &hour, &minu);

        if((minu > 0) && (minu < 60) && (hour != 12))
        {
            hour = 11 - hour;
            if(hour <= 0)
                hour = hour + 12;
            minu = 60 - minu;
            printf("%02d:%02d\n", hour, minu);
        }
        else if((minu > 0) && (minu < 60) && (hour == 12))
        {
            hour = 11;
            minu = 60 - minu;
            printf("%02d:%02d\n", hour, minu);
        }
        else if((hour != 12) && (hour != 6) && (minu == 00))
        {
            hour = 12 - hour;
            printf("%02d:%02d\n", hour, minu);
        }
        else
        {
            printf("%02d:%02d\n", hour, minu);
        }
    }
    return 0;
}
