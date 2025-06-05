#include <stdio.h>

int main() {
    int n,a,b;
    scanf("%d %d %d", &n, &a, &b);
    b=n>b?n:b;
    if (a<b){
        printf("Bus");
    }
    else if (a==b){
        printf("Anything");
    }
    else {
        printf("Subway");
    }
}