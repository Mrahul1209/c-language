#include <stdio.h>
#include <conio.h>

main()

{        int a,n;
	clrscr();
	printf("enter your year:");
	scanf("%d %d",&a,&n);

	while(a<=n)
	{
	  if(a%4==0)
	  {
	    printf("%d\t",a);
	  }
	  a++;

	}


	getch();


}