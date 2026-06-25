#include <stdio.h>
int main(){
    int a[5][5], b[5][5], sub[5][5],r,c, i, j;
    printf("Enter rows and columns of matrices:\n");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

 return 0;   
}