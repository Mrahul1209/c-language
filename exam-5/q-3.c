#include <stdio.h>

int main()

{
    int row,col;

    printf("enter the row:");
    scanf("%d",&row);

    printf("enter the col:");
    scanf("%d",&col);

    int a[row][col];
    int trans[row][col];

    printf("\n\n Array input \n\n");

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("elements a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
            trans[j][i]=a[i][j];
        }
    }

    printf("original matrix:\n");

     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

     printf("transpose matrix:\n");

     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d",trans[i][j]);
        }
        printf("\n");
    }




}