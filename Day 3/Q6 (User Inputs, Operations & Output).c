/* Write a program to swap two numbers using a third variable. */
#include <stdio.h>

int main(void)
{
    long long first, second, temporary;

    if (scanf("%lld %lld", &first, &second) != 2) {
        return 1;
    }
    temporary = first;
    first = second;
    second = temporary;
    printf("After swap: %lld %lld\n", first, second);
    return 0;
}
