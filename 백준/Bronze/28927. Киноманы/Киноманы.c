#include <stdio.h>

int main() {
    int Max[3], Mel[3];
    scanf("%d %d %d\n%d %d %d", &Max[0], &Max[1], &Max[2], &Mel[0], &Mel[1], &Mel[2]);
    if (Max[0]*3+Max[1]*20+Max[2]*120>Mel[0]*3+Mel[1]*20+Mel[2]*120){
        printf("Max");
    }
    else if (Max[0]*3+Max[1]*20+Max[2]*120==Mel[0]*3+Mel[1]*20+Mel[2]*120){
        printf("Draw");
    }
    else {
        printf("Mel");
    }
}