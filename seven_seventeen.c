#include<stdio.h>
int main(){
    //from user input maximum value
    int arr[5];
    for(int i=0;i<=5;i++){
        printf("enter the elements %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    int max=-1;
   for(int i=0;i<=4;i++){
    if(max<arr[i]){
        max=arr[i];
    
    }
   }
   printf("%d ",max);
    
   return 0;
} 