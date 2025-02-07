#include <stdio.h>

int main() {
    int a, b, b2, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    printf("%d\n", a+b-c);
    b2 = b;
    while (b != 0){
        a*=10;
        b/=10;
    }
    printf("%d", a+b2-c);
}