#include <string.h>
#include <stdio.h>

int main()
{
    char ar[100];
    scanf("%s",&ar);
    int i=0;
    int j=strlen(ar)-1;
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




