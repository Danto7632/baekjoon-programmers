#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n/10==n%10?1:0);
}