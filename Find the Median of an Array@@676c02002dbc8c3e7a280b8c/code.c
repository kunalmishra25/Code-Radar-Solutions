#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    double median;
    if (n % 2 == 0) {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        median = arr[n / 2];
    }
    printf("%.2f", median);

    return 0;
}
