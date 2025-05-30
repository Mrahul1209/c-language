#include <stdio.h>
#include <conio.h>

main()

{
	float salary,hra,da,ta,gross_salary;

	clrscr();
	printf("enter the salary");
	scanf("%f",&salary);
	hra=salary*10/100;

	da=salary*5/100;
	ta=salary*8/100;

	gross_salary=salary+hra+da+ta;

	printf("enter the salary of = %f",gross_salary);



	getch();






}