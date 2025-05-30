#include <stdio.h>

int main()
{
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int array[size];

    printf("\n\nArray Input\n\n");

    for(int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n\nArray Output\n\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}
