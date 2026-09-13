/* Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number. */

#include <stdio.h>

int main() {
    int n, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }

    printf("Sum of digits of %d is: %d\n", n, sum);

    return 0;
}