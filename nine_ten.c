#include<stdio.h>
#include<string.h>
int main(){
    //reverse   the string
    char st[100];
    printf("enter the string");
    scanf("%[^\n]s",st);
    int size=0;
    for(int k=0;st[k]!='\0';k++){
        size=size +1;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=st[i];
        st[i]=st[j];
        st[j]=temp;
    }
    // printf("%d ",size);
    printf("the reverse is:");
    printf("%s",st);
    
    return 0;
}