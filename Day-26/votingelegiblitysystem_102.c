#include<stdio.h>
int main(){
    
    int n;
    printf("Enter your age : ");
    scanf("%d",&n);

    if(n>=18)
    printf("You are eligible for voting ");
    else
    printf("You are not eligible for voting ");

    return 0;
}