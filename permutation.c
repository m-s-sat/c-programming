#include<stdio.h>

int fact(int size){
    int ans =1;
    for(int i=1;i<=size;i++){
        ans = ans*i;
    }
    return ans;
}

void permute(int arr[],int size){
    int i=1;
    printf("Printing permutation : \n");
    while(i<=(fact(size)/size)){
        for(int j=0;j<size;j++){
            if(j==0){
                int temp = arr[j+1];
                arr[j+1]=arr[j+2];
                arr[j+2]=temp;
            }
            else if(j==size-1){
                int temp = arr[j-1];
                arr[j-1]=arr[j-2];
                arr[j-2]=temp; 
            }
            else{
                int temp = arr[j-1];
                arr[j-1]=arr[j+1];
                arr[j+1]=temp;
            }
            for(int k=0;k<size;k++){
                printf("%d ",arr[k]);
            }
            printf("\n");
        }
        i++;
    }
}

int main(){
    int arr[100];
    int size;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    permute(arr,size);
}