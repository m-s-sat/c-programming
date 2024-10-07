#include<stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    if(n&1){
        printf("odd");
    }
    else{
        printf("even");
    }
}