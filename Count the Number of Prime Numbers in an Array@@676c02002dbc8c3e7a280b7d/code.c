#include <stdio.h>

int main() {
    int n,count = 0;
    
    scanf("%d", &n);

    
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (int i = 0; i < n; i++) {
        if (n == 0 || n == 1) {
        printf("");
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count += 1;
        }
    }

    if (count > 2) {
        return 0;
    } else {
        count++;
    }
    printf("%d",count);
    }  

    return 0;
}
