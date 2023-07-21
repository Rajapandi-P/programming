#include <stdio.h>

int main() {
    int i;
    int j;
    int rows = 9;
    int cols = 9;

    for ( i = 0; i < rows; i++) {
        if (i < 5) {
            for ( j = 0; j < cols; j++) {
                if (j < 5 - i - 1) {
                    printf(" ");
                } else if (j >= 5 - i - 1 && j <= 5 + i - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        } else {
            for (j = 0; j < cols; j++) {
                if (j < i - 4) {
                    printf(" ");
                } else if (j >= i - 4 && j <= cols - 1 - (i - 5)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
