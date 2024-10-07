#include<stdio.h>

int main(){
    int n,c;
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int i=3;
    printf("%d %d ",a,b);
    while(i<=n){
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
}