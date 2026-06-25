#include <stdio.h>
int main(){
    int a[3][3], b[3][3], r, c, i, j;

    printf("Enter rows and columns of matrices:\n");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose the matrix
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            b[i][j] = a[j][i];
        }
    }

    printf("Transpose of the matrix:\n");
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}