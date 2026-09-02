/* Write a program to find the sum of digits of a number. */
#include <stdio.h>

int main(void)
{
    long long number, sum = 0;

    if (scanf("%lld", &number) != 1) return 1;
    if (number < 0) number = -number;
    do {
        sum += number % 10;
        number /= 10;
    } while (number != 0);
    printf("%lld\n", sum);
    return 0;
}
