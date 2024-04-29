#include <stdio.h>

int main(){
    int T, n, count;
    scanf("%d", &T);
    count = T;
    for (int i=0;i<T;i++){
        scanf("%d", &n);
        if (n==1){
            count--;
            continue;
        }
        for (int j=2;j<n;j++){
            if (n%j==0){
                count--;
                break;
            }
        }
    }
    printf("%d", count);
}