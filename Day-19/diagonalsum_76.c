#include <stdio.h>

int main() {
    int a[10][10], i, j, r, c, sum = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal (i == j)
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(i == j) {
                sum += a[i][j];
            }
        }
    }
    printf("Sum of main diagonal = %d\n", sum);

    return 0;
}
