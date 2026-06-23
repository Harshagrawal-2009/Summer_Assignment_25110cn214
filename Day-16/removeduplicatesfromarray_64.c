#include <stdio.h>

int main() {
    int a[50], n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Remove duplicates
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                // Shift elements left
                for(k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;   // reduce size
                j--;   // check again at same position
            }
        }
    }

    printf("Array after removing duplicates: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
