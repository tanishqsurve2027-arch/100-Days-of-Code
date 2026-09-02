/* Write a program to find the LCM of two numbers. */
#include <stdio.h>

int main(void)
{
    long long first, second, a, b, gcd, lcm;

    if (scanf("%lld %lld", &first, &second) != 2 || first == 0 || second == 0) return 1;
    a = first < 0 ? -first : first;
    b = second < 0 ? -second : second;
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    gcd = a;
    lcm = (first < 0 ? -first : first) / gcd * (second < 0 ? -second : second);
    printf("%lld\n", lcm);
    return 0;
}
