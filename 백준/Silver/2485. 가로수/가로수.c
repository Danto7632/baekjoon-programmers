#include <stdio.h>

int uc(int x, int y);

int main() {
    int n, first, a, b, diff1, diff2;
    scanf("%d\n%d\n%d", &n, &a, &b);
    first = a;
    diff1 = b-a;
    for (int i=0;i<n-2;i++){
        a = b;
        scanf("%d", &b);
        diff2 = b-a;
        diff1 = uc(diff1, diff2);
    }
    printf("%d", (b - first)/diff1 - n+1);
}

int uc(int x, int y){
    int z;
    while(y != 0){
        z = x % y;
        x = y;
        y = z;
    }
    return x;
}