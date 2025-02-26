#include <stdio.h>

int main() {
    int a,w,v;
    scanf("%d\n%d %d", &a, &w, &v);
    printf("%d", a<=w/v?1:0);
}