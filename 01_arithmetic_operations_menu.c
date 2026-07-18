#include <stdio.h>

int main()
{
    int choice;
    int num1, num2;

    do
    {
        printf("\n===== Arithmetic Operations =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Addition = %d\n", num1 + num2);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Subtraction = %d\n", num1 - num2);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Multiplication = %d\n", num1 * num2);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);

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
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);

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

    } while (choice != 6);

    return 0;
}