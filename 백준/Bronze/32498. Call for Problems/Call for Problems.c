#include <stdio.h>

int main() {
    int n, a, count=0;
    scanf("%d", &n);

    for (int i=0;i<n;i++){
        scanf("%d", &a);
        if (a%2!=0){
            count++;
        }
    }
    printf("%d", count);
}