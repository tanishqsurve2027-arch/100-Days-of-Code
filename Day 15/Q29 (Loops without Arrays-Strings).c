/* Write a program to calculate the factorial of a number. */
#include <stdio.h>

int main(void)
{
    unsigned long long factorial = 1;
    int n, number;
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) return 1;
    for (number = 2; number <= n; ++number) factorial *= (unsigned)number;
    printf("%llu\n", factorial);
    return 0;
}
