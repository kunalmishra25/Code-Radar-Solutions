#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++){
       if (n % 2 == 0) {
       int  median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
       int median = arr[n / 2];
    }
       
    }
    printf("%d",median);
   
    
}