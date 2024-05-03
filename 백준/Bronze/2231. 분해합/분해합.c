#include <stdio.h>

int main(void){
    int n, sum, s;
    scanf("%d", &n);
    for (int i=0;i<1000000;i++){
        sum = i;
        s = i;
        while (s%10!=0){
            sum += s%10;
            s/=10;
        }
        if (sum == n){
            printf("%d", i);
            break;
        }
    }
    if (sum != n){
        printf("0");
    }
}
