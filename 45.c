/* Q45 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. */

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        float num = 2.0 * i;
        float den = 4.0 * i - 1.0;
        sum = sum + (num / den);
    }

    printf("Sum of the series up to %d terms: %.4f\n", n, sum);

    return 0;
}