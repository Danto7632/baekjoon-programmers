#include <stdio.h>

int main(void){
    int n,a,b;
    int sum = 0;
    scanf("%d", &n);
    
    for (int i=0;i<n;i++) {
        scanf("%d %d\n", &a, &b);
        printf("%d\n", a+b);
    }
}