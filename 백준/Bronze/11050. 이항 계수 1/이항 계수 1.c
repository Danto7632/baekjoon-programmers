#include <stdio.h>

int fac(int a);

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", fac(n)/(fac(k)*fac(n-k)));
}

int fac(int a)
{
    int fac=1;
    for (int i=1;i<=a;i++){
        fac *= i;
    }
    return fac;
}