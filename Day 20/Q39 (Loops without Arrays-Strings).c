/* Write a program to find the product of odd digits of a number. */
#include <stdio.h>

int main(void)
{
    long long number, product = 1;
    int digit;

    if (scanf("%lld", &number) != 1) return 1;
    if (number < 0) number = -number;
    do {
        digit = (int)(number % 10);
        if (digit % 2 != 0) product *= digit;
        number /= 10;
    } while (number != 0);
    printf("%lld\n", product);
    return 0;
}
