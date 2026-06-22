#include<stdio.h>
int main(){
int n;
int sum=0,a;
printf("Enter n : ");
scanf("%d",&n);
while(n!=0){
a=n%10;
sum = sum + a;
n= n/10;
}
printf("sum of digits = %d",sum);
    return 0;
}