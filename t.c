#include<stdio.h>
#include<math.h>
void main(){
    float root1,root2,a,b,c,d,x,y;
    scanf("%f%f%f",&a,&b,&c);
    d = pow(b,2)-4*a*c;
    if(d>0){
        root1 = -b/(2*a) + sqrt(d)/(2*a);
        root2 = -b/(2*a) - sqrt(d)/(2*a);
        printf("%f%f",root1,root2); 
    }
    else if(d<0){
        x = -b/(2*a);
        y = (sqrt(-d))/(2*a);
        printf("%f + %fi and %f - %fi",x,y,x,y);
    }
    else{
        root1 = -b/(2*a);
        printf("%f",root1);
    }
}