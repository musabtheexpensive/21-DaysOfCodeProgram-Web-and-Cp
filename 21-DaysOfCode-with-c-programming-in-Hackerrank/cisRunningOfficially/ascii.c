#include <stdio.h>

int main()
{
    char ch='x';
    printf("%c\n",ch);
    printf("%d\n\n",ch);

    int ascii;
    for(ascii=0; ascii<256; ascii++)
    {
        if (ascii != 7)   // Skip printing ASCII value 7
        {
            printf("Ascii - %d : %c\n", ascii, ascii);
        }
    }
    return 0;
}

