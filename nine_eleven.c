#include<stdio.h>
int main(){
    char str[]="college wallah";
    char* ptr=str;
    for(int i=0;*ptr!='\0';i++){
        ptr++;
        printf("%c",*ptr);
    }
    return 0;
}