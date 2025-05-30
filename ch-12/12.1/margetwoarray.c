#include <stdio.h>

int main()
{
    int size1, size2;

    printf("Enter your size1: ");
    scanf("%d", &size1);

    printf("Enter your size2: ");
    scanf("%d", &size2);

    int a[size1];
    int b[size2];
    int marge[size1 + size2];

    printf("\n\nArray A input\n\n");
    for (int i = 0; i < size1; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\nArray B input\n\n");
    for (int i = 0; i < size2; i++)
    {
        printf("Enter b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size1; i++)
    {
        marge[i] = a[i];
    }

    for (int i = 0; i < size2; i++)
    {
        marge[size1 + i] = b[i];
    }

    printf("\n\nMerged array:\n\n");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d\t", marge[i]);
    }

    return 0;
}
 

