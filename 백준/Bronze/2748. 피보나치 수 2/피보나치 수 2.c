#include <stdio.h>

void fibo(long long* a, long long* b);

int main() {
    int n;
    long long a=0, b=1;
    scanf("%d", &n);

    for (int i=0;i<n;i++){
        fibo(&a, &b);
    }
    printf("%lld", a);
}

void fibo(long long* a, long long* b){
    long long sum = *a + *b;
    *a = *b;
    *b = sum;
}