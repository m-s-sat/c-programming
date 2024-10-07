#include<stdio.h>
#include<math.h>

void main(){
    float a,b,c,d,e,f,g,n;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    e = a*c + b*d;
    f = a*d - b*c;
    g = pow(c,2) + pow(d,2);
    n= -f/g;
    if(f>0){
        printf("%f - %fi",e/g,f/g );
    }
    else{
        printf("%f + %fi",e/g,n);
    }
}