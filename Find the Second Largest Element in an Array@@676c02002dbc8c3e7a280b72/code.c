#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int max = arr[0];
    int secondmax = arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondmax = max;
            max = arr[i];
        }
        else if(arr[i]<max && arr[i]>secondmax){
            secondmax = arr[i];
        }
    }
    
    printf("%d",secondmax);
    return 0;
}