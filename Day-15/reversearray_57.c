#include <stdio.h>

int main(){
    int a[10],n;

    printf("Enter number of elements :");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Reverse of the array is : \n");
    for(int i =n-1; i>=0; i--){
        printf("%d\t",a[i]);
    }
    return 0;
}