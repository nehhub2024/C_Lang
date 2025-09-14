#include<stdio.h>
//insert anothwer character 
int main(){
    char st[]="college\n";
    printf("%s",st);
    for(int i=6;i>=4;i--){
        st[i+1]=st[i];
    }
    st[4]='l';
    printf("%s",st);
    return 0;
}