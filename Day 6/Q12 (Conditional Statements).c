/* Write a program to input an integer and check whether it is positive, negative or zero using nested if–else. */
#include <stdio.h>

int main(void)
{
    long long number;

    if (scanf("%lld", &number) != 1) {
        return 1;
    }
    if (number > 0) {
        puts("Positive");
    } else if (number < 0) {
        puts("Negative");
    } else {
        puts("Zero");
    }
    return 0;
}
