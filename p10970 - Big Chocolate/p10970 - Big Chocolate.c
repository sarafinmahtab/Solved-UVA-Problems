#include<stdio.h>
int main()
{
    int row, column, min_piece;

    while(scanf("%d%d", &row, &column) != EOF)
    {
        min_piece = ((row*column) -1);
        printf("%d\n", min_piece);
    }

    return 0;
}
