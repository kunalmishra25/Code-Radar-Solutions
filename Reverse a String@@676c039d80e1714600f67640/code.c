#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str);
    int i,j,length;
    length = strlen(str);
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf(" %s\n", str);

    return 0;
}

}