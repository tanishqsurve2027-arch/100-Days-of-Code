/* Write a program to calculate electricity bill based on units consumed with these rates: First 100 units at ₹5/unit; Next 100 units at ₹7/unit; Next 100 units at ₹10/unit; Above at ₹12/unit. */
#include <stdio.h>

int main(void)
{
    int units;
    long long bill;

    if (scanf("%d", &units) != 1 || units < 0) {
        return 1;
    }
    if (units <= 100) {
        bill = units * 5LL;
    } else if (units <= 200) {
        bill = 500LL + (units - 100) * 7LL;
    } else if (units <= 300) {
        bill = 1200LL + (units - 200) * 10LL;
    } else {
        bill = 2200LL + (units - 300) * 12LL;
    }
    printf("Bill: Rs. %lld\n", bill);
    return 0;
}
