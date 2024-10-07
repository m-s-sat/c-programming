#include<stdio.h>

void main(){
    long n;
    int count =0;
    scanf("%d",&n);
    while(n!=0){
        count +=1;
        n = n/10;
    }
    printf("%d",count);
}