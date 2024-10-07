#include<stdio.h>

void main(){
    int arr[3];
    int min = __INT64_MAX__;
    for(int i=0;i<3;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<3;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d",min);
}