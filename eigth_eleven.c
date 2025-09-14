#include<stdio.h>
int main(){
    //max value in 2 d arr
    
    int arr[2][2]={1,25,2,40};
    int max=arr[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){

            if(max<arr[i][j]){
                max=arr[i][j];
                // printf("%d ",max);
            }
        }
    }
     printf("%d ",max);
    return 0;
}