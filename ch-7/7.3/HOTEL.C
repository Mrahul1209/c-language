#include <stdio.h>
#include <conio.h>

main()

{
	int n;
	char ch;
	clrscr();
	printf("\n\nwelcome to my hotel\n\n");


	printf("press 1 for punjabi\n");
	printf("press 2 for south indian\n");
	printf("press 3 for gujarati\n");

	scanf("%d",&n);


	switch(n)
	{
		case 1:
		clrscr();
		printf("punjabi menu\n");

		printf(" press A for kaju paneer\n");
		printf("press B for paneer handi\n");
		printf("press C for butter paneer\n");

		fflush(stdin);
		scanf("%c",&ch);

	       switch(ch)
	       {
			case 'A':
			case 'a':
			clrscr();
			printf("your order is kaju paneer ready\n");
			break;

			case 'B':
			case 'b':
			clrscr();
			printf("your order is paneer handi ready\n");
			break;

			case 'C':
			case 'c':
			clrscr();
			printf("your order is butter paneer ready\n");


	       }


		break;

		case 2:
		clrscr();
		printf("south indian menu\n");

		printf("press A for dhosa\n");
		printf("press B for eddali\n");
		printf("press C for rasam\n");

		fflush(stdin);
		scanf("%c",&ch);

		   switch(ch)
	       {
			case 'A':
			case 'a':
			clrscr();
			printf("your order is dhosa ready\n");
			break;

			case 'B':
			case 'b':
			clrscr();
			printf("your order is eddali ready\n");
			break;

			case 'C':
			case 'c':
			clrscr();
			printf("your order is rasam ready\n");


	       }


		break;

		case 3:
		clrscr();
		printf("gujarati menu\n");

		printf("press A for ras puri\n");
		printf("press B for khaman dhokla\n");
		printf("press C for jalebi fafda\n");

		fflush(stdin);
		scanf("%c",&ch);

				   switch(ch)
	       {
			case 'A':
			case 'a':
			clrscr();
			printf("your order is ras puri ready\n");
			break;

			case 'B':
			case 'b':
			clrscr();
			printf("your order is khaman dhokla ready\n");
			break;

			case 'C':
			case 'c':
			clrscr();
			printf("your order is jalebi fafda ready\n");
			break;

			default :
			clrscr();
			printf("invalid choice!!");


	       }



		break;




	}

	getch();

}