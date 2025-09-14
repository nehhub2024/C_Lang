#include<stdio.h>
// #include<limits.h>
int main(){
    int arr[5]={2,-3,4,-5,6};
    int min=arr[0];
    for(int i=0;i<=4;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
     printf("%d ",min);
}