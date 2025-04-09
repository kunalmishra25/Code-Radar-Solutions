#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_count = 0;
    int max_element = arr[0];
    
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            max_element = arr[i];
        }
        
    }
    if(max_count<=n/2){
        printf("-1");
        
    }else{
        printf("%d",max_element);
    }
   
   
    return 0;
}