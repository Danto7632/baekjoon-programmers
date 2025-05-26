#include <stdio.h>

int main() {
    int n,c,k,sum=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d %d", &c, &k);
        sum+=c*k;
    }
    printf("%d", sum);
}