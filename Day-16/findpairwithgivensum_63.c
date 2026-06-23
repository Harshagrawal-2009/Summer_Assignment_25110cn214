#include <stdio.h>

int main() {
    int a[50], n, i, j, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the desired sum: ");
    scanf("%d", &sum);

    printf("Pairs with sum %d are:\n", sum);
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] + a[j] == sum) {
                printf("(%d, %d)\n", a[i], a[j]);
            }
        }
    }

    return 0;
}
