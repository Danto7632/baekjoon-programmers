#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n%d\n%d", n*(n+1)/2, (n*(n+1)/2)*(n*(n+1)/2), n*n*(n+1)*(n+1)/4);
}