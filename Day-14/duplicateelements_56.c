#include <stdio.h>

int main() {
    int a[50], n, i, j,found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements are: ");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("%d ", a[i]);
                found = 1;
                break;
            }
        }
    }
    if(found == 0) {
        printf("No duplicate elements found.\n");
    }
    return 0;
}
