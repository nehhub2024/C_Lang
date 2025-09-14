#include<stdio.h>
int main(){
    int arr[2][2]={1,2,4,3};
    // add the nuber elements in matrices
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;

    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){

            sum=sum+arr[i][j];
        }
       
    }
    printf("%d ",sum);
    return 0;
}