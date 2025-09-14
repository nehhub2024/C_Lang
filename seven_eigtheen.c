#include<stdio.h>
// maxvalue 
int main(){
    
int arr[5]={10,20,40,80,100};
int max=arr[0];
for(int i=0;i<=4;i++){
    if(max<arr[i]){
        max=arr[i];
       
    }
  }
   printf("%d",max);
  return 0;
}