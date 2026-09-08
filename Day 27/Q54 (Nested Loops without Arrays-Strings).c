/* Write a program to print the following pattern:\n   *\n  ***\n *****\n*******\n *****\n  ***\n   * */
#include <stdio.h>

int main(void)
{
    int row, column, spaces, width;
    for (row = 1; row <= 7; ++row) {
        width = row <= 4 ? 2 * row - 1 : 15 - 2 * row;
        spaces = row <= 4 ? 4 - row : row - 4;
        for (column = 0; column < spaces; ++column) putchar(' ');
        for (column = 0; column < width; ++column) putchar('*');
        putchar('\n');
    }
    return 0;
}
