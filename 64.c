/* Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number. */

#include <stdio.h>

int main() {
    long long num, temp;
    int freq[10] = {0};
    int digit, i, max_digit = 0, max_count = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    temp = (num < 0) ? -num : num;

    if (temp == 0) {
        freq[0] = 1;
    } else {
        while (temp > 0) {
            digit = temp % 10;
            freq[digit]++;
            temp = temp / 10;
        }
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > max_count) {
            max_count = freq[i];
            max_digit = i;
        }
    }

    printf("The digit that occurs the most is: %d (appears %d times)\n", max_digit, max_count);

    return 0;
}