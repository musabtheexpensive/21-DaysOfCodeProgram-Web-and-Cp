#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N); // Input N

    // Upper half of the pattern
    for (int i = 1; i <= N; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }
        // Print characters
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (int i = N - 1; i >= 1; i--)
    {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }
        // Print characters
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
