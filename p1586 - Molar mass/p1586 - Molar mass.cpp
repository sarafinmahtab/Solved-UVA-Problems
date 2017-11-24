#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, i, c, h, o, n;
    double mass, carbon = 12.01, hydro = 1.008, oxygen = 16, nitro = 14.01;
    char mole[100];

    scanf("%d", &num);
    while(num--)
    {
        c = 0;
        h = 0;
        o = 0;
        n = 0;

        scanf("%s", mole);

        for(i = 0; i < strlen(mole); i++)
        {
            if(mole[i] == 'C')
            {
                if(mole[i+1] >= '0' && mole[i+1] <= '9')
                {
                    if(mole[i+2] >= '0' && mole[i+2] <= '9')
                    {
                        c = c + (mole[i+1] - 48) * 10;
                        c = c + mole[i+2] - 48;
                    }
                    else
                    {
                        c = c + mole[i+1] - 48;
                    }
                }
                else
                {
                    c = c + 1;
                }
            }

            if(mole[i] == 'H')
            {
                if(mole[i+1] >= '0' && mole[i+1] <= '9')
                {
                    if(mole[i+2] >= '0' && mole[i+2] <= '9')
                    {
                        h = h + (mole[i+1] - 48) * 10;
                        h = h + mole[i+2] - 48;
                    }
                    else
                    {
                        h = h + mole[i+1] - 48;
                    }
                }
                else
                {
                    h = h + 1;
                }
            }

            if(mole[i] == 'O')
            {
                if(mole[i+1] >= '0' && mole[i+1] <= '9')
                {
                    if(mole[i+2] >= '0' && mole[i+2] <= '9')
                    {
                        o = o + (mole[i+1] - 48) * 10;
                        o = o + mole[i+2] - 48;
                    }
                    else
                    {
                        o = o + mole[i+1] - 48;
                    }
                }
                else
                {
                    o = o + 1;
                }
            }

            if(mole[i] == 'N')
            {
                if(mole[i+1] >= '0' && mole[i+1] <= '9')
                {
                    if(mole[i+2] >= '0' && mole[i+2] <= '9')
                    {
                        n = n + (mole[i+1] - 48) * 10;
                        n = n + mole[i+2] - 48;
                    }
                    else
                    {
                        n = n + mole[i+1] - 48;
                    }
                }
                else
                {
                    n = n + 1;
                }
            }
        }

        mass = carbon * c + hydro * h + oxygen * o + nitro * n;

        printf("%.3lf\n", mass);
    }
    return 0;
}
