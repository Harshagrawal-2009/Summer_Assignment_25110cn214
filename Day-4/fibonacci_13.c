#include<stdio.h>

int main(){
 int n;
 printf("Enter n : ");
 scanf("%d",&n);
  int a = 0, b = 1, c = 0;
  for(int i=1;i<=n;i++){
  printf("%d \t",c);
  a = b;
  b = c;
  c = a+b;
  }
    return 0;
}