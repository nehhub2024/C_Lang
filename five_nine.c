#include<stdio.h> 
//pascal triangle
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int i,int j){
    int result=factorial(i)/(factorial(j)*factorial(i-j));
    return result;
}
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int ncr=combination(i,j);
            printf("%d ",ncr);
        }
        printf(" \n");
    }
    return 0;
}