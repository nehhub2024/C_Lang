#include<stdio.h>
#include<limits.h>
int main(){
    //
    int arr[5]={30,2,5,2,1};printf("unsorted array\n");

    for(int i=0;i<5;i++){
      
        printf("%d ",arr[i]);
    }
    //selection sorting

    for(int i=0;i<4;i++){  //pass n-1;
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<=4;j++){
            if(min>arr[j]){
                min=arr[j];
                minidx=j;
            }
        }
        // printf("\n");
        //swap mininx and i
               int temp=arr[minidx];
               arr[minidx]=arr[i];
               arr[i]=temp;

        }
 printf("\n");
 printf("sorted array\n");

        for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}