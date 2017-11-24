#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    char S[14];

    char eng[] = "HELLO";
    char esp[] = "HOLA";
    char ger[] = "HALLO";
    char frn[] = "BONJOUR";
    char ita[] = "CIAO";
    char rus[] = "ZDRAVSTVUJTE";
    char brk[] = "#";

    while(scanf("%[^\n]%*c", S) != EOF)
    {
        i++;
        if(strcmp(S, eng) == 0)
        {
            printf("Case %d: ENGLISH\n", i);
        }
        else if(strcmp(S, esp) == 0)
        {
            printf("Case %d: SPANISH\n", i);
        }
        else if(strcmp(S, ger) == 0)
        {
            printf("Case %d: GERMAN\n", i);
        }
        else if(strcmp(S, frn) == 0)
        {
            printf("Case %d: FRENCH\n", i);
        }
        else if(strcmp(S, ita) == 0)
        {
            printf("Case %d: ITALIAN\n", i);
        }
        else if(strcmp(S, rus) == 0)
        {
            printf("Case %d: RUSSIAN\n", i);
        }
        else if(strcmp(S, brk) == 0)
        {
            break;
        }
        else
        {
            printf("Case %d: UNKNOWN\n", i);
        }
    }

    return 0;
}
