#include<stdio.h>
//practice
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *) malloc(6* sizeof(int));
    for(int i=0;i<5;i++){
    printf("enter the  ptr values\n");
    scanf("%d ",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("the value at %d element is %d\n",i,ptr[i]);        
    }

    ptr=realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("enter the sptr values\n");
        scanf("%d ",&ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("the value at %d element is %d\n",i,ptr[i]);
    }
    return 0;
}