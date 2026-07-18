#include <stdio.h>

int main()
{
    int n;

    printf("enter number of rows:  ");
    scanf("%d", &n);

    // outer loops runs n times ..i.e ->how many rows we want to print
    for (int i = 1; i <= n; i++)
    {
        // print stars
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}