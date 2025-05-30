#include <stdio.h>
#include <conio.h>
main()
{

       //(x+y)^3
	int x,y,result;

	clrscr();
	printf("enter the value of x :");
	scanf("%d",&x);
	printf("enter the value of y :");
	scanf("%d",&y);

	result= (x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);

	printf("enter the result of = %d\n",result);



	getch();



}