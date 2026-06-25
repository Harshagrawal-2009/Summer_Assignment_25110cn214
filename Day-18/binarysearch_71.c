#include<stdio.h>
int main(){
    int a[20], n, i, f, l, m, val;
    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("Enter array elements :");   
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter value to be searched :");
    scanf("%d",&val);
    f=0,l=n-1;
    while(f<=l){
        m=(f+l)/2;
        if(a[m]==val){
            printf("Element found at position %d",m+1);
            break;
        }
        else if(a[m]<val){
            f=m+1;
        }
        else{
            l=m-1;
        }
    }
    if(f>l){
        printf("Element not found");
    }
return 0;
}
