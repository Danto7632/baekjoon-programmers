#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d\n%d", &a, &b, &c);
    b+=c;
    a+=b/60;
    b%=60;
    
    if (a>23)
        a-=24;
    
    printf("%d %d", a, b);
}