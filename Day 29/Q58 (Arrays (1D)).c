/* Find the maximum and minimum element in an array. */
#include <stdio.h>

int main(void)
{
    int count, index, value, maximum, minimum;

    if (scanf("%d", &count) != 1 || count < 1 || count > 100 || scanf("%d", &value) != 1) return 1;
    maximum = minimum = value;
    for (index = 1; index < count; ++index) {
        if (scanf("%d", &value) != 1) return 1;
        if (value > maximum) maximum = value;
        if (value < minimum) minimum = value;
    }
    printf("Max=%d, Min=%d\n", maximum, minimum);
    return 0;
}
