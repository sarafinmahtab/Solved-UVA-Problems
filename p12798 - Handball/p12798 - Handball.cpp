#include<cstdio>
using namespace std;
int main()
{
    int num[100][100], N, M, i, j, count, temp;

    while(scanf("%d %d", &N, &M) == 2)
    {
        count = 0;
        temp = 0;
        for(i = 0; i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                scanf("%d", &num[i][j]);
            }
        }

        for(i = 0; i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                if(num[i][j] == 0)
                    count++;
            }
            if(count == 0)
                temp++;
            count = 0;
        }

        printf("%d\n", temp);
    }

    return 0;
}
