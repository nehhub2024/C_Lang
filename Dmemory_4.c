#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("how many element do you wants to enter\n");
    scanf("%d",&n);
    int *ptr;
    ptr=(int *) calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter the value of elements is %d\n ",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("enter the value of %d elements is:%d\n",i,ptr[i]);
    }
    return 0;
}