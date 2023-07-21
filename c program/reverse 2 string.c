#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, a, j;

    printf("Enter the input: ");
    for(i = 0; i < 10; i++) {
        scanf("%c", &str[i]);
    }
    str[10] = '\0'; // add null terminator to mark the end of the string

    printf("Enter the range: ");
    scanf("%d", &a);

    for(j = a + 1; j < strlen(str); j++) {
        printf("%c", str[j]);
    }
    for(i = 0; i <= a; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
