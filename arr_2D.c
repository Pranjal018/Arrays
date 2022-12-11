#include <stdio.h>
#define row 4
#define col 4
int main()
{
    int mat[row][col], i, j;
    printf("enter elements of matrix:\n",row,col);
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &mat[i][j]);

    printf("the matrix you have entered is :");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf(" %d ", mat[i][j]);
        printf("\n");
    }
    printf("\n");
}