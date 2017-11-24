#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue < int > q;
    int n, i, num, arr[100];

    while(cin >> n)
    {
        if(n == 0)
            break;

        cout << "Discarded cards:";

        for(i = 1; i <= n; i++)
        {
            q.push(i);
        }

        i = 0;
        int check = 0;
        while(q.front() != q.back())
        {
            if(i%2 == 0)
            {
                num = q.front();
                q.pop();

                if(check == 0)
                    cout << " " << num;
                else
                    cout << ", " << num;
            }
            else
            {
                num = q.front();
                q.pop();
                q.push(num);
            }

            i++;
            check++;
        }
        cout << endl;
        cout << "Remaining card: " << q.front() << endl;
        q.pop();
    }

    return 0;
}
