/* Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */
#include <stdio.h>

int main(void)
{
    long long first, second;
    char operation;

    if (scanf("%lld %lld %c", &first, &second, &operation) != 3) {
        return 1;
    }
    switch (operation) {
    case '+': printf("%lld\n", first + second); break;
    case '-': printf("%lld\n", first - second); break;
    case '*': printf("%lld\n", first * second); break;
    case '/':
        if (second == 0) return 1;
        printf("%lld\n", first / second); break;
    case '%':
        if (second == 0) return 1;
        printf("%lld\n", first % second); break;
    default: return 1;
    }
    return 0;
}
