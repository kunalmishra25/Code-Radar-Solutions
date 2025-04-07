#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max1=arr[0];
    int max2 = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max1 && arr[i]<max2){
            max2=arr[i];
        }
    }
         int maxproduct = max1*max2;
        printf("%d",maxproduct);
    return 0;
}
