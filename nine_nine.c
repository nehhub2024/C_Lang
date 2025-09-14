#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    
    printf("enter the sentences\n");
    scanf("%[^\n]s",str);
    int size=0;
    for(int i=0;str[i]!='\0';i++){
        
        size++;
        
    }
     printf("the size of the statements is %d ",size);

   
    return 0;
}