#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d\n%d", &a, &b);
    printf("%d\n%d\n%d\n%d", a*(b%10), a*(b%100/10), a*(b/100), a*b);
    
}