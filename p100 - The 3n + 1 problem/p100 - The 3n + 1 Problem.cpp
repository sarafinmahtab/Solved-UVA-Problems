#include <bits/stdc++.h>
using namespace std;

int determineCycleLength(int num) {

    int cycle = 0;
    while(num > 1) {
        if(num%2 == 0) {
            num = num/2;
        } else {
            num = 3 * num + 1;
        }
        cycle++;
    }

    return cycle;
}

int main() {

    int i, j, rMin, rMax, arr[200000], index, mx;

    while(scanf("%d%d", &i, &j) == 2)
    {
        rMin = i;
        rMax = j;

        if(i > j)
        {
            rMin = j;
            rMax = i;
        }

        index = 0;
        for(int k = rMin; k <= rMax; k++) {
            arr[index++] = determineCycleLength(k);
        }

        mx = 0;
        for(int k = 0; k < index; k++) {
            if(arr[k] > mx) {
                mx = arr[k];
            }
        }

        printf("%d %d %d\n", i, j, mx+1);
    }

    return 0;
}
