#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%s", a+b+c>=100?"OK":a>b?b>c?"Hanyang":"Korea":a>c?"Hanyang":"Soongsil");
}