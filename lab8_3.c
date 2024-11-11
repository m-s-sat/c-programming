#include<stdio.h>

int max_num(int *arr,int size){
    int max = -999999;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int size;
    scanf("%d",&size);
    int arr[100];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Maximum element : %d\n",max_num(arr,size));
}