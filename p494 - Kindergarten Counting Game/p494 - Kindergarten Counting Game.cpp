#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    char str[10000];
    int i, len, count;

    while(gets(str))
    {
        count = 0;
        len = strlen(str);

        for(i = 0; i < len; i++)
        {
            if(isalpha(str[i]) && !isalpha(str[i+1]))
                count++;
        }

        printf("%d\n", count);
    }
    return 0;
}
