#include<stdio.h>
int main(){
    int  dividend,quotient,divisor;
    printf("enter the two number\n");
    scanf("%d %d",&dividend,&divisor);
    quotient=dividend/divisor;
    int remainder=dividend -(divisor*quotient);
    printf("the reminder of the number is %d:",remainder);
    return 0;
}