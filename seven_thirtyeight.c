#include<stdio.h>
#include<stdbool.h>
//find the unique number where all the number repeated twice except one number is unique
int main(){
    int arr[5]={1,2,3,2,1};
  
    for(int i=0;i<5;i++){
          bool flag=false;
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                flag=true;
            }   
        }
               if(flag==false){
        printf("%d is not duplicate",arr[i]);
        break;
    }

     }
    return 0;
}