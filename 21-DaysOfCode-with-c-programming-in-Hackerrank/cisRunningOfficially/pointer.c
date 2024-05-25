#include<stdio.h>
int main()
{
    int x=5,y=56,z=89;
    int *ptr;

    ptr=&x;
    printf("x = %d\n",*ptr);

    ptr=&y;
    printf("y = %d\n",*ptr);

    ptr=&z;
    printf("z = %d\n",*ptr);

    return 0;
}
