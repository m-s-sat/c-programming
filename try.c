#include<stdio.h>

void main(){
    int max = -2403;
    int arr[3];
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d",max);

}