#include<bits/stdc++.h>
using namespace std;

struct data
{
    string team_name;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
}team[35];

bool mycmp(struct data a1, struct data a2)
{
    int i;
    if(a1.b > a2.b) return true;
    if(a1.b < a2.b) return false;
    if(a1.d > a2.d) return true;
    if(a1.d < a2.d) return false;
    if(a1.g > a2.g) return true;
    if(a1.g < a2.g) return false;
    if(a1.h > a2.h) return true;
    if(a1.h < a2.h) return false;
    if(a1.c < a2.c) return true;
    if(a1.c > a2.c) return false;

    for(i = 0; i < 35; i++)
    {
        char c1 = a1.team_name[i];
        char c2 = a2.team_name[i];

        if(c1 >= 'A' && c1 <= 'Z')
                c1 = c1 + 32;
        if(c2 >= 'A' && c2 <= 'Z')
            c2 = c2 + 32;

        if(c1 < c2) return true;
        if(c1 > c2) return false;
    }
    return false;
}

int main()
{
    char tournament[1000];
    string match, t, tm1, tm2, temp;
    int i, j, k, l, m, n, p, q, x, T, G;

    scanf("%d", &n);

    getchar();
    while(n--)
    {
        gets(tournament);
        scanf("%d", &T);
        getchar();

        for(q = 0; q < T; q++)
        {
            getline(cin, team[q].team_name);
            team[q].b = 0;
            team[q].c = 0;
            team[q].d = 0;
            team[q].e = 0;
            team[q].f = 0;
            team[q].h = 0;
            team[q].i = 0;
        }

        l = 0;
        scanf("%d", &G);
        getchar();
        for(k = 0; k < G; k++)
        {
            if(G == 0)
                break;

            getline(cin, match);
            int cnt1 = 0;
            int cnt2 = 0;

            for(q = 0; ; q++)
            {
                if(match[q] == '#')
                    break;
                tm1 += match[q];
                cnt1++;
            }

            match.erase(match.begin(), match.begin()+cnt1+1);
            int len = match.size();
            for(q = len-1; ; q--)
            {
                if(match[q] == '#')
                    break;
                tm2 += match[q];
                match.erase(q);
            }

            match.erase(q);
            reverse(tm2.begin(), tm2.end());

            int goal1 = 0, goal2 = 0, cnt = 0, p1, p2;

            for(j = 0; j < T; j++)
            {
                if(tm1 == team[j].team_name)
                {
                    p1 = j;
                    for(q = 0; ; q++)
                    {
                        if(match[q] == '@')
                            break;
                        goal1 = goal1*10 + match[q]-48;
                        cnt++;
                    }
                }

                len = match.size();

                if(tm2 == team[j].team_name)
                {
                    p2 = j;
                    for(q = len-1; ; q--)
                    {
                        if(match[q] == '@')
                            break;
                        goal2 = goal2*10 + match[q]-48;
                    }
                }
            }

            int rev, temp = goal2;
            goal2 = 0;
            while(temp != 0)
            {
                rev = temp%10;
                goal2 = goal2 + rev;
                temp = temp / 10;
            }

            if(goal1 > goal2)
            {
                team[p1].b = team[p1].b + 3;
                team[p1].c = team[p1].c + 1;
                team[p2].c = team[p2].c + 1;
                team[p1].d = team[p1].d + 1;
                team[p2].f = team[p2].f + 1;
                team[p1].h = team[p1].h + goal1;
                team[p1].i = team[p1].i + goal2;
                team[p2].h = team[p2].h + goal2;
                team[p2].i = team[p2].i + goal1;
            }
            else if(goal2 > goal1)
            {
                team[p2].b = team[p2].b + 3;
                team[p1].c = team[p1].c + 1;
                team[p2].c = team[p2].c + 1;
                team[p2].d = team[p2].d + 1;
                team[p1].f = team[p1].f + 1;
                team[p1].h = team[p1].h + goal1;
                team[p1].i = team[p1].i + goal2;
                team[p2].h = team[p2].h + goal2;
                team[p2].i = team[p2].i + goal1;
            }
            else
            {
                team[p1].b = team[p1].b + 1;
                team[p2].b = team[p2].b + 1;
                team[p1].c = team[p1].c + 1;
                team[p2].c = team[p2].c + 1;
                team[p1].e = team[p1].e + 1;
                team[p2].e = team[p2].e + 1;
                team[p1].h = team[p1].h + goal1;
                team[p1].i = team[p1].i + goal2;
                team[p2].h = team[p2].h + goal2;
                team[p2].i = team[p2].i + goal1;
            }

            tm1.clear();
            tm2.clear();
        }

        for(i = 0; i < T; i++)
        {
            team[i].g = team[i].h - team[i].i;
        }

        sort(team, team+T, mycmp);

        printf("%s\n", tournament);
        for(k = 0; k < T; k++)
        {
            printf("%d) ", k+1);
            cout << team[k].team_name;
            printf(" %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n", team[k].b, team[k].c, team[k].d, team[k].e, team[k].f, team[k].g, team[k].h, team[k].i);
        }

		if(n != 0) putchar('\n');
    }
    return 0;
}
