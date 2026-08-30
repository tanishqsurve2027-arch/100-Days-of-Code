/* Write a program to take a number as input and print its equivalent binary representation. */
#include <stdio.h>

int main(void)
{
    unsigned long long number, place = 1, binary = 0;

    if (scanf("%llu", &number) != 1) return 1;
    if (number == 0) {
        puts("0");
        return 0;
    }
    while (number > 0) {
        binary += (number % 2) * place;
        number /= 2;
        place *= 10;
    }
    printf("%llu\n", binary);
    return 0;
}
