#include<stdio.h>

int main(){
int a[20],i,j,n,temp;
printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter array elements: ");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
//selection sort logic
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("Array after Selection Sort: ");
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
return 0;
}