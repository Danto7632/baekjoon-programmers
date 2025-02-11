#include <stdio.h>

int main() {
    int N, SIZE[6], T, P, SUM=6;
    scanf("%d", &N);
    for (int i=0;i<6;i++){
        scanf("%d", &SIZE[i]);
    }
    scanf("%d %d", &T, &P);
    for (int i=0;i<6;i++){
        if (SIZE[i]==0){
            SUM--;
            continue;
        }
        else if (SIZE[i]%T==0){
            SIZE[i]--;
        }
        SUM += SIZE[i]/T;
    }
    printf("%d\n%d %d", SUM, N/P, N-N/P*P);
}