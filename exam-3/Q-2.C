#include <stdio.h>
#include <conio.h>

main()

{       long
int n,count=0;
	clrscr();
	printf("enter your number:");
	scanf("%ld",&n);

	while(n!=0)
	{
	 n=n/10;
	 count++;
	}
	printf("total digit is : %ld\n",count);


	getch();

}