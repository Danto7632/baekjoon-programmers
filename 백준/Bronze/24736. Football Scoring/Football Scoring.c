#include <stdio.h>

int main() {
    int T, F, S, P, C;
    int T2, F2, S2, P2, C2;

    scanf("%d %d %d %d %d", &T, &F, &S, &P, &C);
    scanf("%d %d %d %d %d", &T2, &F2, &S2, &P2, &C2);

    printf("%d %d", T*6+F*3+S*2+P+C*2, T2*6+F2*3+S2*2+P2+C2*2);
}