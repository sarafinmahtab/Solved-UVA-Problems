#include<stdio.h>
#include<math.h>
int main()
{
    int i, count;
    long int a, b;
    double root;

    while(scanf("%li %li", &a, &b) != EOF)
    {
        if((a == 0) && (b == 0))
        {
            break;
        }
        else
        {
            count = 0;
            for(i = a; i <= b; i++)
            {
                root = pow(i, 0.5);

                if((long int)root * (long int)root == i)
                {
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
