#include <stdio.h>

int main()
{
    char ch[3][10];
    int i;
    for(i=0; i<3; i++)
    {
        scanf("%s",ch[i]);
    }
    for(i=0; i<3; i++)
    {
        printf("%s\n",ch[i]);
    }
    return 0;
}



