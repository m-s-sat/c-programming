#include<stdio.h>

int binary_search(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1; 
        }
        else{
            return mid;
        }
        mid = (start+end)/2;
    }
    return -1;
}

void main(){
    int size,index,key;
    scanf("%d%d",&size,&key);
    int arr[1000];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    index = binary_search(arr,size,key);
    printf("%d",index);
}