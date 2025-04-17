#include <stdio.h>

int main() {
    int n,a,b;
    scanf("%d", &n);

    a = n/2==0?1:n/2;
    b = n;
    
    if (n%2==0){
        
        for (int i=0;i<n;i++){
            if (i%2==0){
                printf("%d ", a--);
            }
            else {
                printf("%d ", b--);
            }
        }
    }
    else {
        for (int i=0;i<n;i++){
            if (i%2==0){
                printf("%d ", a++);
            }
            else {
                printf("%d ", b);
                if (b==n){
                    b = 0;
                }
                b++;
            }
        }
    }
}