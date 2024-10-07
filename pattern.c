#include<stdio.h>

void reverse(int *ptr,int a){
    for(int i=0;i<a;i++){
        *ptr = *(ptr+1);
    }
}
int main(){
    int num,i,a;
    int arr[num];
    int *ptr = &arr;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    reverse(ptr,num);
    return 0;
}