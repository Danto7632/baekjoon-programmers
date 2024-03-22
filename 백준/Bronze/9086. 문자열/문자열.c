#include <stdio.h>
#include <string.h>

int main(void) {
    int n, len;
    char S[1000];
    
    scanf("%d", &n);
        
    for (int i=0;i<n;i++) {
        scanf("%s", S);
        len = strlen(S)-1;
        printf("%c%c\n", S[0], S[len]);
    }
}