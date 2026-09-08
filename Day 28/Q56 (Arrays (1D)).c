/* Read and print elements of a one-dimensional array. */
#include <stdio.h>

int main(void)
{
    int values[100], count, index;

    if (scanf("%d", &count) != 1 || count < 0 || count > 100) return 1;
    for (index = 0; index < count; ++index) if (scanf("%d", &values[index]) != 1) return 1;
    for (index = 0; index < count; ++index) printf("%d%c", values[index], index + 1 == count ? '\n' : ' ');
    return 0;
}
