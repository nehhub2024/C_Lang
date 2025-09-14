#include<stdio.h>
int main(){
  int arr[3][3]={1,0,1,1,1,1,0,1,0};
  int maxCount=0;
 
  int maxind=-1;
  for(int i=0;i<3;i++){
     int count =0;
  for(int j=0;j<3;j++){
    // printf("%d ",arr[i][j]);
  
    if(arr[i][j]==1){
      count++;
    }if(maxCount<count){
      maxCount=count;
      maxind=i;
    }
      // printf("\n");
    }
      printf("%d ",maxind);
  }


return 0;
}