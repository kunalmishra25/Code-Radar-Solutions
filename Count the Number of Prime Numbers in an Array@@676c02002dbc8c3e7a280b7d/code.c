#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int primeCount = 0;
    
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        
        if (num <= 1) {
            continue;
        }
        
        int isPrime = 1;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            primeCount++;
        }
    }
    
    printf("%d", primeCount);
    
    return 0;
}