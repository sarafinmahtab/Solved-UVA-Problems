#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char str[1000];
    int i;

    while(gets(str))
    {
        for(i = 0; i < strlen(str); i++)
        {
            str[i] = str[i] - 7;
        }
        puts(str);
    }

    return 0;
}
