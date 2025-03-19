#include <stdio.h>

int main() {
    int n, even_count = 0, odd_count = 0;
    
    scanf("%d", &n);

    
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("%d ", even_count);
    printf("%d", odd_count);

    return 0;
}
