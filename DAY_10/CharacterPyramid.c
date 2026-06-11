#include <stdio.h>

int main()
{
    int i, j;

    // Outer loop for rows
    for(i = 1; i <= 5; i++)
    {
        // Print characters in ascending order
        for(j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }

        // Print characters in descending order
        for(j = i - 2; j >= 0; j--)
        {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}