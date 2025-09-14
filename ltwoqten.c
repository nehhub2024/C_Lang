#include<stdio.h>
int main(){
    int ajay,ram,shyam;
    printf("enter the first age");
    scanf("%d",&ram);
     printf("enter the second age");
    scanf("%d",&shyam);
    printf("enter the third age");
    scanf("%d",&ajay);
    if(ram<=shyam && ram<=ajay){
        printf("ram is the youngest one" );
    }
    if(shyam<=ram && shyam<=ajay){
        printf("shyam is the youngest one" );
    }
    else{
        printf("ajay is the youngest one");
    }
    
    return 0;
}