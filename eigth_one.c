#include<stdio.h>
//2D array me hum 'n' no. of students ke marks save kr sakte h different different subject ke
//5 student subject physics,chemistry,maths
int main(){
     int arr[2][2];
     arr[0][0]=1;
     arr[0][1]=2;
     arr[1][0]=3;
     arr[1][1]=4;
     for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }
    
    return 0;
}