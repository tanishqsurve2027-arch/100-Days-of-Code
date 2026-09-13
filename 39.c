/* Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number. */

#include <stdio.h>

int main() {
    int num, temp, digit;
    long long product = 1;
    int has_odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = (num < 0) ? -num : num;

    if (temp == 0) {
        printf("No odd digits found.\n");
        return 0;
    }

    while (temp > 0) {
        digit = temp % 10;
        if (digit % 2 != 0) {
            product = product * digit;
            has_odd = 1;
        }
        temp = temp / 10;
    }

    if (has_odd) {
        printf("Product of odd digits: %lld\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}