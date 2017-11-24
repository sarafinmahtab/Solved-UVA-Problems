#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j, count1, count2, count3;
    char word[10];
    char one[] = "one";
    char two[] = "two";
    char three[] = "three";

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        count1 = 0;
        count2 = 0;
        count3 = 0;
        scanf("%s", word);

        for(j = 0; j < strlen(word); j++)
        {
            if(one[j] != word[j])
            {
                count1++;
            }
            if(two[j] != word[j])
            {
                count2++;
            }
            if(three[j] != word[j])
            {
                count3++;
            }
        }

        if((count1 == 1) || (count1 == 0))
        {
            printf("1\n");
        }
        else if((count2 == 1) || (count2 == 0))
        {
            printf("2\n");
        }
        else if((count3 == 1) || (count3 == 0))
        {
            printf("3\n");
        }
    }

    return 0;
}
