#include<stdio.h>

void palindrome (int n){
    int a;
    int r = 0;

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
    

}

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}