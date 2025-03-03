#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n%=3;
    printf("%c", n>1?'O':n>0?'U':'S');
}