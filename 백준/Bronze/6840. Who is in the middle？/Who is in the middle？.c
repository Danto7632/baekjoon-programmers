#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d\n%d\n%d", &a, &b, &c);

    printf("%d", a>b?a>c?b>c?b:c:a:b>c?a>c?a:c:b);
}