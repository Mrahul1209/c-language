#include <stdio.h>

void reverse(int a[],int n)
{
    printf("reverse array :");

    for(int i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");

}

int sum(int a[],int n)
{

int sum=0;

for(int i=0;i<n;i++)
{

    sum+= a[i];
}
    return sum;
}





main()

{
    int n;

    printf("enter size array:");
    scanf("%d",&n);

    int a[n];

    printf("enter elements %d:\n",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     reverse(a,n);

    printf("sum : %d",sum(a,n));

  

}