#include <stdio.h>

int main() {
    int a,low1=0,low2=0;
    for (int i=0;i<5;i++){
        scanf("%d",&a);
        if (i<3){
            low1=low1==0?a:low1>a?a:low1;
        }
        else {
            low2=low2==0?a:low2>a?a:low2;
        }
    }
    printf("%d", low1+low2-50);
}