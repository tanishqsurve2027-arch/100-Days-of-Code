/* Q70 (Arrays (1D))
Rotate an array to the right by k positions. */

#include <stdio.h>

int main() {
    int n, k, i, j, last;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < k; i++) {
        last = arr[n - 1];
        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }

    printf("Array after rotating right by %d positions: ", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}