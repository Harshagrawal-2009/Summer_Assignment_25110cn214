#include<stdio.h>
int main(){
int n;
int prod=1,a=0;
printf("Enter n : ");
scanf("%d",&n);
while(n!=0){
a=n%10;
prod = prod * a;
n= n/10;
}
printf("product of digits = %d",prod);
    return 0;
}
