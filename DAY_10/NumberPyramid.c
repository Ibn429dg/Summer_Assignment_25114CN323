#include <stdio.h>

int main()
{
    int i, j;

    // Outer loop for rows
    for(i = 1; i <= 5; i++)
    {
        // Print increasing numbers
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // Print decreasing numbers
        for(j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}