#include <stdio.h>

int main() {
    int n, sum=0, a, b, c;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d %d %d", &a, &b, &c);
        if (a<b){
            sum+=(b-a)*c;
        }
    }
    printf("%d", sum);
}