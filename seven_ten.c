#include<stdio.h>
int main(){
    //printing numbers in reverse order
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("enter the elements %d\n", i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=4;j>=0;j--){
        printf("%d ",arr[j]);
    }
    return 0;
}