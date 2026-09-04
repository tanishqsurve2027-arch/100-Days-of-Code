/* Write a program to print the following pattern:\n1\n12\n123\n1234\n12345 */
#include <stdio.h>

int main(void)
{
    int row, column;
    for (row = 1; row <= 5; ++row) {
        for (column = 1; column <= row; ++column) printf("%d", column);
        putchar('\n');
    }
    return 0;
}
