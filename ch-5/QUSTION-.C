#include <stdio.h>
#include <conio.h>

main()
{       int a,b;
	clrscr();
	printf("enter the value of a:");
	scanf("%d",&a);

	printf("enter the value of a:");
	scanf("%d",&b);

     /*  a=a*b;
	b=a/b;
	a=a/b;*/

	a=a^b;
	b=a^b;
	a=a^b;

	printf("enter the swapping value of a= %d b= %d",a,b);

	getch();








}