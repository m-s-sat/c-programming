#include<stdio.h>
#include<stdlib.h>

int main(){
    // int n,*ptr;
    // printf("Enter the number of element you want : ");
    // scanf("%d",&n);
    // ptr = (int *)malloc(n*sizeof(int));
    // if(ptr==NULL){
    //     printf("Memory are not allocated\n");
    //     exit(0);
    // }
    // else{
    //     printf("Memeory succesfull allocated\n");
    //     for(int i=0;i<n;i++){
    //         scanf("%d",&ptr[i]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d ",ptr[i]);
    // }
    int n;
    scanf("%d",&n);
    int **ptr = (int **)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i]=(int *)malloc(n*sizeof(int));
        for(int j=0;j<n;j++){
            scanf("%d",&ptr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
}