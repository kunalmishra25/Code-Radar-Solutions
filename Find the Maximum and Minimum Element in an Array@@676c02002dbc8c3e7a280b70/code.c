#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];

        } if(arr[i]<min){
            min = arr[i];
        }
       
    }

    printf("%d %d ",min,max);
}