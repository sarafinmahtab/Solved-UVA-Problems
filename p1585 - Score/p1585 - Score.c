#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j, k, count;
    char str[1000];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        count = 0;
        scanf("%s", str);
        k = 0;

        for(j = 0; j < strlen(str); j++)
        {
            if(str[j] == 'O')
            {
                k++;
                count = count + k;
            }
            else if(str[j] == 'X')
            {
                k = 0;
                count = count + k;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
