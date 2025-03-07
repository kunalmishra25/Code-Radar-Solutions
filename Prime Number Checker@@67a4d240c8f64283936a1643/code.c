#include <stdio.h>

int prime(int n) {
    if (n < 2) {
        return 0; 
    } else {
        for (int i = 2; i * i <= n; i++) { 
            if (n % i == 0) {
                return 0;
            }
        }
        return 1; 
    }
}

int main() {
    int num;
    scanf("%d", &num);
    if (prime(num)) {
        printf(1\n);
    } else {
        printf(0\n);
    }

    return 0;
}
