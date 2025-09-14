#include<stdio.h>
int main(){
    int a,b,c,d,e,percentage;
    printf("enter the number of five subject\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    percentage=(a+b+c+d+e)/5;
    printf("the result is:%d",percentage);
    return 0;
}