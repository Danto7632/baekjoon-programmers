#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d\n%d", &a, &b, &c);
    printf("%d", a+b<2*c?a+b:a+b-2*c);
}