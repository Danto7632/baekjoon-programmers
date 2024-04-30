#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    while (1){
        if (a+b>c&&a+c>b&&b+c>a){
            printf("%d", a+b+c);
            break;
        }
        else {
            a>b?a>c?a--:c--:b>c?b--:c--;
        }
    }
}