#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char binary[1000];
    int sum, i, decimal, j, rem, temp;

    while(scanf("%s", binary) == 1)
    {
        if(binary[0] == '0')
        {
            break;
        }

        decimal = 0;
        j = 2;
        sum = 0;

        for(i = strlen(binary)-1; i >= 0; i--)
        {
            rem = (binary[i]-48) % 10;
            sum = sum + rem;
            decimal = decimal + rem*j;
            j = j*2;
        }

        printf("%d\n", decimal - sum);
    }
    return 0;
}
