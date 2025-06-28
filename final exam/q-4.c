#include <stdio.h>
void cube(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        *(a+i)=(*(a+i))*(*(a+i))*(*(a+i));
    }
}

void array(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",*(a+i));
    }
    printf("\n");
}

main()

{

    int n;

    printf("enter your size :");
    scanf("%d",&n);

    int a[n];

    printf("enter %d elements :\n",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("array :");
    array(a,n);

    cube(a,n);

    printf("cube:\t");
    array(a,n);

}