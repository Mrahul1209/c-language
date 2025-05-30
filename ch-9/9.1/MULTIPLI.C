
#include <stdio.h>
#include <conio.h>
main()

{       int n;
	int a=1;
	clrscr();
	printf("enter your number:");
	scanf("%d",&n);
	while(a<=10)
	{
	     printf("%d*%d=%d\n",n,a,a*n);
	     a++;

	}




	getch();


}