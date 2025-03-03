#include <stdio.h>

int main() {
    int a,b;
    scanf("%d\n%d", &a, &b);
    printf("%s", a>b?"flight":"high speed rail");
}