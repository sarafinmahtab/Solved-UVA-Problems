#include<stdio.h>
int main()
{
    int T, i;
    long int K, account = 0;
    char donate[10], report[10];
    char don[] = "donate";
    char rep[] = "report";

    scanf("%d", &T);

    for(i = 1; i <= T; i = i+1)
    {
        scanf("%s", donate);

        if(strcmp(don, donate) == 0)
        {
            scanf("%li", &K);
            account += K;
        }

        if(strcmp(rep, donate) == 0)
        {
            printf("%li\n", account);
        }
    }
    return 0;
}
