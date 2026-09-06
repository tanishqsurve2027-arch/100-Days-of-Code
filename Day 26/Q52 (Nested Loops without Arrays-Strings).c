/* Write a program to print the following pattern: *; * * *; * * * * *; * * *; *. */
#include <stdio.h>

int main(void)
{
    const int stars[] = {1, 3, 5, 3, 1};
    int row, column;
    for (row = 0; row < 5; ++row) {
        for (column = 0; column < stars[row]; ++column) putchar('*');
        putchar('\n');
    }
    return 0;
}
