#include <stdio.h>

int main()
 {
    int num, digit, max = -1, second_max = -1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
        {
        digit = num % 10;
        if (digit > max)
        {
            second_max = max;
            max = digit;
        } else if (digit > second_max && digit < max)
        {
            second_max = digit;
        }
        num /= 10;
        }
    if (second_max == -1)
     {
        printf("There is no two-digit number that can be formed\n");
     } else
    {
        printf("The greatest two-digit number is %d%d\n", max, second_max);
    }
    return 0;
}
