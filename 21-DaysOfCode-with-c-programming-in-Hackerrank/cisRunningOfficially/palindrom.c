
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int i=0;
    int j=n-1;
    int result=1; // eta palindrom hobei, hobe mane hobei
    while(i<j)
    {
        if(ar[i]!=ar[j])
        {
            result=0; // ba result=1000 ba j kono kicu dhorte pari
            break;
        }
        i++;
        j--;
    }
    if(result==1)
    {
        printf("Eta Palindrom");
    }
    else
    {
        printf("Eta Palindrom Noy");
    }

    return 0;
}



