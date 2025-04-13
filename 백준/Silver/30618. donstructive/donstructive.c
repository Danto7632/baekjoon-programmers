#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1;i<=n;i+=2){
        printf("%d " ,i);
    }
    if (n%2==0){
        for (int i=n;i>0;i-=2){
            printf("%d ", i);
        }
    }
    else {
        for (int i=n-1;i>0;i-=2){
            printf("%d ", i);
        }
    }
}