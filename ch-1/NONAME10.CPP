#include <stdio.h>
#include <conio.h>
#define PI 3.14

main()
{
	float redius,perimeter;
	clrscr();

	printf("enter a redius");
	scanf("%f",&redius);

	perimeter=2*PI*redius;

	printf("the area of the circle is: %f",perimeter);






	getch();
}