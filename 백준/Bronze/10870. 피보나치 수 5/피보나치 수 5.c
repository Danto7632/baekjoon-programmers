#include <stdio.h>

int fibo(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
}

int fibo(int n)
{
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else {
        return fibo(n-2) + fibo(n-1);
    }
}