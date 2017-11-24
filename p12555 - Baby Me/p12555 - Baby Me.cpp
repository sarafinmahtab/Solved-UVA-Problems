#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int a, b, n, len, cnt = 1;
    float w;

    scanf("%d", &n);

    getchar();

    while(n--)
    {
        scanf("%d", &a);
        gets(str);
        len = strlen(str);

        b = len>3 ? (int)str[3]-'0' : 0;

        w = a * 0.5 + b * 0.05;

        cout << "Case " << cnt++ << ": " << w << endl;
    }

    return 0;
}
