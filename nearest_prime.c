#include<stdio.h>

int main(){
    int n,a=0,b=0,prime1=1,prime2=1;
    printf("Enter number :- ");
    scanf("%d",&n);
    int k=n+1,i=n-1;
    while(prime1){
        int j=2;
        while(i>2&&j<i){
            if(i%j==0){
                prime1=1;
                j++;
                break;
            }
            else{
                prime1=0;
                a=i;
                j++;
            }
        }
        i--;
    }
    while(prime2){
        int j=2;
        while(k>j){
            if(k%j==0){
                prime2 = 1;
                j++;
                break;
            }
            else{
                prime2=0;
                b=k;
                j++;
            }
        }
        k++;
    }
    if(n-a>b-n){
        printf("nearest prime is %d\n",b);
    }
    else{
        printf("nearest prime is %d\n",a);
    }
}