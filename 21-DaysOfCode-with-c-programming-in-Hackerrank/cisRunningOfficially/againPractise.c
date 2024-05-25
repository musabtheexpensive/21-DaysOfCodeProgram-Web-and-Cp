#include <stdio.h>

int main()
{
    int N;

    // Input
    printf("Enter a 4-digit number: ");
    scanf("%d", &N);

    // Check if N is a 4-digit number
    if (N < 1000 || N > 9999)
    {
        printf("Invalid input! Please enter a 4-digit number.\n");
        return 1; // Exit the program with an error status
    }

    // Reverse the number
    int reverse = 0;
    int original = N; // Storing the original number
    while (N != 0)
    {
        int digit = N % 10;
        reverse = reverse * 10 + digit;
        N /= 10;
    }
    printf("%d \n", reverse);

    return 0; // Exit the program successfully
}
