#include <stdio.h>
int main() {
   int a,b;
   scanf("%d %d",&a,&b);
   if(b>a){
    printf("Profit\n");
   }else if(a>b){
    printf("Loss\n");
   }else{
    printf("No Profit No Loss");
   }
    return 0;
}