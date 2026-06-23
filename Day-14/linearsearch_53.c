#include <stdio.h>
int main() {
    int a[10],n,val,i,pos;

    printf("Enter number of elements : ");
    scanf("%d",&n);
printf("Enter array elements :");
for(i=0; i<n; i++){
    scanf("%d",&a[i]); 
}
pos = -1;
printf("Enter value to be searched :");
scanf("%d",&val);

for(i=0; i<n; i++){
    if(a[i]==val){
        pos = i;
        break;
    }
}
if(pos == -1){
    printf("Value not found\n");
}
else{
    printf("%d is found at index %d\n",val,pos);
}
    return 0;
}