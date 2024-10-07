#include<stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int j=0;
        while(j<i){
            printf("*");
            j++;
        }
    
        printf("\n");
    }
}