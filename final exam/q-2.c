#include <stdio.h>

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

    printf("enter elements %d: \n",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("sum : %d",sum(a,n));

}