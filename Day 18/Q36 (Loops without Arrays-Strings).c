/* Write a program to find the HCF (GCD) of two numbers. */
#include <stdio.h>

int main(void)
{
    long long first, second, remainder;

    if (scanf("%lld %lld", &first, &second) != 2) return 1;
    if (first < 0) first = -first;
    if (second < 0) second = -second;
    while (second != 0) {
        remainder = first % second;
        first = second;
        second = remainder;
    }
    printf("%lld\n", first);
    return 0;
}
