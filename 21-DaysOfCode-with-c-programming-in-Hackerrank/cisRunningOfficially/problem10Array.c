#include <stdio.h>

void print_even_indexes_reverse(int N, int A[])
{
    // Start from the second last even index
    for (int i = N - 2; i >= 0; i -= 2)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    int N;
    // Input N
    scanf("%d", &N);

    int A[N];
    // Input array A
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Call the function to print even indexes in reverse
    print_even_indexes_reverse(N, A);

    return 0;
}
