#include <stdio.h>

int main()
{
    int N,i,j,n=2;
    scanf("%d",&N);
    int a[N];
    int b[n];

    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0; j<n; j++)
    {
        scanf("%d",&b[j]);
    }

    for(i=N-1; i>=0; i--)
    {
        if(b[1]==10)
        {
            a[4]=b[1];
        }
        else
        {
            a[1]=b[1];
        }
        printf("%d ",a[i]);
    }




    return 0;
}
