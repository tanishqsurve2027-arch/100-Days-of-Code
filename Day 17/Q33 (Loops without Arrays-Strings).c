/* Write a program to check if a number is an Armstrong number. */
#include <stdio.h>

static int power_int(int base, int exponent)
{
    int result = 1;
    while (exponent-- > 0) result *= base;
    return result;
}

int main(void)
{
    int number, original, digits = 0, sum = 0, digit;

    if (scanf("%d", &number) != 1 || number < 0) return 1;
    original = number;
    do {
        ++digits;
        number /= 10;
    } while (number != 0);
    number = original;
    do {
        digit = number % 10;
        sum += power_int(digit, digits);
        number /= 10;
    } while (number != 0);
    puts(sum == original ? "Armstrong" : "Not Armstrong");
    return 0;
}
