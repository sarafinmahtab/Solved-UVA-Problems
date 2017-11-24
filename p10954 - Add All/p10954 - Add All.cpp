#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, num[5000], cost, sum, x, i, j, num1, num2, num3;

    vector <int> add;
    priority_queue <int> pq;

    while(scanf("%d", &n) == 1 && n != 0)
    {
        sum = 0;

        for(i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
            x = (-1) * num[i];
            pq.push(x);
        }

        j = 0;

        while(pq.size() != 1)
        {
            num1 = pq.top();
            pq.pop();

            num2 = pq.top();
            pq.pop();

            cost = num1 + num2;
            sum = sum + cost;
            pq.push(cost);
        }

        pq.pop();

        sum = (-1) * sum;

        printf("%d\n", sum);
    }
    return 0;
}
