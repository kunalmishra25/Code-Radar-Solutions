#include <stdio.h>

int main() {
   char a;
   scanf("%c",&a);
   if(a>='A' && a<='Z'){
    printf("Uppercase");
   }else if{
    printf("Lowercase");
   }else{
    printf("not an alphabet");
   }
    return 0;
}