#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a>11&&a<17) {
        if (b==0) {
            printf("320");
        }
        else {
            printf("280");
        }
    }
    else {
        printf("280");
    }
}