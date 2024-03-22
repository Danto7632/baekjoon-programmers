#include <stdio.h>

int main(void) {
    int n, sum=0;
    char S[100];
    
    scanf("%d %s", &n, S);
    
    for (int i=0;i<n;i++) {
        sum += S[i]-48;
    }
    
    printf("%d", sum);
}