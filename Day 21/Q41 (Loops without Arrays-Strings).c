/* Write a program to swap the first and last digit of a number. */
#include <stdio.h>

int main(void)
{
    long long number, power = 1, first, last, middle;

    if (scanf("%lld", &number) != 1 || number < 0) return 1;
    if (number < 10) { printf("%lld\n", number); return 0; }
    while (number / power >= 10) power *= 10;
    first = number / power;
    last = number % 10;
    middle = (number % power) / 10;
    printf("%lld\n", last * power + middle * 10 + first);
    return 0;
}
