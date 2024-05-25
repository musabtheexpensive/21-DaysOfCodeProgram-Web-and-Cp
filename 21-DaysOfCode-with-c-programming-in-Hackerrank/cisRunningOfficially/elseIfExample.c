#include <stdio.h>

int main() {
    float score;

    // Prompt the user to enter the score
    printf("Enter the score: ");
    scanf("%f", &score);

    // Check the score range and assign the grade
    if (score >= 90) {
        printf("Grade: A+\n");
    } else if (score >= 75) {
        printf("Grade: A-\n");
    } else if (score >= 70) {
        printf("Grade: B\n");
    } else if (score >= 65) {
        printf("Grade: B-\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
