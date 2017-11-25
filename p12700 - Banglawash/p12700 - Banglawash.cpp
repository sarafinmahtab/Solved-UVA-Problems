#include<bits/stdc++.h>
using namespace std;

int main() {

    int numB, numW, numT, numA, test, n;
    string str;

    cin >> test;
    for(int i = 0; i < test; i++) {
        cin >> n;
        cin >> str;

        numB = numW = numT = numA = 0;
        for(int j = 0; j < n; j++) {
            if(str[j] == 'B') {
                numB++;
            }

            if(str[j] == 'T') {
                numT++;
            }

            if(str[j] == 'W') {
                numW++;
            }

            if(str[j] == 'A') {
                numA++;
            }
        }

        if(numA == n){
            printf("Case %d: ABANDONED\n", i+1);
        } else if(numW == 0 && numB > 0 && numT == 0) {
            printf("Case %d: BANGLAWASH\n", i+1);
        } else if(numB == 0 && numW > 0 && numT == 0) {
            printf("Case %d: WHITEWASH\n", i+1);
        } else if(numB > numW) {
            printf("Case %d: BANGLADESH %d - %d\n", i+1, numB, numW);
        } else if(numB < numW) {
            printf("Case %d: WWW %d - %d\n", i+1, numW, numB);
        } else if(numB == numW) {
            printf("Case %d: DRAW %d %d\n", i+1, numB, numT);
        }
    }
    return 0;
}
