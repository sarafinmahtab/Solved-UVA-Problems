#include<stdio.h>
#include<string.h>
int main()
{
    long int len, mod4, mod100, mod400, mod15, mod55, i, temp;
    char year[100000];

    int print = 0;

    while(scanf("%s", year) != EOF)
    {
        if(print != 0)
        {
            printf("\n");
        }
        print = 1;

        temp = mod4 = mod100 = mod400 = mod55 = mod15 = 0;
        len = strlen(year);

        for(i = 0; i < len; i++)
        {
            temp = year[i] - 48;
            mod4 = ((mod4*10) + temp) % 4;
            mod100 = ((mod100*10) + temp) % 100;
            mod400 = ((mod400*10) + temp) % 400;
            mod15 = ((mod15*10) + temp) % 15;
            mod55 = ((mod55*10) + temp) % 55;
        }

        if((mod400 == 0) && (mod15 == 0) && (mod55 == 0))
        {
            printf("This is leap year.\nThis is huluculu festival year.\nThis is bulukulu festival year.\n");
        }
        else if((mod4 == 0) && (mod100 != 0) && (mod15 == 0) && (mod55 == 0))
        {
            printf("This is leap year.\nThis is huluculu festival year.\nThis is bulukulu festival year.\n");
        }
        else if((mod400 == 0) && (mod15 == 0))
        {
            printf("This is leap year.\nThis is huluculu festival year.\n");
        }
        else if((mod4 == 0) && (mod100 != 0) && (mod15 == 0))
        {
            printf("This is leap year.\nThis is huluculu festival year.\n");
        }
        else if((mod400 == 0) && (mod55 == 0))
        {
            printf("This is leap year.\nThis is bulukulu festival year.\n");
        }
        else if((mod4 == 0) && (mod100 != 0) && (mod55 == 0))
        {
            printf("This is leap year.\nThis is bulukulu festival year.\n");
        }
        else if(mod400 == 0)
        {
            printf("This is leap year.\n");
        }
        else if((mod4 == 0) && (mod100 != 0))
        {
            printf("This is leap year.\n");
        }
        else if(mod15 == 0)
        {
            printf("This is huluculu festival year.\n");
        }
        else
        {
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
