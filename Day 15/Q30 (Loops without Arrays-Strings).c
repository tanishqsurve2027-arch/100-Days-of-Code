/* Write a program to reverse a given number. */
#include <stdio.h>

int main(void)
{
    long long number, reversed = 0;
    if (scanf("%lld", &number) != 1) return 1;
    do { reversed = reversed * 10 + number % 10; number /= 10; } while (number != 0);
    printf("%lld\n", reversed);
    return 0;
}
