/* Q32 (Loops without Arrays/Strings)
Write a program to check if a number is a palindrome. */

#include <stdio.h>

int main() {
    int n, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (n == rev) {
        printf("%d is a Palindrome.\n", n);
    } else {
        printf("%d is not a Palindrome.\n", n);
    }

    return 0;
}