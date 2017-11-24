#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int T, i;
    long int K, account = 0;
    char donate[10];
    char don[] = "donate";
    char rep[] = "report";

    cin>> T;

    for(i = 1; i <= T; i = i+1)
    {
        cin>> donate;

        if(strcmp(don, donate) == 0)
        {
            cin>> K;
            account += K;
        }

        if(strcmp(rep, donate) == 0)
        {
            cout<<""<<account<<'\n';
        }
    }
    return 0;
}
