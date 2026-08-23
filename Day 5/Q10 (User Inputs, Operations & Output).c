/* Write a program to input time in seconds and convert it to hours:minutes:seconds format. */
#include <stdio.h>

int main(void)
{
    long long total_seconds;

    if (scanf("%lld", &total_seconds) != 1 || total_seconds < 0) {
        return 1;
    }
    printf("%lld:%lld:%lld\n", total_seconds / 3600,
           (total_seconds % 3600) / 60, total_seconds % 60);
    return 0;
}
