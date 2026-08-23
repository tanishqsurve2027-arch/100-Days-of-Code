/* Write a program to calculate simple and compound interest for given principal, rate, and time. */
#include <stdio.h>

int main(void)
{
    double principal, rate, time, compound_interest = 0.0;
    int year;

    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3 ||
        principal < 0.0 || rate < 0.0 || time < 0.0) {
        return 1;
    }
    compound_interest = principal;
    for (year = 0; year < (int)time; ++year) {
        compound_interest *= 1.0 + rate / 100.0;
    }
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n",
           principal * rate * time / 100.0, compound_interest - principal);
    return 0;
}
