#include<stdio.h>
int main()
{
    char ch[100];

    while(scanf ("%[^\n]%*c", ch) != EOF)
    {
        printf("%s\n", ch);
    }
    return 0;
}
/* scanf ("%[^\n]%*c", name);
The [] is the scanset character. [^\n] tells that while the input is not a newline ('\n') take input.
Then with the %*c it reads the newline character from the input buffer (which is not read), and
the * indicates that this read in input is discarded (assignment suppression), as you do not need it,
and this newline in the buffer does not create any problem for next inputs that you might take. */
