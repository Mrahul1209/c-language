#include <stdio.h>

int main()
{
    int size;

    printf("Enter your size: ");
    scanf("%d", &size);

    int a[size];

    printf("\n\nArray Input\n\n");

    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] > a[j]) {
                int n = a[i];
                a[i] = a[j];
                a[j] = n;
            }
        }
    }
    printf("\n\n array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
