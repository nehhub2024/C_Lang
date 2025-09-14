#include<stdio.h>
int main(){
    //direct method of marks and index
    int marks[10]={10,20,30,40,50,60,70,80,90,100};
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
        printf("%d ",marks[i]);
        printf("%d ",i);

            } 
               }
    return 0;
}