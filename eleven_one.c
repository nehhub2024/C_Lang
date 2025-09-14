#include<stdio.h>
int main(){
    //bubble
    int arr[5]={1,2,2,6,2};
      for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
      }
      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){ //4-i can also be written
        
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
      }
      printf("\n");
      for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
      }
    return 0;
}