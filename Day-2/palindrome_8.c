#include<stdio.h>
int main(){
    int n ;
    int a;
    int r = 0;
    printf("Enter n : ");
    scanf("%d",&n);  
    a=n;
    while(n!=0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    if(a==r){
    printf("Palindrome");
    }
    else{
    printf("not a palindome");
        }   
         return 0;

}