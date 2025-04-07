#include <stdio.h>

int main() {
    int a,sum=0,min=-1;
    for (int i=0;i<4;i++){
        scanf("%d", &a);
        sum+=a;
        if (min==-1){
            min = a;
        }
        else if (min > a){
            min = a;
        }
    }
    sum-=min;
    min=-1;
    for (int i=0;i<2;i++){
        scanf("%d", &a);
        sum+=a;
        if (min==-1){
            min = a;
        }
        else if (min > a){
            min = a;
        }
    }
    sum-=min;
    printf("%d", sum);
}