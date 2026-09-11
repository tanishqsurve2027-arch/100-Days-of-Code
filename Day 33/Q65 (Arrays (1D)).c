/* Search in a sorted array using binary search. */
#include <stdio.h>

int main(void)
{
    int values[100], count, target, left = 0, right, middle = -1;

    if (scanf("%d", &count) != 1 || count < 0 || count > 100) return 1;
    for (right = 0; right < count; ++right) if (scanf("%d", &values[right]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    right = count - 1;
    while (left <= right) {
        int candidate = left + (right - left) / 2;
        if (values[candidate] == target) { middle = candidate; break; }
        if (values[candidate] < target) left = candidate + 1; else right = candidate - 1;
    }
    if (middle >= 0) printf("Found at index %d\n", middle); else puts("-1");
    return 0;
}
