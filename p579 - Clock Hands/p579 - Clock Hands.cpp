#include<bits/stdc++.h>
using namespace std;
int main()
{
    float hour, minu, angle;

    while(scanf("%f:%f", &hour, &minu) == 2)
    {
        if((hour == 0) && (minu == 0))
        {
            break;
        }
        angle = abs((60 * hour - 11 * minu) / 2);

        if(angle > 180)
        {
            angle = 360 - angle;
        }

        printf("%.3f\n", angle);
    }

    return 0;
}
