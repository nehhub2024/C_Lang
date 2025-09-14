#include<stdio.h>
int main(){
    //we do not need to count number of space
    char arr[]="hello mahi happy birthday\0";
    for(int i=0;arr[i]!='\0';i++){
          printf("%c",arr[i]);
    }
return 0;  
}