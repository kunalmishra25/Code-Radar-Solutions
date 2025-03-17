#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

   scanf("%s",&str);

    for (int i = 0; i < strlen(str); i++) {
        
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
