#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n%7==2?1:0);
}