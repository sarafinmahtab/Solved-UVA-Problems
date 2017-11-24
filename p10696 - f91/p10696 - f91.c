#include<stdio.h>
int main()
{
    long int N;

    while(scanf("%li", &N) != EOF)
    {
        if(N == 0)
        {
            break;
        }
        else if(N <= 100)
        {
            printf("f91(%li) = 91\n", N);
        }
        else if(N >= 100)
        {
            printf("f91(%li) = %li\n", N, N-10);
        }
    }
    return 0;
}
