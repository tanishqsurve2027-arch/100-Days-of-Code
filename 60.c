/* Q60 (Arrays (1D))
Count positive, negative, and zero elements in an array. */

#include <stdio.h>

int main() {
    int n, i;
    int pos_count = 0, neg_count = 0, zero_count = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            pos_count++;
        } else if (arr[i] < 0) {
            neg_count++;
        } else {
            zero_count++;
        }
    }

    printf("Positive numbers count: %d\n", pos_count);
    printf("Negative numbers count: %d\n", neg_count);
    printf("Zero count: %d\n", zero_count);

    return 0;
}