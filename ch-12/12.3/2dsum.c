#include <stdio.h>

int main() 

{
   
     int row, col;

    printf("Enter the row: ");
    scanf("%d", &row);

    printf("Enter the col: ");
    scanf("%d", &col);

    int a[row][col];

    printf("\n\nMatrix Input\n\n");

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
         {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\nMatrix Output\n\n");

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
         {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int sum = 0;

    for (int i = 0; i < row; i++)
     {
        for (int j = 0; j < col; j++) 
        {
            sum += a[i][j];
        }
    }

    printf("\nMatrix elements sum: %d", sum);

    float average = (float)sum / (row * col);
    printf("\nMatrix average: %.2f\n", average);

    return 0; 
}
