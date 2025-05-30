#include <stdio.h>

int main() {
    int r_size, c_size;

    printf("Enter your row size: ");
    scanf("%d", &r_size);

    printf("Enter your column size: ");
    scanf("%d", &c_size);

    int a[r_size][c_size];

    printf("\nArray Input\n");

    for (int i = 0; i < r_size; i++) {
        for (int j = 0; j < c_size; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nArray Output\n");

    for (int i = 0; i < r_size; i++) {
        for (int j = 0; j < c_size; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
