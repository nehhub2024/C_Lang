#include<stdio.h>
int main(){
    printf("enter the 1st matrix\n");
    int arr1[3][2]={1,2,3,4,5,6};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("enter the second matrix\n");
    int arr2[2][4]={6,5,4,3,2,1};
       for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("enter the multiplication of matrix\n");
    int cr=2;
    int result[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            result[i][j]=0;
        
         for(int k=0;k<cr;k++){
            result[i][j]=result[i][j]+arr1[i][k]*arr2[k][j];
        
        }
           printf("%d ",result[i][j]);
    }
    printf("\n");
    }
    return 0;
}