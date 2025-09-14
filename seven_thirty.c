#include<stdio.h>
    void palindrome(int arr[5]){
        for(int i=0,j=4;i<j;i++,j--){
            if(arr[i]==arr[j]){
                printf("palindrome");
            }else{
                printf(" not palindrome ");
            }
        }
    }
int main(){
    int arr[5]={1,2,3,2,5};
   palindrome(arr);
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}