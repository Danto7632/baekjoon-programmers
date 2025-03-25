#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d %d %d", a<b?a<c?a:c:b<c?b:c, a>b?a>c?b>c?b:c:a:b>c?a>c?a:c:b,a>b?a>c?a:c:b>c?b:c);
}