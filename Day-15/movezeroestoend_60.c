#include <stdio.h>

int main() {
    int a[50], n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    j = 0; // index for non-zero elements

    // Put non-zero elements first
    for(i = 0; i < n; i++) {
        if(a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }

    // Fill rest with zero
    for(i = j; i < n; i++) {
        a[i] = 0;
    }

    printf("Array after moving zeroes: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
