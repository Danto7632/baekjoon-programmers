#include <stdio.h>

int main() {
    int sum1=0,sum2=0,a;
    for (int i=0;i<4;i++){
        scanf("%d", &a);
        sum1+=a;
    }
    for (int i=0;i<4;i++){
        scanf("%d", &a);
        sum2+=a;
    }
    printf("%d", sum1>sum2?sum1:sum2);
}