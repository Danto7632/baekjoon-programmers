#include <stdio.h>

int main() {
    int a,time=0;
    for (int i=0;i<4;i++){
        scanf("%d", &a);
        time+=a;
    }
    printf("%d\n%d",time/60,time%60);
}