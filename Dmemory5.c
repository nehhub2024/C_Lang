#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr2;
    int *ptr;
    ptr=(int *) malloc(10 * sizeof(int));
   
    for(int i=0;i<10;i++){
        ptr2=(int *) malloc(10 * sizeof(int));
        printf("enter the value of elements %d\n",i);
        scanf("%d",&ptr[i]);
        free(ptr2);//free kr dega utna space more memeory space
    }
    for(int i=0;i<6;i++){
        printf("enter the value of %d element is :%d\n",i,ptr[i]);
    }

    return 0;
}  