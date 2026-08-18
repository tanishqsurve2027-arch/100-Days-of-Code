/* Write a program to swap two numbers without using a third variable. */
#include <stdio.h>

int main(void)
{
    long long first, second;

    if (scanf("%lld %lld", &first, &second) != 2) {
        return 1;
    }
    first ^= second;
    second ^= first;
    first ^= second;
    printf("After swap: %lld %lld\n", first, second);
    return 0;
}
