#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100];
    printf("Enter String 1 : ");
    scanf("%s",str1);
    printf("Enter string 2 : ");
    scanf("%s",str2);
    strcat(str1,str2);
    printf("The concatenated string is : %s\n",str1);
}