#include<stdio.h>
#include<string.h>
int main(){
    //from user input
   
    char st[30];
     printf("enter the sentence");
    scanf("%[^\n]s",st);//print all words (neha yadav not only neha);
//    scanf("%s",st);
   //print only first word
    printf(" the result is %s",st);
    return 0;
}