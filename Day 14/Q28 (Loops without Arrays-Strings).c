/* Write a program to print the product of even numbers from 1 to n. */
#include <stdio.h>

int main(void)
{
    unsigned long long product = 1;
    int n, number;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    for (number = 2; number <= n; number += 2) product *= (unsigned)number;
    printf("%llu\n", product);
    return 0;
}
