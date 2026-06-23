#include <stdio.h>
int main(){
    int a[10],n,odd=0,even=0,i;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);

        if(a[i]%2==0){
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even elements = %d\n",even);
    printf("Number of odd elements = %d\n",odd);

    return 0;
}