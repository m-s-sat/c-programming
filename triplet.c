#include<stdio.h>
#include<math.h>
int main(){ 
    int arr[1000];
    int size;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if((pow(arr[i],2)<=pow(arr[j],2)+pow(arr[k],2))&&(pow(arr[j],2)<=pow(arr[i],2)+pow(arr[k],2)&&(pow(arr[k],2)<=pow(arr[j],2)+pow(arr[i],2)))){
                    printf("%d %d %d\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
}

