#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100000];
    char str1[100][100];
    int i, j, k, l, n, len, root, ch;

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        gets(str);

        len = strlen(str);
        root = sqrt(len);

        if(root*root != len)
        {
            printf("INVALID\n");
        }
        else
        {
            l = 0;
            for(j = 0; j < root; j++)
            {
                for(k = 0; k < root; k++)
                {
                    str1[j][k] = str[l++];
                }
            }

            for(j = 0; j < root; j++)
            {
                for(k = 0; k < root; k++)
                {
                    cout << str1[k][j];
                }
            }
            cout << endl;
        }
    }

    return 0;
}
