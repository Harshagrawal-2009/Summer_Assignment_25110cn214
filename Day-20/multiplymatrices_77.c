#include <stdio.h>
int main(){
    int a[5][5], b[5][5], c[5][5], r1, c1, r2, c2, i, j, k, sum;

    printf("Enter rows and columns of first matrix:\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix:\n");
    scanf("%d %d",&r2, &c2);

    if(c1 != r2){
        printf("Matrix multiplication not possible\n");
    }
    else{
        printf("Enter elements of first matrix :\n ");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter elements of second matrix :\n ");
        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
                scanf("%d", &b[i][j]);
            }
        }
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                c[i][j] = 0;
            }
        }
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                sum = 0;
                for(k=0; k<c1; k++){
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }

        printf("Resultant matrix after multiplication:\n");
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}