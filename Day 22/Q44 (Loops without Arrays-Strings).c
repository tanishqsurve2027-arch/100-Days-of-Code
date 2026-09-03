/* Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. */
#include <stdio.h>

int main(void)
{
    int terms, term;
    double sum = 0.0;

    if (scanf("%d", &terms) != 1 || terms < 0) return 1;
    for (term = 1; term <= terms; ++term) {
        sum += (double)(2 * term - 1) / (2 * term);
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
