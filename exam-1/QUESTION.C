
#include <stdio.h>
#include <conio.h>
main()

{

	float basic_salary,hra,da,ta,gros_salary;

	clrscr();
	printf("enter the basicsalary:");
	scanf("%f",basic_salary);

	hra=basic_salary* 10/100;
	da=basic_salary* 5/100;
	ta=basic_salary* 8/100;

	gros_salary=basic_salary+hra+da+ta;

	printf("enter the total sarary of = %f",gros_salary);




	getch();



}
