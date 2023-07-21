#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 9;
    int i;
    int j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (j < rows - i - 1) {
                printf(" ");
            } else if (j >= rows - i - 1 && j <= rows + i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
