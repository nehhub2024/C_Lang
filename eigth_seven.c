 #include<stdio.h>
 int main(){
    //sum of two arrays 
    int arr1[2][2]={{1,2},{3,4}};
    int arr2[2][2]={{2,4},{8,9}};
       int result[2][2];
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            result[i][j]=arr1[i][j]+arr2[i][j];       
        }
    }
     for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
           printf("%d ",result[i][j]);
    }
printf("\n");
 }
 return 0;
 }