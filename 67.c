/* Q67 (Arrays (1D))
Insert an element in an array at a given position. */

#include <stdio.h>

int main() {
    int n, i, key, pos;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);
    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = key;
        n++;

        printf("Array after insertion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}