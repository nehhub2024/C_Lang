#include<stdio.h>
int main(){
    int arr[5]={4,6,8,9,0};
    printf("unsorted\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    //insertion
    for(int i=1;i<=4;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            // arr[j]=arr[j-1];
        int temp=arr[j-1];//4
        arr[j-1]=arr[j];////6
        arr[j]=temp;//4
        j--;
    }
    }
    printf("\n");
       printf("sorted\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}