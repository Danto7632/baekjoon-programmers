#include <stdio.h>

int main(void){
    int a1, a2, c, n;
    scanf("%d %d\n%d\n%d", &a1, &a2, &c, &n);

    for (int i=n;i<101;i++){
        if (a1*i+a2 <= c*i){
            if (i==100){
                printf("1");
            }
            continue;
        }
        else {
            printf("0");
            break;
        }
    }
}