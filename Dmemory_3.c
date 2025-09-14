#include<stdio.h>
#include<stdlib.h>
//each memory block with a default value of 0
int main(){
    int *ptr;
    ptr=(int *) calloc(6,sizeof(int));
    // for(int i=0;i<5;i++){
    //     printf("enter the value of elements is %d",i);
    //     scanf("%d",&ptr[i]);
    // }
    for(int i=0;i<6;i++){
        printf("enter the value of %d elements is:%d\n",i,ptr[i]);
    }
    return 0;
}