#include<stdio.h>
int main(){
    //product of number from 1 to n
    int arr[5];

    for(int i=0;i<=4;i++){
        printf("enter the elements %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    int product=1;
    for(int i=0;i<=4;i++){
        product=product*arr[i];
       
    }
     printf("%d ",product);
    return 0;
}