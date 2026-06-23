#include <stdio.h>

    void factorial(int a ) {
        int fact = 1;
    for(int i = 1; i<=a; i++){
        fact=fact*i;
    }
    printf("%d",fact);

    }


    int main(){
        int a;
        printf("Enter a number : ");
        scanf("%d",&a);
        factorial(a);
    
    return 0;

}