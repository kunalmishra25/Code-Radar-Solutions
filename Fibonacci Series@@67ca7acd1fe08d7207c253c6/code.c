int fib(int n);
int main(){
    int n;
    scanf("%d\n",&n);
    printf("Fibonacci number is %d",fib(n));
}
int fib(int n){
    if (n==0){
    return 0;
    }
    if (n==1){
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}