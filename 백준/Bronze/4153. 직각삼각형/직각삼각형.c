#include <stdio.h>

int check(int a, int b, int c);

int main() {
    int a,b,c;
    while (1){
        scanf("%d %d %d", &a, &b, &c);
        if (a==0){
            break;
        }
        check(a,b,c);
    }
}

int check(int a, int b, int c)
{
    int a1,b1,c1;
    a1 = a<b?a<c?a:c:b<c?b:c;
    c1 = a>b?a>c?a:c:b>c?b:c;
    b1 = a+b+c-a1-c1;

    if (a1*a1 + b1*b1 == c1*c1){
        printf("right\n");
    }
    else {
        printf("wrong\n");
    }
}