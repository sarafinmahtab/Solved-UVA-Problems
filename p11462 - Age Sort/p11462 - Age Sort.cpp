#include<cstdio>
#include<algorithm>
using namespace std;

long n, i, array[2000000];

int main()
{
    while(scanf("%li", &n) == 1)
    {
        if(n == 0)
            break;

        for(i = 0; i < n; i++)
        {
            scanf("%li", &array[i]);
        }

        sort(array, array+i);

        for(i = 0; i < n; i++)
        {
            printf("%li", array[i]);
            if(i < (n-1))
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
