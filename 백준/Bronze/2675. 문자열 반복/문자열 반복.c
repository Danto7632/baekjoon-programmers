#include <stdio.h>
#include <string.h>


int main(void) {
    int T, R, len;
    char S[21]={0};
    char P[161]={0};
    
    scanf("%d", &T);
    
    for (int i=0;i<T;i++) {
        scanf("%d %s", &R, S);
        len = strlen(S);
        for (int j=0;j<len;j++) {
            for (int k=0;k<R;k++) {
                P[j*R+k] = S[j];
            }
        }
        for (int j=0;j<len;j++) {
            S[j] = '\0';
        }
        
        len = strlen(P);
        for (int j=0;j<len;j++) {
            printf("%c", P[j]);
        }
        printf("\n");

        for (int j=0;j<len;j++) {
            P[j] = '\0';
        }

    }
}