#include <stdio.h>

int main() {
    long long int n,mul=1;
    scanf("%lld", &n);
    for (int i=1;i<n+1;i++){
        mul*=i;
    }
    printf("%lld", mul);
}