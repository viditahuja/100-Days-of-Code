#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n; // handle k > n

    // Copy last k elements to temp
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift first n-k elements to right
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Place k elements from temp at the beginning
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

