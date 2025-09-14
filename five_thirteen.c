#include<stdio.h>
int min(int a,int b){
    if(a<b){
        return a;
    }else b;
}
int hcf(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        if(i%a==0 && i%b==0){
            hcf =i;
        }
    }
}
int main(){
    int a,b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    int gcf=hcf(a,b);
    printf("the hcf of given values are %d\n",gcf);
    return 0;
}