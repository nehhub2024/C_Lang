#include<stdio.h>
int main(){
    //enter the array using user by loops
  int arr[5];
  for(int i=0;i<=4;i++){
    printf("enter the elements %d\n",i+1);
    scanf("%d",&arr[i]);
  }
  printf("%d ",arr[2]);
    return 0;
}
