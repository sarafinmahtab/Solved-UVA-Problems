#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input[200], bday[200];
    bday[0] = "Happy";
    bday[1] = "birthday";
    bday[2] = "to";
    bday[3] = "you";
    bday[4] = "Happy";
    bday[5] = "birthday";
    bday[6] = "to";
    bday[7] = "you";
    bday[8] = "Happy";
    bday[9] = "birthday";
    bday[10] = "to";
    bday[11] = "Rujia";
    bday[12] = "Happy";
    bday[13] = "birthday";
    bday[14] = "to";
    bday[15] = "you";
    bday[16] = "end";

    int n, i, j, lag = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    i = 0;
    j = 0;
    while(bday[j] != "end")
    {
        cout << input[i++] << ": " << bday[j++] << endl;

        if(i == n)
        {
            i = 0;
            lag = 1;
        }

        if(bday[j] == "end" && lag == 0)
        {
            j = 0;
        }
    }

    return 0;
}
