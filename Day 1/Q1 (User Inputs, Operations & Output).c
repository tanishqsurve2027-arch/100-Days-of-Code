/* Write a program to input two numbers and display their sum. */
#include <stdio.h>

int main(void)
{
    long long first, second;

    if (scanf("%lld %lld", &first, &second) != 2) {
        return 1;
    }
    printf("Sum = %lld\n", first + second);
    return 0;
}
