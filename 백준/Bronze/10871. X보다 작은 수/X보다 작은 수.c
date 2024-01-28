#include <stdio.h>

int main(void) {
    int n, c;
    scanf("%d %d\n", &n, &c);
    int a[n];
    
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
        if (a[i]<c){
            printf("%d ", a[i]);
        }
    }
}