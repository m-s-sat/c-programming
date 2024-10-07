#include<stdio.h>

void main(){
    int n;
    int prime=1;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i!=0){
            prime = 0;
        }
       
    }
    if(prime){
        printf("prime");
    }
    else{
        printf("non prime");
    }
}

