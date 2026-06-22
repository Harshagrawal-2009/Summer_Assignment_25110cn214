#include <stdio.h>
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int a=0, b=1, c=0 ;
    if(n==1)
    printf("%d",&a);
    else if (n==2)
    printf("%d",b);
    else{
        for(int i=3; i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",c);
    }
    return 0;
}