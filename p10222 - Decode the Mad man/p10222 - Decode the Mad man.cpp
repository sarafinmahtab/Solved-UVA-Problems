#include<bits/stdc++.h>
using namespace std;
int main()
{
    string dc;
    char c[47] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 91, 93, 92, 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 59, 39, 'z', 'x', 'c', 'v', 'b', 'n', 'm', 44, 46, 47, '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 45, 61} ;
    int i, j;

    while(getline(cin, dc, '\n'))
    {
        for(i = 0; i < dc.size(); i++)
        {
            if(dc[i] >= 'A' && dc[i] <= 'Z')
            {
                dc[i] = dc[i] + 32;
            }

            if(dc[i] == ' ' || dc[i] == '\n')
            {
                printf("%c", dc[i]);
            }
            else
            {
                for(j = 0; j < 47; j++)
                {
                    if(dc[i] == c[j])
                    {
                        printf("%c", c[j-2]);
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}
