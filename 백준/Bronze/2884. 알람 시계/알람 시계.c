#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    if (b-45<0) {
        a-=1;
        b+=15;
        if (a<0)
            a=23;
    }
    else
        b-=45;
    
    printf("%d %d", a, b);
}