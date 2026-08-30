/* Write a program to check if a number is a palindrome. */
#include <stdio.h>

int main(void)
{
    long long number, original, reversed = 0;

    if (scanf("%lld", &number) != 1 || number < 0) return 1;
    original = number;
    do {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    } while (number != 0);
    puts(original == reversed ? "Palindrome" : "Not palindrome");
    return 0;
}
