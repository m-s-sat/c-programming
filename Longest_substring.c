#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100];
    printf("\nEnter the 1st string: ");
    scanf("%s",str1);
    printf("\nEnter the 2nd string: ");
    scanf("%s",str2);
    int i,j,k,l,len[100],max=0,idx[100],count=0,index,indexstr;
    for (i=0;str1[i]!='\0';i++){
        for (j=0;str2[j]!='\0';j++){
            if (str1[i]==str2[j]){
                idx[count]=i;
                k=i;
                l=j;
                while (str1[k]==str2[l]){
                    k++;
                    l++;
                }
                len[count]=k-i;
                count++;
            }
        }
    }
    for (i=0;i<count;i++){
        if (len[i]>max){
            max=len[i];
            index=i;
        }
    }
    indexstr=idx[index];
    printf("\nLongest substring is: ");
    for (i=0;i<max;i++){
        printf("%c",str1[indexstr++]);
    }
}