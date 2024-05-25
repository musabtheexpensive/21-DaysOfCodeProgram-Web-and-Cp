#include <stdio.h>

// or operator example
int main() {
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);

    if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u') {
        printf("vowel\n");
    } else {
        printf("consonant\n");
    }

    return 0;
}

// and operator example
/*
int main() {
    char chr;
    printf("Enter a word or number: ");
    scanf("%c", &chr);

    if(chr>='0'&& chr <='9') {
        printf("digit\n");
    } else {
        printf("not a digit\n");
    }

    return 0;
}
*/

