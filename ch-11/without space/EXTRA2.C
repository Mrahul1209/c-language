#include <stdio.h>
#include <conio.h>

main()

{        int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
	   for(j=1;j<=i;j++)
	   {
	      if(i%2==0)
	      {
		 printf("0");
	      }
	      else
	      {
		printf("1");
	      }

	   }
		printf("\n");

	}


	getch();

}