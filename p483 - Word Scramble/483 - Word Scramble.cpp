#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sub[1000];
    int i, j, k, l, len, n, t;
    char str1[1000], str2[1000], str3[1000], ch;

    while(gets(str1))
    {
        len = strlen(str1);
        n = 0;
        t = 0;
        for(i = 0; i < len; i++)
        {
            if(str1[i] == ' ')
            {
                k = i;
                for(j = k-1; j >= t; j--)
                {
                    printf("%c", str1[j]);
                }
                printf(" ");
                t = k+1;
            }
        }
        for(j = len-1; j >= t; j--)
        {
            printf("%c", str1[j]);
        }
        str1[len] = '\0';
        printf("\n");
    }

    return 0;
}
