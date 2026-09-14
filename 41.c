/* Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number. */

#include <stdio.h>

int main() {
    int n, first, last, temp, digits = 0, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }
    first = temp;

    if (divisor == 1) {
        printf("Number after swapping first and last digit: %d\n", n);
    } else {
        int middle = (n % divisor) / 10;
        int swapped = (last * divisor) + (middle * 10) + first;
        printf("Number after swapping first and last digit: %d\n", swapped);
    }

    return 0;
}