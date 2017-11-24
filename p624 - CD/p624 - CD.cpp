#include<bits/stdc++.h>
using namespace std;
int track[100];
vector<int>container;
vector<int>ans;
int i, p, n, max_sum;
void back_track(int pos, int sum)
{
    if(sum > max_sum)
    {
        max_sum = sum;
        ans = container;
    }

    for(int i = pos; i < n; i++)
    {
        if(track[i]+sum <= p)
        {
            sum += track[i];
            container.push_back(track[i]);

            back_track(i+1, sum);

            sum -= track[i];
            container.pop_back();
        }
    }
}
int main()
{
    int k, c;

    while(scanf("%d %d", &p, &n) == 2)
    {
        for(k = 0; k < n; k++)
        {
            scanf(" %d", &track[k]);
        }

        max_sum = 0;
        back_track(0, 0);

        c = 0;
        for(int k = 0; k < ans.size(); k++)
        {
            printf("%d ", ans[k]);
            c += ans[k];
        }
        printf("sum:%d\n", c);
    }

    return 0;
}
