#include <stdio.h>

int main() {
    int n,a,sum=0;
    scanf("%d", &n);
    for (int i=0;i<3;i++){
        scanf("%d", &a);
        sum += a>n?n:a;
    }
    printf("%d", sum);
}