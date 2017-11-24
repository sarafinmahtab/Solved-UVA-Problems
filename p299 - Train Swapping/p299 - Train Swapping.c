#include<stdio.h>
int main()
{
    int k, i, j, N, L, S;
    long int num[100], temp;

    scanf("%d", &N);

    for(k = 0; k < N; k++)
    {
        S = 0;
        scanf("%d", &L);

        for(i = 0; i < L; i++)
        {
            scanf("%li", &num[i]);
        }

        for(i = 0; i < L-1; i++)
        {
            for(j = 0; j < L-i-1; j++)
            {
                if(num[j] > num[j+1])
                {
                    temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    S++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", S);
    }

    return 0;
}
