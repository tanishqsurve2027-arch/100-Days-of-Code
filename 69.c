/* Q69 (Arrays (1D))
Find the second largest element in an array. */

#include <stdio.h>

int main() {
    int n, i;
    int first, second;
    int arr[100];

    printf("Enter number of elements (minimum 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("The second largest element is: %d\n", second);

    return 0;
}