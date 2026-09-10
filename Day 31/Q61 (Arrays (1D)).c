/* Search for an element in an array using linear search. */
#include <stdio.h>

int main(void)
{
    int values[100], count, target, index;

    if (scanf("%d", &count) != 1 || count < 0 || count > 100) return 1;
    for (index = 0; index < count; ++index) if (scanf("%d", &values[index]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    for (index = 0; index < count && values[index] != target; ++index) { }
    if (index < count) printf("Found at index %d\n", index); else puts("-1");
    return 0;
}
