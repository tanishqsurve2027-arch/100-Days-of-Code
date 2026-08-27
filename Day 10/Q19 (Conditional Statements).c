/* Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths. */
#include <stdio.h>

int main(void)
{
    double first, second, third;

    if (scanf("%lf %lf %lf", &first, &second, &third) != 3 ||
        first <= 0.0 || second <= 0.0 || third <= 0.0 ||
        first + second <= third || first + third <= second || second + third <= first) {
        return 1;
    }
    if (first == second && second == third) {
        puts("Equilateral");
    } else if (first == second || first == third || second == third) {
        puts("Isosceles");
    } else {
        puts("Scalene");
    }
    return 0;
}
