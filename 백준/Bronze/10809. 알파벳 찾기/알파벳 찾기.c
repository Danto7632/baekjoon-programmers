#include <stdio.h>
#include <string.h>


int main(void) {
    int len;
    char S[100]={0};
    int R[26]={0};
    
    scanf("%s", S);
    len = strlen(S);
    
    for (int i=0;i<26;i++) {
        for (int j=0;j<len;j++) {
            if (S[j] == 97+i) {
                R[i] = j+1;
                break;
            }
        }
        printf("%d ", R[i]-1);
    }
}