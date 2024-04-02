#include <stdio.h>

int main(void) {
    int n, we, he, count=0, a[100][100]={0};
    
    scanf("%d", &n);
    
    for (int i=0;i<n;i++) {
        scanf("%d %d", &we, &he);
        for (int j=he-1;j<he+9;j++) {
            for (int k=we-1;k<we+9;k++) {
                if (a[j][k] != 1) {
                    a[j][k] = 1;
                    count++;
                }
            }
        }
    }
    printf("%d", count);
}