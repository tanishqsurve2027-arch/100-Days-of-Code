/* Reverse an array without taking extra space. */
#include <stdio.h>

int main(void)
{
    int values[100], count, index, temporary;

    if (scanf("%d", &count) != 1 || count < 0 || count > 100) return 1;
    for (index = 0; index < count; ++index) if (scanf("%d", &values[index]) != 1) return 1;
    for (index = 0; index < count / 2; ++index) {
        temporary = values[index];
        values[index] = values[count - index - 1];
        values[count - index - 1] = temporary;
    }
    for (index = 0; index < count; ++index) printf("%d%c", values[index], index + 1 == count ? '\n' : ' ');
    return 0;
}
