#include <stdio.h>

int main() {
    int E=0,S=0,M=0,AE,AS,AM,count=0;
    scanf("%d %d %d", &AE, &AS, &AM);
    while (1){
        if ((E == AE && S == AS) && M == AM){
            printf("%d", count);
            break;
        }
        else {
            E = E==15?1:E+1;
            S = S==28?1:S+1;
            M = M==19?1:M+1;
            count++;
        }
    }
}