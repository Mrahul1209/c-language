#include <stdio.h>

int main() {
    int a[5] = {25, 37, 4, 25, 4}; 
    int duplicate;

    printf("Unique elements:\n");

    for (int i = 0; i < 5; i++) {
        duplicate = 0;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                duplicate = 1;
            }
        }

        if (duplicate == 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
