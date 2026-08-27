/* Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 90-100: Grade A, 80-89: Grade B, 70-79: Grade C, 60-69: Grade D, below 60: Grade F. */
#include <stdio.h>

int main(void)
{
    int percentage;

    if (scanf("%d", &percentage) != 1 || percentage < 0 || percentage > 100) {
        return 1;
    }
    if (percentage >= 90) {
        puts("Grade A");
    } else if (percentage >= 80) {
        puts("Grade B");
    } else if (percentage >= 70) {
        puts("Grade C");
    } else if (percentage >= 60) {
        puts("Grade D");
    } else {
        puts("Grade F");
    }
    return 0;
}
