#include<stdio.h>
int main(){
    //changing the first letter
    //shallow copy
    char s1[]="college wallah";
    char* s2=s1;
    s1[0]='l';
    printf("%s",s2);
    return 0;
}