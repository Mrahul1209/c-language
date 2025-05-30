#include <stdio.h>

int main()
 {
    int row, col;

    printf("Enter the row: ");
    scanf("%d", &row);

    printf("Enter the col: ");
    scanf("%d", &col);

    int a[row][col];

    printf("\nMatrix Input:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal Elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i +j==row-1) 
            {
                printf("%d ", a[i][j]);
            } 
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
