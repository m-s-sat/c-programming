#include<stdio.h>
#include<stdlib.h>

int main(){
    // 1-D array
    // int n;
    // int *ptr;
    // printf("Enter the size of array you wanrt : ");
    // scanf("%d",&n);
    // ptr = (int *)calloc(n,sizeof(int));
    // if(ptr==NULL){
    //     printf("Memory doesn't allocate properly");
    // }
    // else{
    //     printf("Memory allocate succesfully");
    //     for(int i=0;i<n;i++){
    //         scanf("%d",&ptr[i]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d ",ptr[i]);
    // }
    
    // 2-D Array
    int n;
    int **ptr;
    scanf("%d",&n);
    ptr = (int **)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i] = (int *)calloc(n,sizeof(int));
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