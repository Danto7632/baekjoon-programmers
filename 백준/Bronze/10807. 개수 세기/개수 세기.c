#include <stdio.h>

int main(void){
    int n,check;
    int count=0;
    
    scanf("%d\n", &n);
    
    int a[n];
    
    for (int i=0;i<n;i++){
        scanf("%d ", &a[i]);
    }
    scanf("\n%d", &check);
    for (int i=0;i<n;i++){
        if (a[i]==check)
            count++;
    }
    printf("%d", count);
}