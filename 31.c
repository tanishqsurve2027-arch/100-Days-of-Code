/* Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation. */

#include <stdio.h>

int main() {
    int n, rem;
    long long binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary representation: 0\n");
    } else {
        int temp = n;
        while (temp > 0) {
            rem = temp % 2;
            binary = binary + (rem * place);
            place = place * 10;
            temp = temp / 2;
        }
        printf("Binary representation of %d is: %lld\n", n, binary);
    }

    return 0;
}