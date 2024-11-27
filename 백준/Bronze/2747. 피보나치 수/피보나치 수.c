#include <stdio.h>

int main() {
    int n, a=0, b=1, sum;
    scanf("%d", &n);

    for (int i=0;i<n;i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d", a);
}
