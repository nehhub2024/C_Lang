#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number");
    scanf("%d",&a);
     printf("enter the second number");
    scanf("%d",&b);
    printf("enter the third number");
    scanf("%d",&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("valid triangle");
    }else{
        printf("not valid triangle");
    }
    return 0;
}