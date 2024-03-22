#include <stdio.h>

int main(void) {
    int n;
    char S[1000];
    
    scanf("%s %d", S, &n);
    
    printf("%c", S[n-1]);
}