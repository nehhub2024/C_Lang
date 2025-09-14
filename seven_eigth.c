#include<stdio.h>
int main(){
    //enter the array using loop from user input
    //print all numbers
    int arr[5];
    for(int i=0;i<=4;i++){
    printf("\nenter the elements %d",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}