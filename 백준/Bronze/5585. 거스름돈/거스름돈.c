#include <stdio.h>

int main() {
    int n, a=1000,count=0;
    scanf("%d", &n);
    a-=n;
    while (1){
        if (a==0){
            break;
        }
        else if (a>=500){
            a-=500;
            count++;
        }
        else if (a>=100){
            a-=100;
            count++;
        }
        else if (a>=50){
            a-=50;
            count++;
        }
        else if (a>=10){
            a-=10;
            count++;
        }
        else if (a>=5){
            a-=5;
            count++;
        }
        else if (a>=1){
            a-=1;
            count++;
        }
    }
    printf("%d", count);
}