#include <stdio.h>

int main() {
    int m,k;
    scanf("%d %d", &m, &k);
    printf("%s", m%k==0?"Yes":"No");
}