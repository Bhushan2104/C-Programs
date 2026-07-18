#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars and inner spaces
        for (int j = 1; j <= i; j++)
        {
            // Print star at:
            // 1. First position
            // 2. Last position of the row
            // 3. Last row
            if (j == 1 || j == i || i == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}