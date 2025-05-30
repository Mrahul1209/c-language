#include <stdio.h>
#include <conio.h>
main()

{
	 int n;
	 int rem;
	 int rev=0;
	 clrscr();
	 printf("enter your number:");
	 scanf("%d",&n);

	 while(n!=0)
	 {
	   rem = n%10;
	   rev = rev*10+rem;
	   n = n/10;
	 }
	 printf("reverve number %d",rev);

	 getch();


}