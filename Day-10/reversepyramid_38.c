#include <stdio.h>

int main(){
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);

    int nst = 2*n-1;
    int nsp = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= nsp; j++){
            printf(" ");
          
        }
          nsp++;
        for(int k =  1; k <= nst; k++){
            printf("*");
        }
        nst = nst-2;
        printf("\n");

    } 
    return 0;
}