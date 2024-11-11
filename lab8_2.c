#include<stdio.h>

void swap_func(int *arr1,int *arr2,int size){
    int s=0;
    for(int s=0;s<size;s++){
        int temp = arr1[s];
        arr1[s]=arr2[s];
        arr2[s]=temp;
    }
}

void print_array(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int size,arr1[100],arr2[100];
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("Enter %d elements for the first array : ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter %d elements for the second array : ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr2[i]);
    }
    printf("Array before swapping : \n");
    printf("Array 1:");
    print_array(arr1,size);
    printf("\n");
    printf("Array 2:");
    print_array(arr2,size);
    printf("\n");
    printf("Array after swapping:\n");
    swap_func(arr1,arr2,size);
    printf("Array 1:");
    print_array(arr1,size);
    printf("\n");
    printf("Array 2:");
    print_array(arr2,size);
    printf("\n");
}