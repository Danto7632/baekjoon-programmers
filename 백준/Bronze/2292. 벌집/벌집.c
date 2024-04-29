#include <stdio.h>

int main(){
    int n, a=1, count=0;
    scanf("%d", &n);
    while (n>0){
        n-=a;
        if (a==1){
            a*=6;
            count++;
        }
        else {
            a+=6;
            count++;
        }
    }
    printf("%d", count);
}
/*
1	1
2~7	6
8~19	12
20~37	18
38~61	24
*/