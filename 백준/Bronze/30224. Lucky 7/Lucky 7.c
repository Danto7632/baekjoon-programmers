#include <stdio.h>

int main() {
    int a, answer;
    scanf("%d", &a);

    if (a%7==0){
        answer=1;
        while (a!=0){
            if (a%10==7){
                answer=3;
                break;
            }
            a/=10;
        }
    }
    else {
        answer=0;
        while (a!=0){
            if (a%10==7){
                answer=2;
                break;
            }
            a/=10;
        }
    }

    printf("%d", answer);
}