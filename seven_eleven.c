#include<stdio.h>
int main(){
    //from user input marks of students
    int marks[10];
   for(int i=0;i<=9;i++){
    printf("enter the elements %d\n",i+1);
    scanf("%d",&marks[i]);
   }
   for(int i=0;i<=9;i++){
    if(marks[i]<35){
    printf("%d ",marks[i]);
    }
   }
   return 0;
}