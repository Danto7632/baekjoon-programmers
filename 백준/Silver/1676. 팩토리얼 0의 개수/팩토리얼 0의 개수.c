#include <stdio.h>

int main() {
    int n, a, two=0, five=0;
    scanf("%d", &n);
    for (int i=1;i<n+1;i++){
        a=i;
        while(a%2==0){
            a/=2;
            two++;
        }
        while(a%5==0){
            a/=5;
            five++;
        }
    }
    printf("%d", two<five?two:five);
}