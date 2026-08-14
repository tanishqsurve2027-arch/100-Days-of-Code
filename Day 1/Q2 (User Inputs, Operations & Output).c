/* Write a program to input two numbers and display their sum, difference, product, and quotient. */
#include <stdio.h>

int main(void)
{
    long long first, second;

    if (scanf("%lld %lld", &first, &second) != 2) {
        return 1;
    }
    printf("Sum=%lld, Diff=%lld, Product=%lld, ", first + second,
           first - second, first * second);
    if (second == 0) {
        printf("Quotient=undefined\n");
    } else {
        printf("Quotient=%lld\n", first / second);
    }
    return 0;
}
