#include<stdio.h>
#include<string.h>

void reverse_s(char *arr){
    int s=0;
    int e= strlen(arr)-1;
    while(s<=e){
        char temp = arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++,e--;
    }
}

int main(){
    char arr[100];
    scanf("%s",arr);
    printf("Before reversing : %s\n",arr);
    reverse_s(arr);
    printf("After reversing : %s\n",arr);
}