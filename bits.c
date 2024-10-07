#include<stdio.h>
#include<math.h>

void main(){
    int n;
    int ans = 0, i =0;
    scanf("%d",&n);
    while(n!=0){
        int bit = n&1;
        ans = bit*pow(10,i) + ans;
        n = n>>1;
        i++;
    }
    printf("%d",ans);
}