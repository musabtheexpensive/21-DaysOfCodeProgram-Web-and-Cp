
#include <stdio.h>

int main()
{
    int table[10][10];
    int i,j,n;
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            table[i-1][j-1]=i*j;
        }
    }
    printf("enter any number to see specific namota:");
    scanf("%d",&n);
    for(j=1; j<=10; j++)
    {
        printf("%d * %d = %d\n", n, j, table[n-1][j-1]); // ইনডেক্সিং শুরু হচ্ছে ০ থেকে, তাই n-1 এবং j-1 ব্যবহার করা হলো
    }
    return 0;
}

