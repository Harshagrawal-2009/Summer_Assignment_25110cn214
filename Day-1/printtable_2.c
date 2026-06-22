#include<stdio.h>
int main(){
int n;
int table=1;
printf("Enter n : ");
scanf("%d",&n);


for(int i =1;i<=10;i++){
   table = n*i;
printf("%d * %d = %d\n",n,i,table);

}
    return 0;
}