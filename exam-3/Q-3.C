#include <stdio.h>
#include <conio.h>


main()

{       int n,first,last,sum;
	clrscr();
	printf("enter your number:");
	scanf("%d",&n);

	last=n%10;

	while(n>=10)
	{
		n=n/10;

	}
	first=n;

	sum = first+last;

	printf("the sum of the first and last digits is : %d\n",sum);


	getch();

}