/* Merge two arrays. */
#include <stdio.h>

int main(void)
{
    int first[100], second[100], first_count, second_count, index;

    if (scanf("%d", &first_count) != 1 || first_count < 0 || first_count > 100) return 1;
    for (index = 0; index < first_count; ++index) if (scanf("%d", &first[index]) != 1) return 1;
    if (scanf("%d", &second_count) != 1 || second_count < 0 || first_count + second_count > 100) return 1;
    for (index = 0; index < second_count; ++index) if (scanf("%d", &second[index]) != 1) return 1;
    for (index = 0; index < first_count; ++index) printf("%d ", first[index]);
    for (index = 0; index < second_count; ++index) printf("%d%c", second[index], index + 1 == second_count ? '\n' : ' ');
    return 0;
}
