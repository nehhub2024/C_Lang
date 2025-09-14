#include<stdio.h>
int main(){
    //enter the marks and roll no. of 4 students
    int arr[4][2];
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("enter the elements %d",i+j+1);
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<=3;i++){
        for(int j=0;j<=1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}