#include<stdio.h>
int main(){
    //count the maximum number of '1' in row
    int arr[3][3]={1,1,1,0,1,0,0,0,1};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int maxcount=-1;  
    int index=-1;
    for(int i=0;i<3;i++){
       int count=0;
    for(int j=0;j<3;j++){
        if(arr[i][j]==1){
            count++;
        }if(maxcount<count){
            maxcount=count;
            index=i;
        }
    }
    
    }
     printf("%d  %d",maxcount,index);
   
    return 0;
}