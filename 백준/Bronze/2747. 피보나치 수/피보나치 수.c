#include <stdio.h>

void fibo(int* a, int* b);

int main() {
    int n, a=0, b=1;
    scanf("%d", &n);

    for (int i=0;i<n;i++){
        fibo(&a, &b);
    }
    printf("%d", a);
}

void fibo(int* a, int* b){
    int sum = *a + *b;
    *a = *b;
    *b = sum;
}