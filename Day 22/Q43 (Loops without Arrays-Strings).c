/* Write a program to check if a number is a strong number. */
#include <stdio.h>

static int factorial(int number)
{
    int result = 1;
    while (number > 1) result *= number--;
    return result;
}

int main(void)
{
    int number, original, sum = 0;

    if (scanf("%d", &number) != 1 || number < 0) return 1;
    original = number;
    do {
        sum += factorial(number % 10);
        number /= 10;
    } while (number != 0);
    puts(sum == original ? "Strong number" : "Not strong number");
    return 0;
}
