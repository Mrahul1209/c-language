#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

float divide(int a,int b)
{
    if(b!=0)
    {
        return a/b;
    }
    else
    {
        printf("devide by zero is not alowed \n");
    }
}

int modulus(int a,int b)
{
    if(b!=0)
    {
        return a%b;
    }
    else
    {
        printf("modulus by zero is not alowed \n");
    }
}

main()

{
    int choice,num1,num2;

    while(1)
    {
        printf("press 1 for +\n");
        printf("press 2 for -\n");
        printf("press 3 for *\n");
        printf("press 4 for /\n");
        printf("press 5 for %%\n");
        printf("press 0 for exit\n");

        printf("enter your choice :0");
        scanf("%d",&choice);


        if(choice == 0)
        {
            break;
        }

        printf("enter the first number :");
        scanf("%d",&num1);

        printf("enter the second number :");
        scanf("%d",&num2);


        switch (choice)
        {
        case 1:
            printf("Adition of %d and %d is %d\n",num1,num2, add(num1,num2));
            break;
        case 2:
            printf("subtration of %d and %d is %d\n",num1,num2, sub(num1,num2));
            break;
        case 3:
            printf("multiplication of %d and %d is %d\n",num1,num2, mul(num1,num2));
            break;
        case 4:
            printf("division of %d and %d is %.2f\n",num1,num2, divide(num1,num2));
            break;
        case 5:
            printf("modulus of %d and %d is %d\n",num1,num2, modulus(num1,num2));
            break;
        default:
            printf("invalid choice please try again\n");
            break;
        }
    }

    }
