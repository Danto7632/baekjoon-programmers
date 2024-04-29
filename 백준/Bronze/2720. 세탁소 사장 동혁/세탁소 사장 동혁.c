#include <stdio.h>

int main(){
    int T, money;
    scanf("%d", &T);

    for (int i=0; i<T;i++){
        int a[4] = {0, };
        scanf("%d", &money);
        for (int j=1;money >= 25;j++){
            money-=25;
            a[0] = j;
        }
        for (int j=1;money >= 10;j++){
            money-=10;
            a[1] = j;
        }
        for (int j=1;money >= 5;j++){
            money-=5;
            a[2] = j;
        }
        for (int j=1;money >= 1;j++){
            money-=1;
            a[3] = j;
        }
        printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
    }
}