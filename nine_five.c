#include<stdio.h>
int main(){
    char st[]="ahi cricket";
    st[0]='b';
    st[1]='i';
    for(int i=0;st[i]!='\0';i++){
        printf("%c",st[i]);
    }
    return 0;
}