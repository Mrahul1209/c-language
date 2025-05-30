#include <stdio.h>
#include <conio.h>

int main() {
    int num = 1,i,j;
    for ( i = 1; i <= 5
    ; i++) {
	for ( j = 1; j <= i; j++) {
            printf("%d ", num);
            if (i % 2 == 0) {
                num += (i - 2*j + 2);
            } else {
                 num += (2*j);
                 if (j < i) {
                    num -= (2*j-1);
                 }
            }
        }
        printf("\n");
        num = i+1;
    }
    return 0;
}