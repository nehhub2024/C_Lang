#include<stdio.h>
//swapping number
int main(){
    int a;
    printf("enter the first number\n");
    scanf("%d",&a);
    int b;
    printf("enter the second number\n");
    scanf("%d",&b);
    int c=a;
    a=b;
    b=c;
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
    return 0;
}