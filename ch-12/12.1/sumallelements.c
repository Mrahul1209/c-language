#include <stdio.h>

int main()
{
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    int a[size];

    printf("\n\nArray Input\n\n");

    for(int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum +=a[i];
         printf("\nArray Sum: %d\n", sum);
    }

    float avg = (float)sum / size;
    printf("Array Average: %.2f\n", avg);


    printf("\n\nArray Output\n\n");

    for(int i = 0; i < size; i++)
    {
        printf("Element %d: %d\n", i + 1, a[i]);
    }

    return 0;

}
