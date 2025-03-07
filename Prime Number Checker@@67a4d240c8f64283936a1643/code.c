#include<stdio.h>
int prime(int n){
    if(n<2){
        printf("Not prime");
    }
    else{
        for(int i = 2;i < n;i++){
            if(n%i==0){
                return 0;
            } 
        }
        return 1;
    }
}
int main() {
    int num;
    scanf("%d",&num);
    if (prime(num)){
        printf("Yes it is a prime number");
    }
    else{
        printf("No it is not a prime number");
    }

    return 0;
}




