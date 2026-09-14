/* Delete an element from an array. */
#include <stdio.h>

int main(void)
{
    int values[100], count, position, index;

    if (scanf("%d", &count) != 1 || count < 1 || count > 100) return 1;
    for (index = 0; index < count; ++index) if (scanf("%d", &values[index]) != 1) return 1;
    if (scanf("%d", &position) != 1 || position < 0 || position >= count) return 1;
    for (index = position; index < count - 1; ++index) values[index] = values[index + 1];
    --count;
    for (index = 0; index < count; ++index) printf("%d%c", values[index], index + 1 == count ? '\n' : ' ');
    return 0;
}
