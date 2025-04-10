#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int max = INT_MIN;
    int secondmax = INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondmax = max;
            max = arr[i];
        }
        else if(arr[i]<max && arr[i]>secondmax){
            secondmax = arr[i];
        }
    }
    
    if(secondmax == INT_MIN){
        printf("-1");
    } else {
        printf("%d",secondmax);
    }
    return 0;
}