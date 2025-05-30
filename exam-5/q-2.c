#include <stdio.h>

int main()

{

    int row,col;

    printf("enter the row:");
    scanf("%d",&row);

    printf("enter the col:");
    scanf("%d",&col);

    int a[row][col];

    printf("\n\n Array input \n\n");

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("elements a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    int max=a[0][0];
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];            
            }
        }
    }

    printf("the largest number is %d\n",max);


}