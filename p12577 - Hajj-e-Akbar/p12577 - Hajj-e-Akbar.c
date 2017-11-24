#include<stdio.h>
int main()
{
    int i = 0;
    char ch1[10];
    char ch2[] = "Hajj";
    char ch3[] = "Umrah";
    char ch4[] = "*";
    while(scanf("%[^\n]%*c", &ch1) != EOF)
    {
        i++;
        if(strcmp(ch1, ch2) == 0)
        {
            printf("Case %d: Hajj-e-Akbar\n", i);
        }
        else if(strcmp(ch1, ch3) == 0)
        {
            printf("Case %d: Hajj-e-Asghar\n", i);
        }
        else if(strcmp(ch1, ch4) == 0)
        {
            break;
        }
    }

    return 0;
}
