#include <stdio.h>
#include <math.h>

int main (){
    int n, n1, n2, count = 0, sum = 0;

    printf("Enter n : ");
    scanf("%d",&n);

    n1=n2=n;
    
    while(n1 != 0){
        n1=n1/10;
        count++;
    }

while(n2!=0){
    sum = sum + (pow(n2 % 10, count)+0.5 );

    n2=n2/10;
}

if(n==sum)
printf("Armstrong Number");
else
printf("Not a Armstrong Number ");

    return 0;
}
