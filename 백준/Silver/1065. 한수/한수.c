#include <stdio.h>

int main() {
    int a=1, n, count=0;
    scanf("%d", &n);
    while(a!=n+1){
        if (a<100){
            count++;
        }
        else {
            if (a%10-a/10%10==a/10%10-a/100){
                count++;
            }
        }
        a++;
    }
    
    printf("%d", count);
}