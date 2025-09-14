#include<stdio.h>
#include<string.h>
int main(){
    //deep copy
    //same name but changes in only one
    char s1[]="physics wallah\n";
    char s2[]="physics wallah";
    s2[0]='l';
    printf("%s",s1);
    printf("%s",s2);
    return 0;
}