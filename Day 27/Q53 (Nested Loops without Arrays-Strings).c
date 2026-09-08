/* Write a program to print the following pattern:\n*\n***\n*****\n*******\n*********\n*******\n*****\n***\n* */
#include <stdio.h>

int main(void)
{
    int row, column, width;
    for (row = 1; row <= 9; ++row) {
        width = row <= 5 ? 2 * row - 1 : 19 - 2 * row;
        for (column = 0; column < width; ++column) putchar('*');
        putchar('\n');
    }
    return 0;
}
