//using nested loop find divisibility of 5 and 3
#include<stdio.h>
int main(){
    int n;
    printf("enter th enumber");
    scanf("%d",n);
    if(n%5==0){
        if(n%3==0){
            printf("divisible by 5 and 3");
        }else{
            printf("not divisible by 5 and 3");
        }
    }else{
        ("not divisibble by 5");
    }
return 0;
} 