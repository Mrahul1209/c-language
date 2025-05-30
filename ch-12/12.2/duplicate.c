#include <stdio.h>

int main() {
    int a[5] = {25, 37, 4, 25, 4};

    printf("Duplicate elements:\n");

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (a[i] == a[j]) {
                printf("%d\n", a[i]);
            }
        }
    }

    return 0;
}
