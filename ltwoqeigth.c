#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number");
    scanf("%d",&a);
     printf("enter the second number");
    scanf("%d",&b);
    printf("enter the third number");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is greatest");
    }
     if(b>a && b>c){
        printf("b is greatest");
    }
     if(c>b && c>a){
        printf(" is greatest");
    }
    return 0;
}