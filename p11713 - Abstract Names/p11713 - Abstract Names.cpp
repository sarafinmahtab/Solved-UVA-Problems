#include<bits/stdc++.h>
using namespace std;
int main()
{
    char real[20], game[20];
    int i, j, lag, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%s", real);
        scanf("%s", game);

        if(strlen(real) == strlen(game))
        {
            for(j = 0; j < strlen(game); j++)
            {
                if(real[j] == game[j])
                {
                    lag = 1;
                }
                else if((real[j] <= 90 && real[j] >= 65) && (game[j] <= 90 && game[j] >= 65))
                {
                    lag = 0;
                    break;
                }
                else if((real[j] != game[j]) && (real[j] == 'a' || real[j] == 'e' || real[j] == 'i' || real[j] == 'o' || real[j] == 'u') && (game[j] == 'a' || game[j] == 'e' || game[j] == 'i' || game[j] == 'o' || game[j] == 'u'))
                {
                    lag = 1;
                }
                else
                {
                    lag = 0;
                    break;
                }
            }
        }
        else
        {
            lag = 0;
        }

        if(lag == 0)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }

    return 0;
}
