#include <stdio.h>

int main() {
    long long int a,b,c;
    scanf("%lld %lld %lld", &a, &b, &c);

    printf("%lld", b/c>c/b?a*b/c:a*c/b);
}