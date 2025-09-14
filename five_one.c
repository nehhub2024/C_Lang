#include<stdio.h>
void greet(){
    printf("good morning\n");
    printf("have a nice day\n");
    return;
}
int main(){
    //two time greet means do baar repeat hoga
    greet();
    greet();
    return 0;
}