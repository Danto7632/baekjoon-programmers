#include <stdio.h>

int uc(int a, int b);

int main() {
    int x1, y1, x2, y2, a, b;
    scanf("%d %d\n%d %d", &x1, &y1, &x2, &y2);
    a = x1 * y2 + x2 * y1;
    b = y1 * y2;
    printf("%d %d", a/uc(a, b), b/uc(a, b));
}

int uc(int a, int b)
{
    int x=a>b?a:b, y=a>b?b:a, z;
    while (b != 0){
        z = a%b;
        a = b;
        b = z;
    }
    return a;
}