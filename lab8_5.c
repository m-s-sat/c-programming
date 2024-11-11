#include<stdio.h>
#include<string.h>
int count_vowels(char *arr){
    char arr1[5]={'a','e','i','o','u'};
    int count =0;
    for(int i=0;i<strlen(arr);i++){
        for(int j=0;j<5;j++){
            if(arr[i]==arr1[j]){
                count++;
                break;
            }
        }
    }
    return count;
}

int main(){
    char str[100];
    gets(str);
    printf("String : %s\n",str);
    printf("Number of vowels in the string : %d",count_vowels(str));
}