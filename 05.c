//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float c;

    printf("Enter Celsius: ");
    scanf("%f", &c);

    float f = (c * 1.8) + 32;

    printf("Fahrenheit: %.1f\n", f);

    return 0;
}