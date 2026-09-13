/* Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n. */

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int found_even = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product = product * i;
        found_even = 1;
    }

    if (found_even) {
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    } else {
        printf("No even numbers in the range 1 to %d.\n", n);
    }

    return 0;
}