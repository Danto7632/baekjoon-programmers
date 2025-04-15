#include <stdio.h>

int main() {
    int n,a,b=1;
    scanf("%d", &n);
    a=n;
    for (int i=0;i<n;i++){
        if (i%2==0){
            printf("%d ", a--);
        }
        else {
            printf("%d ", b++);
        }
    }
}