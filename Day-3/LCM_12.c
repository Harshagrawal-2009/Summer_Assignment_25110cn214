#include<stdio.h>

int main(){
int a,b,lcm,i;
printf("Enter two numbers : ");
scanf("%d %d",&a , &b);
if(a>b)
i=a;
else
i=b;
while(1)
{
    if(i%a == 0 && i%b == 0){
        lcm = i ;
        break;

    }
    i++;
}
printf("LCM = %d",lcm);
    return 0;
}
