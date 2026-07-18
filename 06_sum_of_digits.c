#include <stdio.h>

int main()
{
    int sum = 0;
    int num;
    int last_digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        last_digit = num % 10;
        sum = sum + last_digit;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);
}