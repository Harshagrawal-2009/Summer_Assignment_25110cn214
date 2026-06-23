#include <stdio.h>

int main() {
    int a[50], n, i, j, maxCount = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        int count = 1; // count current element
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            element = a[i];
        }
    }

    printf("Most frequent element is %d (appears %d times)\n", element, maxCount);

    return 0;
}
