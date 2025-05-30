#include <stdio.h>

int main() 

{
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int a[size];

    printf("\nArray Input\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nNegative Elements in Array:\n");
    for (int i = 0; i < size; i++) 
    {
        if (a[i] < 0) {
            printf("%d ", a[i]);
        }
    }

    printf("\n");

    return 0;
}
