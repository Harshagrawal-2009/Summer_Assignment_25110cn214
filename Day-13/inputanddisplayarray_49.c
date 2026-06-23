#include <stdio.h>

int main(){

    int a[10],n,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("The elements are: ");
    for(i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}