/* Write a program to find the 1’s complement of a binary number and print it. */
#include <stdio.h>

int main(void)
{
    int bit;
    int count = 0;

    bit = getchar();
    if (bit == '\n' || bit == EOF) return 1;
    while (bit != '\n' && bit != EOF) {
        if (bit != '0' && bit != '1') return 1;
        putchar(bit == '0' ? '1' : '0');
        ++count;
            bit = getchar();
    }
    if (count == 0) return 1;
    putchar('\n');
    return 0;
}
