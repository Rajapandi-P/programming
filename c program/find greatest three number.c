#include <stdio.h>

int main() {
    int num, i, digit, max = 0, count[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (i = 9; i >= 0 && max < 100; i--) {
        while (count[i]-- && max < 100) {
            max = max * 10 + i;
        }
    }

    printf("The largest three-digit number is %d\n", max);

    return 0;
}
