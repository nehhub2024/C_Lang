#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
   ptr= (float *) malloc (5 * sizeof(float));
   for(float i=0;i<5;i++ ){
   printf("enter the elements is %f\n",i);
   scanf("%f",&i);
 }
    for(int i=0;i<5;i++){
        printf("enter the elements is %d of:%d\n",i,ptr[i]);
    }
    return 0;
}