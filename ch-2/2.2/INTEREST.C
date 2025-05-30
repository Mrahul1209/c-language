#include <stdio.h>
#include <conio.h>

main()

{        float principal ,rate,time,simpleinterest;
	clrscr();
	printf("enter a principal amount:");
	scanf("%f",&principal);

	printf("enter a rate interet:");
	scanf("%f",&rate);

	printf("enter a time period:");
	scanf("%f",&time);

	simpleinterest=(principal*rate*time)/100;

	printf("the simple interest is : %f\n",simpleinterest);




	getch();

}