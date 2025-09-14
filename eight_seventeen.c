#include<stdio.h>
//rotate the matrice by 90 degree
// transpose and then reverse
int main(){
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }

  
  printf("the transpose of the given matrice\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d ",arr[j][i]);
    }
    printf("\n");
  }

    printf("the reverse of given matrix is\n");
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        for(int k=2;k>=0;k--){
          printf("%d ",arr[i][k]);
        }
           printf("\n");
      }
   
    }


  return 0;
}