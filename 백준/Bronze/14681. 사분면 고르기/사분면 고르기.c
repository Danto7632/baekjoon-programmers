#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d\n%d", &a, &b);
    a>0&&b>0?printf("1"):a<0&&b>0?printf("2"):a<0&&b<0?printf("3"):printf("4");
}