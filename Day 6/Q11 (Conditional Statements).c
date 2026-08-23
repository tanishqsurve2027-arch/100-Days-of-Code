/* Write a program to input an integer and check whether it is even or odd using if–else. */
#include <stdio.h>

int main(void)
{
    long long number;

    if (scanf("%lld", &number) != 1) {
        return 1;
    }
    printf("%lld is %s\n", number, number % 2 == 0 ? "even" : "odd");
    return 0;
}
