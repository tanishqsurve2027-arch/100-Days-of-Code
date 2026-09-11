/* Insert an element in a sorted array at the appropriate position. */
#include <stdio.h>

int main(void)
{
    int values[101], count, value, index;

    if (scanf("%d", &count) != 1 || count < 0 || count >= 100) return 1;
    for (index = 0; index < count; ++index) if (scanf("%d", &values[index]) != 1) return 1;
    if (scanf("%d", &value) != 1) return 1;
    index = count;
    while (index > 0 && values[index - 1] > value) { values[index] = values[index - 1]; --index; }
    values[index] = value;
    for (index = 0; index <= count; ++index) printf("%d%c", values[index], index == count ? '\n' : ' ');
    return 0;
}
