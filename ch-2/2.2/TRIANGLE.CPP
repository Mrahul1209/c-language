#include <stdio.h>
#include <conio.h>

main()
{

	 float base,height,area;

	clrscr();
	printf("enter the base of triangle");
	scanf("%f",&base);
	printf("enter the height of triangle");
	scanf("%f",&height);

	area=0.5*base*height;

	printf("the are of triangle is: %f\n",area);











	getch();
}