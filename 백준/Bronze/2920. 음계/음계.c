#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);
    if (n==1) {
        for (int i=2;i<9;i++) {
        scanf("%d", &n);
            if (i==n) {
                if (i==8) {
                    printf("ascending");
                }
            }
            else {
                printf("mixed");
                break;
            }
        }
    }
    else if (n==8) {
        for (int i=7;i>0;i--) {
        scanf("%d", &n);
            if (i==n) {
                if (i==1) {
                    printf("descending");
                }
            }
            else {
                printf("mixed");
                break;
            }
        }
    }
    else {
        printf("mixed");
    }
}