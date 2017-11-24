#include<stdio.h>
#include<math.h>
int main()
{
    int T, i, x, y, r;
    float root, lpath, spath, c;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%d%d%d", &x, &y, &r);

        c = (((x - 0) * (x - 0)) + ((y - 0) * (y - 0)));

        root = pow(c, 0.5);

        lpath = r + root;

        if(r > root)
        {
            spath = r - root;
        }
        else
        {
            spath = root - r;
        }

        printf("%.2f %.2f\n", spath, lpath);
    }

    return 0;
}
