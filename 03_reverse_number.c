#include <stdio.h>

int main()
{
    int num, reverse = 0, last_digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        last_digit = num % 10;
        reverse = reverse * 10 + last_digit;
        num = num / 10;
    }
    printf("Reverse number = %d", reverse);
    return 0;
}