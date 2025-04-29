#include <stdio.h>
#include <conio.h>

main()

{       int n,count=0;
	clrscr();
	printf("enter your number:");
	scanf("%d",&n);

	while(n!=0)
	{
	 n=n/10;
	 count++;
	}
	printf("total digit is : %d\n",count);


	getch();

}