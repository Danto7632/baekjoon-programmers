#include <stdio.h>

int main() {
    int a,b;
    scanf("%d\n%d", &a, &b);
    printf("%d", a<b?-1:a==b?0:1);
}