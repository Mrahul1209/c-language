#include <stdio.h>

int main() {
    int row, col;

    printf("Enter the row: ");
    scanf("%d", &row);

    printf("Enter the col: ");
    scanf("%d", &col);

    int a[row][col];
    int b[row][col];
    int sum[row][col];

    printf("\n\nArray A Input\n\n");

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
         {
            printf("Element of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\nArray B Input\n\n");

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("Element of b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
         {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n\nSum of A and B:\n\n");

    for (int i = 0; i < row; i++)
     {
        for (int j = 0; j < col; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
