#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[100][100], i, j, n, fix_r, fix_c, cnt1, cnt2, row[100], col[100];

    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }

        cnt1 = 0;
        for(i = 0; i < n; i++)
        {
            j = 0;
            while(j < n)
            {
                row[i] += mat[i][j++];
            }
            if(row[i]%2 == 1)
            {
                cnt1++;
                fix_r = i;
            }
        }

        cnt2 = 0;
        for(j = 0; j < n; j++)
        {
            i = 0;
            while(i < n)
            {
                col[j] += mat[i++][j];
            }
            if(col[j]%2 == 1)
            {
                cnt2++;
                fix_c = j;
            }
        }

        if(cnt1 == 0 && cnt2 == 0)
        {
            printf("OK\n");
        }
        else if(cnt1 == 1 && cnt2 == 1)
        {
            printf("Change bit (%d,%d)\n", fix_r+1, fix_c+1);
        }
        else if(cnt1 > 1 || cnt2 > 1)
        {
            printf("Corrupt\n");
        }

        i = 0;
        while(i < n)
        {
            row[i] = 0;
            col[i] = 0;
            i++;
        }
    }
    return 0;
}
