#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    scanf("%d",&n);
    while(n!=0){
        int digit = n%10;
        sum += digit*digit*digit;
        n=n/10;
    }
    if(sum==n){
        printf("armstern number");
    }
}