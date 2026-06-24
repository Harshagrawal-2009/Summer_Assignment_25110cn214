#include<stdio.h>
int main(){
    int n1, n2, i, j, k=0;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array:\n"); 
    for(i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);   
    int arr2[n2];
    printf("Enter the elements of the second array:\n");
    for(i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);
    }

    int unionArray[n1 + n2];

    for(i = 0; i < n1; i++){
        unionArray[k++] = arr1[i];
    }

    for(i = 0; i < n2; i++){
        int flag = 0;
        for(j = 0; j < k; j++){
            if(arr2[i] == arr1[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            unionArray[k++] = arr2[i];
        }
    }

    printf("Union of the two arrays is:\n");
    for(i = 0; i < k; i++){
        printf("%d ", unionArray[i]);
    }

    return 0;
}