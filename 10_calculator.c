#include <stdio.h>

int main()
{
    int num1, num2;
    int choice;

    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("===== Arithmetic Operations =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");

    printf("enter your choice operation number you want to perform: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Addition = %d\n", num1 + num2);
        break;

    case 2:
        printf("Subtraction = %d\n", num1 - num2);
        break;

    case 3:
        printf("Multiplication = %d\n", num1 * num2);
        break;

    case 4:
        if (num2 == 0)
        {
            printf("Division by zero is not possible.\n");
        }
        else
        {
            printf("Division = %.2f\n", (float)num1 / num2);
        }
        break;

    case 5:
        if (num2 == 0)
        {
            printf("Modulus by zero is not possible.\n");
        }
        else
        {
            printf("Modulus = %d\n", num1 % num2);
        }
        break;
    case 6:
        printf("Exiting Program.\n");
        break;

    default:
        printf("Invalid Choice!\n");
    }

    return 0;
}
