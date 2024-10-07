#include<stdio.h>

int main(){
    int n;
    float bill,sum = 0;;
    scanf("%d",&n);
    if(n>=0&&n<=100){
        bill = n*1.50;
        sum = bill;
        printf("%.2f",sum);
    }
    else if(n>100&&n<200){
        bill = (n-100)*2.50;
        sum = 150 + bill;   
        printf("%.2f",sum);
    }
    else if(n>200&&n<400){
        bill = (n-200)*4;
        sum = 400 + bill;
        if(sum>1000){
            sum = sum + sum*0.05;
            printf("%.2f",sum);
        }
        else{
            printf("%.2f",sum);
        }
    }
}