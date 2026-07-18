#include <stdio.h>

int main()
{
    int n;
    int counter = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }
    return 0;
}