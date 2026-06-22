#include<stdio.h>
int main(){
int n;
int count=0;
printf("Enter n : ");
scanf("%d",&n);
while (n!=0){
n=n/10;
count++;
}
printf("number of digits  = %d",count);

    return 0;
}