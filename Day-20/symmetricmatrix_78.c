#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int symmetric = 1; // assume true

    printf("Enter rows and columns of matrix:\n");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Symmetry check (only valid if square matrix)
    if(r != c) {
        printf("Not symmetric (matrix is not square)\n");
    } else {
        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                if(a[i][j] != a[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
        }
        if(symmetric==1)
            printf("Symmetric matrix\n");
        else
            printf("Not symmetric matrix\n");
    }

    return 0;
}
