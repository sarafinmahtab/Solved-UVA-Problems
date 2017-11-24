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
};

bool mycmp(char s1, char s2)
{
    if(s1 >= 65 && s1 <= 90)
        s1 = s1 + 32;
    if(s2 >= 65 && s2 <= 90)
        s2 = s2 + 32;
    if(s1 < s2) return true;
    return false;
}

int main()
{
    struct data team[100];
    string tournament, match, t, tm1, tm2, temp;
    int i, j, k, l, m, n, p, q, x, T, G;

    scanf("%d", &n);

    getchar();
    for(x = 0; x < n; x++)
    {
        getline(cin, tournament, '\n');
        cout << tournament << endl;
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

        for(i = 0; i < (T-1); i++)
        {
            for(j = 0; j < (T-i-1); j++)
            {
                if(team[j].b < team[j+1].b)
                {
                    swap(team[j].b, team[j+1].b);
                    swap(team[j].c, team[j+1].c);
                    swap(team[j].d, team[j+1].d);
                    swap(team[j].e, team[j+1].e);
                    swap(team[j].f, team[j+1].f);
                    swap(team[j].g, team[j+1].g);
                    swap(team[j].h, team[j+1].h);
                    swap(team[j].i, team[j+1].i);
                    swap(team[j].team_name, team[j+1].team_name);
                }
                else if(team[j].b == team[j+1].b)
                {
                    if(team[j].d < team[j+1].d)
                    {
                        swap(team[j].d, team[j+1].d);
                        swap(team[j].c, team[j+1].c);
                        swap(team[j].e, team[j+1].e);
                        swap(team[j].f, team[j+1].f);
                        swap(team[j].g, team[j+1].g);
                        swap(team[j].h, team[j+1].h);
                        swap(team[j].i, team[j+1].i);
                        swap(team[j].team_name, team[j+1].team_name);
                    }
                    else if(team[j].d == team[j+1].d)
                    {
                        if(team[j].g < team[j+1].g)
                        {
                            swap(team[j].g, team[j+1].g);
                            swap(team[j].c, team[j+1].c);
                            swap(team[j].e, team[j+1].e);
                            swap(team[j].f, team[j+1].f);
                            swap(team[j].h, team[j+1].h);
                            swap(team[j].i, team[j+1].i);
                            swap(team[j].team_name, team[j+1].team_name);
                        }
                        else if(team[j].g == team[j+1].g)
                        {
                            if(team[j].h < team[j+1].h)
                            {
                                swap(team[j].h, team[j+1].h);
                                swap(team[j].c, team[j+1].c);
                                swap(team[j].e, team[j+1].e);
                                swap(team[j].f, team[j+1].f);
                                swap(team[j].h, team[j+1].h);
                                swap(team[j].i, team[j+1].i);
                                swap(team[j].team_name, team[j+1].team_name);
                            }
                            else if(team[j].h == team[j+1].h)
                            {
                                if(team[j].c > team[j+1].c)
                                {
                                    swap(team[j].c, team[j+1].c);
                                    swap(team[j].e, team[j+1].e);
                                    swap(team[j].f, team[j+1].f);
                                    swap(team[j].i, team[j+1].i);
                                    swap(team[j].team_name, team[j+1].team_name);
                                }
                                else if(team[j].c == team[j+1].c)
                                {
                                    if(lexicographical_compare(team[j].team_name.begin(), team[j].team_name.end(), team[j+1].team_name.begin(), team[j+1].team_name.end(), mycmp))
                                    {
                                        swap(team[j].team_name, team[j+1].team_name);
                                        swap(team[j].e, team[j+1].e);
                                        swap(team[j].f, team[j+1].f);
                                        swap(team[j].i, team[j+1].i);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        for(k = 0; k < T; k++)
        {
            printf("%d) ", k+1);
            cout << team[k].team_name;
            printf(" %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n", team[k].b, team[k].c, team[k].d, team[k].e, team[k].f, team[k].g, team[k].h, team[k].i);
        }

		if(x != n-1)
            putchar('\n');
    }
    return 0;
}
