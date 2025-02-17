#include <stdio.h>

int main() {
    int n, pac=1;
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        pac*=i;
    }
    printf("%d", pac);
}