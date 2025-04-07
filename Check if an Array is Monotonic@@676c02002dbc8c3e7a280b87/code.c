#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) increasing = false;
        if (arr[i] > arr[i - 1]) decreasing = false;
    }

    if (increasing || decreasing) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
