#include <stdio.h>

int main() {
    int a[50], n, i;
    int sum = 0, total, missing;

    printf("Enter the size of array (n): ");
    scanf("%d", &n);

    printf("Enter %d elements (from 1 to %d, with one missing): ", n - 1,n);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    // Sum of first n natural numbers
    total = n * (n + 1) / 2;

    // Missing number
    missing = total - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}
