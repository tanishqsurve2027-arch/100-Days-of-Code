/* Q52 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
* *
*   *
*     *
*       *
*     *
*   *
* *
* */

#include <stdio.h>

int main() {
    int i, space;

    /* Upper half */
    for (i = 1; i <= 5; i++) {
        printf("*");
        if (i > 1) {
            for (space = 1; space <= 2 * i - 3; space++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    /* Lower half */
    for (i = 4; i >= 1; i--) {
        printf("*");
        if (i > 1) {
            for (space = 1; space <= 2 * i - 3; space++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}