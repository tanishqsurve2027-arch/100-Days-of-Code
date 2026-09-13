/* Q40 (Loops without Arrays/Strings)
Write a program to find the 1's complement of a binary number and print it. */

#include <stdio.h>

int main() {
    long long binary, temp;
    long long complement = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    while (temp > 0) {
        digit = temp % 10;
        if (digit == 0) {
            complement = complement + (1 * place);
        }
        place = place * 10;
        temp = temp / 10;
    }

    printf("1's complement: %lld\n", complement);

    return 0;
}