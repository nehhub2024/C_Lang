#include<stdio.h>
int main(){
    int arr[2][2]={100,12,30,4};
      int min=arr[0][0];

    // for(int i=0;i<=1;i++){
    //     for(int j=0;j<=1;j++){
    //         printf("enter the elements"); 
    //         printf("%d ",&arr[i][j]);
    //     }
    // }
   
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
              
            if(min>arr[i][j]){
                min=arr[i][j];
                
                
            }
        }
    }

  printf("%d ",min);
      
    return 0;
}