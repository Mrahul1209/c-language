#include <stdio.h>
#include <conio.h>

main()

{        int n;
	clrscr();
	printf("press 1 for sunday\n");
	printf("press 2 for monday\n");
	printf("press 3 for tuesday\n");
	printf("press 4 for wednsday\n");
	printf("press 5 for thursday\n");
	printf("press 6 for friday\n");
	printf("press 7 for saturday\n");

	printf("enter your choice:");
	scanf("%d",&n);

	switch(n)
	{
		case 1:
		clrscr();
		printf("today is sunday");
		break;

		case 2:
		clrscr();
		printf("today is monday");
		break;

		case 3:
		clrscr();
		printf("today is tuesday");
		break;

		case 4:
		clrscr();
		printf("today is wednsday");
		break;

		case 5:
		clrscr();
		printf("today is thursday");
		break;

		case 6:
		clrscr();
		printf("today is friday");
		break;

		case 7:
		clrscr();
		printf("today is saturday");
		break;

		default:
		clrscr();
		printf("invalid choice");
		break;

	}
	getch();


}