#include<stdio.h>
int main(){
    int l,b,a,p;
    printf("enter the length");
    scanf("%d",&l);
    printf("enter the breadth");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("the result is %d %d \n",p,a);
    if(a>p){
        printf("area is greater than perimeter");
    }else{
        printf("area is smaller");
    }
    return 0;
}