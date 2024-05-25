#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int ages[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ages[i]);
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (ages[j] > ages[j + 1])
            {
                int temp = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = temp;
            }
        }
    }

    if (N % 2 == 0)
    {
        printf("%d %d\n", ages[N/2 - 1], ages[N/2]);
    }
    else
    {
        printf("%d\n", ages[N/2]);
    }

    return 0;
}
