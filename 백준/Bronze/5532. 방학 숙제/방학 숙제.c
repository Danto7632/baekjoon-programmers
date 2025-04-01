#include <stdio.h>

int main() {
    int L,A,B,C,D;
    scanf("%d\n%d\n%d\n%d\n%d", &L, &A, &B, &C, &D);
    printf("%d", L - ((A/C+(A%C==0?0:1))>(B/D+(B%D==0?0:1))?(A/C+(A%C==0?0:1)):(B/D+(B%D==0?0:1))));
}