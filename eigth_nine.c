#include<stdio.h>
int main(){
    //from user input add sum of numbers in matrices
    int r,c;
  
    printf("enter the number of rows");
    scanf("%d",&r);
    printf("enter the numver of columns");
    scanf("%d",&c);
      printf("enter the number of elements");
      int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            // printf("enter the number of elements");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum =0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("%d ",sum);
    return 0;
}