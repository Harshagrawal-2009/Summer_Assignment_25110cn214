#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Intersection array
    int interArr[n1 < n2 ? n1 : n2]; // max possible size

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                // check if already added
                int found = 0;
                for(int m = 0; m < k; m++) {
                    if(interArr[m] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    interArr[k++] = arr1[i];
                }
            }
        }
    }

    // Print intersection
    printf("Intersection of arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", interArr[i]);
    }

    return 0;
}
