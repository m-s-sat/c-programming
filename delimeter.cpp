#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    scanf("%s",s);
    int i=0;
    while(i<strlen(s)){
        int j=i;
        while(s[j]!=','&&j<strlen(s)){
            printf("%c",s[j]);
            j++,i++;
        }
        printf("\n");
        i++;
    } 
}