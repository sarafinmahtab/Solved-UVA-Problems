#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, n, len, sum;
    char str[100];

    scanf("%d", &n);
    getchar();
    for(j = 0; j < n; j++)
    {
        gets(str);
        sum = 0;

        for(i = 0; str[i] != '\0'; i++)
        {
            if((str[i] == 'a') || (str[i] == 'd') || (str[i] == 'g') || (str[i] == 'j') || (str[i] == 'm') || (str[i] == 'p') || (str[i] == 't') || (str[i] == 'w') || (str[i] == ' '))
                sum = sum + 1;
            else if((str[i] == 'b') || (str[i] == 'e') || (str[i] == 'h') || (str[i] == 'k') || (str[i] == 'n') || (str[i] == 'q') || (str[i] == 'u') || (str[i] == 'x'))
                sum = sum + 2;
            else if((str[i] == 'c') || (str[i] == 'f') || (str[i] == 'i') || (str[i] == 'l') || (str[i] == 'o') || (str[i] == 'r') || (str[i] == 'v') || (str[i] == 'y'))
                sum = sum + 3;
            else if((str[i] == 's') || (str[i] == 'z'))
                sum = sum + 4;
        }
        printf("Case #%d: %d\n", j+1, sum);
    }
    return 0;
}
