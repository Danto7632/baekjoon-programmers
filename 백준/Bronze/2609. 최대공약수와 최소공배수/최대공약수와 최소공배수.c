#include <stdio.h>

int uc(int a, int b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d", uc(a,b), (a*b)/uc(a,b));
}

int uc(int a, int b)
{
    int c;
    while (b != 0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}