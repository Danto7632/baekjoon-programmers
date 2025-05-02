#include <stdio.h>

int main() {
    int apple1,apple2,orange1,orange2;
    scanf("%d %d\n%d %d", &apple1, &orange1, &apple2, &orange2);
    printf("%d", (apple1+orange2)>(apple2+orange1)?(apple2+orange1):(apple1+orange2));
}