#include <stdio.h>

int main()

{
        int row,col;

        printf("enter the row:");
        scanf("%d",&row);

        printf("enter the col:");
        scanf("%d",&col);

        int a[row][col];


        printf("\n\n array input \n\n");

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                printf("elements a[%d][%d]",i,j);
                scanf("%d",&a[i][j]);
            }
        }

       int rownum;

        printf("enter the row number:");
        scanf("%d",&rownum);

        int rowsum=0;
        for(int j=0;j<col;j++)
        {
            printf("%d",a[rownum][j]);
            rowsum+=a[rownum][j];
        }

        printf("\n row sum %d\n",rowsum);

         int colnum;

        printf("enter the col number:");
        scanf("%d",&colnum);

        int colsum=0;
        for(int i=0;i<col;i++)
        {
            printf("%d",a[colnum][i]);
            colsum+=a[colnum][i];
        }

        printf("\n col sum %d\n",colsum);
        
        

}

