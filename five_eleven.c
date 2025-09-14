#include<stdio.h>
/*
swapping without third valiable
a=5,b=3
a=8,b=5,a=3*/
int main(){
    int a,b;
    printf("enter the numbers\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);
    return 0;
}