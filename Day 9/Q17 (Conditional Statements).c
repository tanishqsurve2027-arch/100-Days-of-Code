/* Write a program to find the roots of a quadratic equation and categorize them. */
#include <stdio.h>

int main(void)
{
    double a, b, c, discriminant;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0.0) {
        return 1;
    }
    discriminant = b * b - 4.0 * a * c;
    if (discriminant > 0.0) {
        puts("Roots are real and different");
    } else if (discriminant == 0.0) {
        puts("Roots are real and same");
    } else {
        puts("Roots are complex");
    }
    return 0;
}
