/* Write a program to print all factors of a given number. */
#include <stdio.h>

int main(void)
{
    int number, factor;

    if (scanf("%d", &number) != 1 || number <= 0) return 1;
    for (factor = 1; factor <= number; ++factor) {
        if (number % factor == 0) printf("%d ", factor);
    }
    putchar('\n');
    return 0;
}
