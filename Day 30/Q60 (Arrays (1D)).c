/* Count positive, negative, and zero elements in an array. */
#include <stdio.h>

int main(void)
{
    int count, index, value, positive = 0, negative = 0, zero = 0;

    if (scanf("%d", &count) != 1 || count < 0 || count > 100) return 1;
    for (index = 0; index < count; ++index) {
        if (scanf("%d", &value) != 1) return 1;
        if (value > 0) ++positive; else if (value < 0) ++negative; else ++zero;
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    return 0;
}
