#include <stdio.h>

int main()

{
    int n;
    printf("enter your number of elements:");
    scanf("%d",&n);

    int a[n],b[n],sum[n];

    printf("\n\narray  a input\n\n");

    for(int i=0;i<n;i++)
    {
        printf("enter your elements a[%d]",i);
        scanf("%d",&a[i]);
    }

     printf("\n\narray  b input\n\n");

    for(int i=0;i<n;i++)
    {
        printf("enter your elements b[%d]",i);
        scanf("%d",&b[i]);
    }

    for(int i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];
        printf("\n\narray a and b sum\n\n");
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",sum[i]);
    }



}