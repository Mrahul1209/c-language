#include <stdio.h>

main()

{
    
    printf("1Addition\n");
    printf("2Subtraction\n");
    printf("3Multiplication\n");
    printf("4Devision\n\n\n");

    int choice;
    printf("Enetr your choice:");
    scanf("%d", &choice);

    int a,b;

    printf("Enetr a number:");
    scanf("%d", &a);
    printf("Enetr b number:");
    scanf("%d", &b);

    switch (choice)
    {
    case 1:
        printf("\nAddition of %d %d is = %d\n", a, b, a + b);
        break;

    case 2:
        if (a > b)
        {
            printf("\n Subtraction of %d %d is = %d\n", a, b, a - b);
        }

        else
        {
            printf("\n Subtraction of %d %d is = %d\n", a, b, b - a);
        }
        break;
    case 3:
        printf("\n Multiplication of %d %d is = %d\n", a, b, a * b);
        break;
    case 4:
        if (a > b)
        {
            printf("\n Subtraction of %d and %d is = %d\n", a, b, a / b);
        }

        else
        {
            printf("\n Devision of %d %d is = %d\n", a, b, b / a);
        }
        break;
    default:
        printf("Invalid Choice");
        break;
    }


}