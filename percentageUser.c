#include<stdio.h>
int main(){
    int b,c,ch,m,p;
    printf("enter the number of subject\n");
   printf("enter the marks of b");
   scanf("%d",&b);
    printf("enter the marks of c");
   scanf("%d",&c);
    printf("enter the marks of ch");
   scanf("%d",&ch);
    printf("enter the marks of m");
   scanf("%d",&m);
    printf("enter the marks of p");
   scanf("%d",&p);
    int percentage=(b+c+ch+m+p)/5;
    printf("the result is %d ",percentage);
    return 0;
}